# Docker

## Installation

```sh
sudo apt update
sudo apt dist-upgrade -y
sudo apt install ca-certificates curl -y
sudo install -m 0755 -d /etc/apt/keyrings
sudo curl -fsSL https://download.docker.com/linux/ubuntu/gpg -o /etc/apt/keyrings/docker.asc
sudo chmod a+r /etc/apt/keyrings/docker.asc
echo "deb [arch=$(dpkg --print-architecture) signed-by=/etc/apt/keyrings/docker.asc] https://download.docker.com/linux/ubuntu $(. /etc/os-release && echo "${UBUNTU_CODENAME:-$VERSION_CODENAME}") stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null

sudo apt update
sudo apt dist-upgrade -y

sudo apt install docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin docker-doc -y
```

## Setup

```sh
sudo groupadd docker
sudo usermod -aG docker $USER
```

## Hello World

```sh
docker run hello-world
```

## Visual Studio Code

### Requirements


- :material-view-grid-plus-outline: Extensions
   (**++ctrl+shift+x++** | File :material-arrow-right: Preferences
   :material-arrow-right: Extensions)
    - :octicons-container-24: ms-azuretools.vscode-containers
    - :material-docker: ms-azuretools.vscode-docker
    - :material-cube: ms-vscode-remote.remote-containers

### Container Tools

- :octicons-container-24: Container Tools extension menu in the primary side bar
  (**++ctrl+b++**) makes it easy to build, manage, an deploy containers
- Container Explorer facilitates the management of container assets
  (containers, images, volumes, networks)

See more information on
[Containers in Visual Studio Code](https://code.visualstudio.com/docs/containers/overview).

### Developing inside a Container

![Docker Visual Studio Code Development Environment inside Container](../../assets/tools/docker/architecture-containers.png)

Source:
[https://code.visualstudio.com/docs/devcontainers/containers](https://code.visualstudio.com/docs/devcontainers/containers)

- Setup a `devcontainer.json` dev container configuration file for your project,
  either located under `.devcontainer/devcontainer.json` or as a
  `.devcontainer.json` file (note the dot-prefix) in the project root
- Use the command (**++ctrl+shift+p++** :material-arrow-right:
  `>dev containers reopen`) **Dev Containers: Reopen in Container** to connect
  with Visual Studio Code and start developing within the container

**Example**
```yaml title="docker-compose.yml"
services:
  ubuntu24:
    image: ubuntu:24.04
    container_name: ubuntu24
    volumes:
      - ./shared_data:/home/ubuntu/shared_data
    tty: true
```

- Create a container based on the image from Ubuntu 24.04 LTS
- Link the folder `shared_data` present in your project's root directory to the
  folder `/home/ubuntu/shared_data` inside the container

```json title=".devcontainer/devcontainer.json"
// For format details, see https://aka.ms/devcontainer.json. For config options, see the
// README at: https://github.com/devcontainers/templates/tree/main/src/docker-existing-docker-compose
{
	// Name for the dev container. This is displayed in the VS Code UI.
	"name": "Example Dev Containers with Docker Compose",
	// Update the 'dockerComposeFile' list if you have more compose files or use different names
	"dockerComposeFile": [
		"../docker-compose.yml"
	],
	// The 'service' property is the name of the service for the container that VS Code should use from the compose files.
	// Update this value and .devcontainer/docker-compose.yml to the real service name
	"service": "ubuntu24",
	// The optional 'workspaceFolder' property is the path VS Code should open by default when connected.
	// This is typically a file mount in .devcontainer/docker-compose.yml
	"workspaceFolder": "/home/ubuntu/shared_data/",
	// Features to add to the dev container. More info: https://containers.dev/features.
	// "features": {},
	// Use 'forwardPorts' to make a list of ports inside the container available locally.
	// "forwardPorts": [],
	// Uncomment the next line if you want start specific services in your Docker Compose config.
	// "runServices": [],
	// Uncomment the next line if you want to keep your containers running after VS Code shuts down.
	"shutdownAction": "stopCompose",
	// Command string or list of command arguments to run on the **host machine** during initialization
	// "initializeCommand": [
	// 	"echo 'Initializing the dev container...'",
	// 	"echo 'This is a placeholder for any initialization commands you might want to run.'"
	// ],
	// Uncomment the next line to run commands after the container is created.
	// Subsequent commands execute **inside the container** immediately after it has started for the first time
	"postCreateCommand": "cat /etc/os-release",
	// Configure tool-specific properties.
	"customizations": {
		"vscode": {
			// Uncomment the next line to install VS Code extensions.
			"extensions": [
				"ms-vscode.cpptools-extension-pack",
				"ms-python.python",
				"ms-python.debugpy",
				"ms-python.vscode-pylance",
				"cschlosser.doxdocgen",
				"redhat.vscode-xml",
				"redhat.vscode-yaml",
				"tomoki1207.pdf"
			]
			// Uncomment the next line to set a specific VS Code version.
			// "vscodeVersion": "1.60.0"
		}
	}
	// Uncomment to connect as an existing user other than the container default. More info: https://aka.ms/dev-containers-non-root.
	// "remoteUser": "devcontainer"
}
```

!!! Warning

    If you try to remove files inside the shared folder between container and
		host machine, the following error may appear: _EACCES: permission denied_.
    This error is due to the changes on the folder's privileges (`$ ll`).
    A solution is to remove the file with `sudo`, changing back the folder's
		privileges, among others.

See more information on
[Developing inside a Container in Visual Studio Code](https://code.visualstudio.com/docs/devcontainers/containers)
and
[Dev Container metadata reference](https://containers.dev/implementors/json_reference/).
