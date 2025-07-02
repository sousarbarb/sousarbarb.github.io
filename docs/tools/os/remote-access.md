# Remote Access

!!! Tip

    If you want to have a remote graphical output without having a monitor
    connected to the SBC (AnyDesk, RustDesk, Remmina w/ VNC),
    use the **HDMI Dummy Plug**.

## AnyDesk

1. Download AnyDesk (available at
   [https://anydesk.com/en/downloads/linux](https://anydesk.com/en/downloads/linux))
2. Execute the following commands
    ```sh
    cd ~/Downloads/
    sudo apt update
    sudo apt install ./anydesk_7.0.0-1_amd64.deb
    ```
3. Open AnyDesk
4. _(optional)_ Set an alias to use it for remote access instead of the
   AnyDesk ID
5. Open the :material-menu: Menu :material-arrow-right:
   :material-wrench: Settings
    - :material-lock: Security :material-arrow-right: :material-security: Unlock
        - Enable unattended access:
            - Set a password
            - Set _Full Access_ for the permission profile
        - _(optional)_ Disable _Search local network for other AnyDesk clients_
        - _(optional)_ Enable _Exclude this device from discovery_
    - _(optional)_ :fontawesome-solid-display: Display
        - Set _Best performance_ in the quality
        - Set _Optimize screen usage (strecht)_ in view mode

!!! Tip

    If you are having problems connecting to another computer through AnyDesk,
    try to remove the local cache folder.

    ```sh
    ll ~/.anydesk/
    rm -rf ~/.anydesk/
    ```

!!! Warning

    AnyDesk requires both remote access endpoints to have Internet connection.

!!! Warning

    Some IT managers may lock the remote access through AnyDesk by disabling
    connections through `*.net.anydesk.com`, even if both endpoints have an
    Internet connection.
    More information in
    [https://support.anydesk.com/knowledge/firewall](https://support.anydesk.com/knowledge/firewall).

## RustDesk

1. Download RustDesk (available at
   [https://github.com/rustdesk/rustdesk/releases/](https://github.com/rustdesk/rustdesk/releases/))
2. Execute the following commands
    ```sh
    cd ~/Downloads/
    sudo apt update
    sudo apt install ./rustdesk-1.4.0-x86_64.deb -y
    ```
3. Open RustDesk
4. Open the :material-menu: Menu :material-arrow-right:
   :material-wrench: Settings:
    - :material-lock: Security :material-arrow-right: :material-security: Unlock
      Security Settings
        - Use permanent password
        - _(optional)_ Deny LAN discovery
        - _(optional)_ Enable direct IP access :material-arrow-right: Define
          the Port (e.g., `21118`)
    - _(optional)_ :fontawesome-solid-display: Display
        - Set _Scale adaptive_
        - Set _Optimize reaction time_
        - Other default options
            - [x] Show monitors in toolbar
            - [x] Enable file copy and paste
            - [x] Use all my displays for the remote session

!!! Tip

    RustDesk is an open-source remote access software as an alternative to
    AnyDesk and similiar applications, allowing your own self-hosted servers
    and direct IP access to your machine.

!!! Warning

    Direct IP access through RustDesk remote connection is unecrypted!

## Remmina

**Ubuntu 24.04.2 LTS**

1. Execute the following commands
    ```sh
    sudo apt install remmina remmina-plugin-rdp -y
    sudo apt install xrdp -y    # server for Microsoft's Remote Desktop protocol (RDP)
    ```
2. Open :fontawesome-solid-gear: Settings :material-arrow-right:
   :fontawesome-solid-gear: System :material-arrow-right: Remote Desktop
    - Enable _Desktop Sharing_
    - Enable _Remote Control_
    - Generate New Password

        !!! Warning

            Do not use your account password for remote connection, the client
            can see the password remotely!

3. Open Remmina on the client side
4. Open an RDP connection with the address `<IP address>:<port: e.g., 3390>`

**...older Ubuntu versions...**

1. Execute the following commands
    ```sh
    sudo apt install remmina remmina-plugin-vnc -y
    sudo apt install vino -y
    ```
2. Open :fontawesome-solid-gear: Settings :material-arrow-right:
   :material-share-variant-outline: Sharing :material-arrow-right: Enable
   _Screen Sharing_
3. Open Remmina on the client side
4. Open a VNC connection with the address
   `<computer name>.local` or `<IP address>`

## Secure Shell (SSH)

```sh
# Server Computer
sudo apt install openssh-server

# Remote access / Client Computer
sudo apt install openssh-client

ssh <username>@<IP address>
```

!!! Warning

    SSH 22 default port must be open in your network's firewall settings.

## ZeroTier

1. Execute the following commands
    ```sh
    curl -s 'https://raw.githubusercontent.com/zerotier/ZeroTierOne/main/doc/contact%40zerotier.com.gpg' | gpg --import && if z=$(curl -s 'https://install.zerotier.com/' | gpg); then echo "$z" | sudo bash; fi

    sudo zerotier-cli info
    ```
2. Go to [https://my.zerotier.com/](https://my.zerotier.com/)
   :material-arrow-right: Create A Network
    - Enable _Auto-Assign from Range_ for the _IPv4 Auto-Assign_
    - Enable _Broadcast_ for _Multicast_
3. Execute the following commands
    ```sh
    sudo zerotier-cli join <Network ID>
    ```
4. Go to [https://my.zerotier.com/](https://my.zerotier.com/)
   :material-arrow-right: Access the network previously created
   :material-arrow-right: Authorize the new device
5. Execute the following commands
    ```sh
    ifconfig  # (1)!
    ```

    1. should appear a new network interface specific to ZeroTier with an
       auto-assigned **STATIC** IP address

6. Execute remote access through VNC, SSH, or another method that allows IP
   direct access **using the ZeroTier IP address**

    !!! Warning

        Both devices should be added in your private ZeroTier network
