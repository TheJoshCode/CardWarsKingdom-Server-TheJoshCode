## THIS WAS ORIGINALLY MADE BY shishkabob27, BUT IVE MADE SOME FIXES THAT WERE BLOCKING IT FROM WORKING, AND QOL IMPROVEMENTS.

## HIS REPO WAS ARCHVIED, SO IM JUST REPOSTING INSTEAD OF PRING

# ------------------------------------------------------

# SETUP

# WINDOWS

```bash
CardWarsServer.exe
```
### the exe handles all the venv n stuff, made it really simple now. (not that it was crazy hard but now its a one-click launch)

# LINUX
```bash
CardWarsServer.sh
```

### also a one-click launch for linux.

# ------------------------------------------------------

# HOW CONNECT TO OWN SERVER

## 1.) set both the server_url and local_server_url in Card Wars Kingdom_Data/server_settings.json to http://127.0.0.1:5000/

### should look like this:

<img width="646" height="165" alt="image" src="https://github.com/user-attachments/assets/9b18e824-ea03-452d-bada-ef358f42ac19" />

## 2.) now just launch the game

# ------------------------------------------------------


# HOW PLAY WITH FRIEND

## 1.) join a vpn network together, I use Tailscale but Hamachi also works.

## 2.) set the server IP to their VPN LAN IP, in most apps itll show their IP next to their name.

## 3.) launch game
# ------------------------------------------------------
# ORIGINAL README

# Card Wars Kingdom Reversed-Engineered Server

This is a reversed-engineered server for Card Wars Kingdom, designed for version 1.0.17 but it should also work with 1.19.1 available here: https://github.com/shishkabob27/CardWarsKingdom.

**Disclaimer**: This server is intended for use only by individuals you trust, as it lacks essential security measures in this version.

Blueprints are sourced from the original CWK and may require changes.

## Setup

1. **Server Configuration**: Navigate to `CardWarsKingdom/Card Wars Kingdom_data/StreamingAssets/server_settings.json` and replace the `server_url` with the web address of the server you want to connect to. You should also replace `photon_chat_app_id` and `photon_pun_app_id` if you intend to use PVP and Chat.

2. **VPN Usage**: It is recommended to use a VPN when connecting to someone else's server as your IP address will be logged.

## Running the Server

Make sure to install the required packages using `pip install -r requirements.txt`.

To run the server, simply run `python app.py`.
By default, the server will run on port 5000, however you can specify a different port by running `python app.py --port <port>`.

You can also use [Gunicorn](https://gunicorn.org/) to run the server with multiple workers.
Install Gunicorn using `pip install gunicorn` and run `gunicorn app:app` to start the server.
By default, Gunicorn will run on port 8000, however you can specify a different port by running `gunicorn app:app --bind 127.0.0.1:<port>`.

## Additional Setup

It is recommended to set up Chat and PUN servers with [Photon](https://www.photonengine.com/) if you want to play PVP and use chat exclusively with users of your server.
