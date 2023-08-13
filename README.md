# sousarbarb.github.io

Personal webpage of Ricardo B. Sousa.

## Setup

### GitHub Repository

```sh
mkdir ~/sousarbarb_ws/src -p
cd ~/sousarbarb_ws/src
git clone git@github.com:sousarbarb/sousarbarb.github.io.git
```

### Jekyll

1. Install all prerequisites (see https://jekyllrb.com/docs/installation/)
   ```sh
   # Check if requirements are installed
   ruby -v
   gem -v
   gcc -v

   # Install Ruby and other prerequisites
   sudo apt install ruby-full build-essential zlib1g-dev -y

   # RubyGems environment
   echo '## RUBY + JEKYLL' >> ~/.bashrc
   echo 'export GEM_HOME="$HOME/gems"' >> ~/.bashrc
   echo 'export PATH="$HOME/gems/bin:$PATH"' >> ~/.bashrc
   source ~/.bashrc
   ```
2. Install the jekyll and bundler gems
   ```sh
   sudo gem install jekyll bundler
   ```
   - Jekyll may have problems installing it in Ubuntu 20 LTS with Ruby 2.7
     (https://stackoverflow.com/questions/75452016/)
   - Set up the Ruby Version Manager (RVM) (https://rvm.io/rvm/install,
     https://github.com/rvm/ubuntu_rvm):
     ```sh
     sudo apt install software-properties-common -y

     sudo apt-add-repository -y ppa:rael-gc/rvm
     sudo apt update
     sudo apt install rvm -y

     sudo usermod -a -G rvm $USER

     echo 'source "/etc/profile.d/rvm.sh"' >> ~/.bashrc
     source ~/.bashrc
     ```
   - Use RVM to update your Ruby version:
     ```sh
     sudo su
     source /etc/profile.d/rvm.sh

     rvm install 3.0
     rvm docs generate-ri
     rvm use 3.0.0 --default
     rvm -v
     rvm gemset update

     gem install jekyll
     jekyll -v
     ```

Source: https://jekyllrb.com/docs/

## Build & Run

```sh
cd ~/sousarbarb_ws/src/sousarbarb.github.io/
gem install bundle
gem update --system
bundle install
bundle exec jekyll serve
```
