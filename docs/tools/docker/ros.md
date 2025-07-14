# Robot Operating System (ROS) and Docker

## Dockerfiles

### Images

```sh
# ROS 1
docker pull osrf/ros:noetic-desktop

# ROS 2
docker pull osrf/ros:foxy-desktop
docker pull osrf/ros:humble-desktop
docker pull osrf/ros:jazzy-desktop
docker pull osrf/ros:rolling-desktop

# List local Docker images
docker images
```

### Dockerfile

- [:material-file: ROS 2 Humble @ Jammy](../../assets/tools/docker/ros/ros2humble.Dockerfile)

**Example**

```dockerfile
FROM osrf/ros:humble-desktop

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive
ENV ROS_DISTRO=humble
ENV USER=user
ENV HOME=/home/$USER

# Install additional packages
RUN apt-get update && apt-get install -y \
  sudo \
  curl \
  wget \
  git \
  nano \
  neovim \
  python3-pip \
  python3-colcon-common-extensions \
  python3-rosdep \
  python3-vcstool \
  bash-completion \
  && rm -rf /var/lib/apt/lists/*

# Create user and home directory
RUN useradd -m -d $HOME -s /bin/bash $USER && \
  echo "$USER:$USER" | chpasswd && \
  usermod -aG sudo $USER && \
  echo "$USER ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

# ROS 2
USER $USER
WORKDIR $HOME

RUN mkdir -p $HOME/ros_ws/src

RUN echo "source /opt/ros/$ROS_DISTRO/setup.bash" >> $HOME/.bashrc && \
  echo "source $HOME/ros_ws/install/setup.bash" >> $HOME/.bashrc

# Initialize rosdep
USER root
RUN rosdep init || true
USER $USER
RUN rosdep update

# Set working directory to home and default command
WORKDIR $HOME
CMD ["/bin/bash"]

```

### Build

```sh
docker build -t <name:tag> -f <filename>.Dockerfile .
```

### Run

```sh
# Automatically remove the container and its anonymous volumes when it exits
docker run --rm -it <name:tag> bash
```

## Dev Containers

### Quick Guide

1. Configure the Visual Studio Code based on requirements for Docker development
   (see [Visual Studio Code Requirements](index.md#requirements) for further
   information)
2. Clone the repository and open the example for container-based ROS development
   with Visual Studio Code
    ```sh
    git clone git@github.com:sousarbarb/sousarbarb.github.io.git

    cd sousarbarb.github.io.git/src/docker/ros/
    code .
    ```
3. Use the command (**++ctrl+shift+p++** :material-arrow-right:
  `>dev containers reopen`) **Dev Containers: Reopen in Container** and select
  the desired `devcontainer.json` file

### Explanation

**`.devcontainer/`**

- Define multiple `devcontainer.json` files for different containers
- Separation on folders by the containers / services names is just for
  organization purposes

**`devcontainer.json` files**

- Link to the `docker-compose.yml` file in the root of the project
- Selects the service (in our case, directly the container) to execute the Dev
  Container
- `"postCreateCommand": "echo 'source /opt/ros/<ROS DISTRO>/setup.bash' >> ~/.bashrc && echo 'source /home/ros_ws/<devel|install>/setup.bash' >> ~/.bashrc"`
    - upon the creation of the container, add the source of the ROS environment
      variables to the `~/.bashrc`
- `"postStartCommand": "bash .devcontainer/ros1noetic/setup.sh"`
    - facilitates the build and setup of the project inside the container before
      interacting with it
- See [https://containers.dev/implementors/json_reference/](https://containers.dev/implementors/json_reference/)
  for further information on the Dev Container metadata reference
