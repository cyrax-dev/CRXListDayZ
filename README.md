![GitHub top language](https://img.shields.io/github/languages/top/cyrax-dev/CRXListDayZ) ![GitHub License](https://img.shields.io/github/license/cyrax-dev/CRXListDayZ)

### CRXList DayZ

### 📃 Description

This mod is designed to record Steam IDs of players who log in and out of the game on the DayZ server. This is a server mod for DayZ, not a client mod.

### 🤖 How the mod works

- When a player logs into the server, their Steam ID is written to the `players.json` file.
- When exiting the server, the player's Steam ID is deleted.
- The `players.json` file is created in the `profiles/CRXList` directory

### 🚀Installation

1. Download the `.pbo` file from the repository.
2. Move it to the folder with server mods.
3. Start the server.
4. On first run, the mod will automatically create a `profiles/CRXList` folder with a `players.json` file.


 I use this mod to integrate with Discord-bot or website to keep track of which players are online in real time.
