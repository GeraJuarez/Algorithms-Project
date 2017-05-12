#include <iostream>
#include <string>
#include "graph.h"
#include "game.h"
#include "queue.h"
#include "tags.h"
using namespace std;
int main() {
Graph g;
//Inserting Dota 2
string Dota_2_tags[20] = {"Free to Play","MOBA","Strategy","Multiplayer","Team-Based","Action","e-sports","Online Co-Op","Competitive","PvP","RTS","Difficult","RPG","Fantasy","Tower Defense","Co-op","Character Customization","Replay Value","Action RPG","Simulation"};
g.insert_game("Dota 2", "Valve", "Valve", Dota_2_tags, 20);
cout << "1 insert" << endl;
//Inserting Team Fortress 2
string Team_Fortress_2_tags[20] = {"Free to Play","Multiplayer","FPS","Action","Shooter","Class-Based","Team-Based","Funny","First-Person","Trading","Cartoony","Competitive","Co-op","Online Co-Op","Robots","Comedy","Tactical","Crafting","Cartoon","Moddable"};
g.insert_game("Team Fortress 2", "Valve", "Valve", Team_Fortress_2_tags, 20);
cout << "2 insert" << endl;
//Inserting Unturned
string Unturned_tags[20] = {"Early Access","Free to Play","Survival","Zombies","Multiplayer","Open World","Adventure","Crafting","Action","First-Person","Co-op","Sandbox","Post-apocalyptic","Shooter","FPS","Singleplayer","Indie","Massively Multiplayer","Atmospheric","Casual"};
g.insert_game("Unturned", "Smartly Dressed Games", "Smartly Dressed Games", Unturned_tags, 20);
cout << "3 insert" << endl;
//Inserting Warframe
string Warframe_tags[20] = {"Free to Play","Action","Co-op","Multiplayer","Third-Person Shooter","Sci-fi","Ninja","Shooter","Parkour","Space","Online Co-Op","Futuristic","Third Person","Massively Multiplayer","PvE","RPG","Singleplayer","Hack and Slash","FPS","Cyberpunk"};
g.insert_game("Warframe", "Digital Extremes", "Digital Extremes", Warframe_tags, 20);
cout << "4 insert" << endl;
//Inserting Left 4 Dead 2
string Left_4_Dead_2_tags[20] = {"Zombies","Co-op","FPS","Multiplayer","Action","Online Co-Op","Shooter","Survival","First-Person","Horror","Team-Based","Moddable","Gore","Post-apocalyptic","Survival Horror","Singleplayer","Adventure","Local Co-Op","Tactical","Replay Value"};
g.insert_game("Left 4 Dead 2", "Valve", "Valve", Left_4_Dead_2_tags, 20);
cout << "5 insert" << endl;
//Inserting Robocraft
string Robocraft_tags[20] = {"Early Access","Free to Play","Robots","Building","Multiplayer","Action","Shooter","PvP","Massively Multiplayer","Sandbox","Crafting","Third-Person Shooter","Sci-fi","Strategy","Simulation","Indie","Open World","Funny","RPG","Adventure"};
g.insert_game("Robocraft", "Freejam", "Freejam", Robocraft_tags, 20);
cout << "6 insert" << endl;
//Inserting War Thunder
string War_Thunder_tags[20] = {"Free to Play","World War II","Simulation","Multiplayer","War","Flight","Tanks","Military","Massively Multiplayer","Action","Historical","Realistic","Team-Based","Shooter","Arcade","Co-op","Strategy","FPS","Open World","TrackIR"};
g.insert_game("War Thunder", "Gaijin Entertainment", "Gaijin Entertainment", War_Thunder_tags, 20);
cout << "7 insert" << endl;
//Inserting Paladins
string Paladins_tags[20] = {"Early Access","Free to Play","Multiplayer","FPS","Shooter","Action","Team-Based","MOBA","First-Person","PvP","Online Co-Op","Strategy","Co-op","Fantasy","Massively Multiplayer","Funny","Adventure","Survival","Anime","Memes"};
g.insert_game("Paladins", "Hi-Rez Studios", "Hi-Rez Studios", Paladins_tags, 20);
cout << "8 insert" << endl;
//Inserting Portal
string Portal_tags[20] = {"Puzzle","First-Person","Singleplayer","Sci-fi","Comedy","Female Protagonist","Action","Funny","Platformer","FPS","Story Rich","Short","Physics","Classic","Adventure","Science","Atmospheric","Dark Humor","Great Soundtrack","Strategy"};
g.insert_game("Portal", "Valve", "Valve", Portal_tags, 20);
cout << "9 insert" << endl;
//Inserting Portal 2
string Portal_2_tags[20] = {"Puzzle","Co-op","First-Person","Comedy","Sci-fi","Singleplayer","Adventure","Online Co-Op","Funny","Science","Female Protagonist","Action","Story Rich","Multiplayer","Atmospheric","FPS","Local Co-Op","Strategy","Space","Platformer"};
g.insert_game("Portal 2", "Valve", "Valve", Portal_2_tags, 20);
cout << "10 insert" << endl;
//Inserting Terraria
string Terraria_tags[20] = {"Sandbox","Adventure","Survival","2D","Multiplayer","Crafting","Building","Exploration","Pixel Graphics","Co-op","Indie","Open World","Action","RPG","Online Co-Op","Singleplayer","Platformer","Replay Value","Atmospheric","Family Friendly"};
g.insert_game("Terraria", "Re-Logic", "Re-Logic", Terraria_tags, 20);
cout << "11 insert" << endl;
//Inserting Trove
string Trove_tags[20] = {"Free to Play","Open World","Multiplayer","Adventure","Massively Multiplayer","Building","MMORPG","Sandbox","Action","Pixel Graphics","Crafting","RPG","Third Person","Exploration","Co-op","Dungeon Crawler","Voxel","Funny","Casual","FPS"};
g.insert_game("Trove", "Trion Worlds", "Trion Worlds", Trove_tags, 20);
cout << "12 insert" << endl;
//Inserting PAYDAY 2
string PAYDAY_2_tags[20] = {"Co-op","Action","FPS","Heist","Online Co-Op","Stealth","Multiplayer","Crime","Team-Based","Shooter","First-Person","Great Soundtrack","Gun Customization","Tactical","PvE","Strategy","Singleplayer","Simulation","Funny","Adventure"};
g.insert_game("PAYDAY 2", "OVERKILL - a Starbreeze Studio.", "505 Games", PAYDAY_2_tags, 20);
cout << "13 insert" << endl;
//Inserting No More Room in Hell
string No_More_Room_in_Hell_tags[20] = {"Free to Play","Zombies","Multiplayer","Survival","Horror","Co-op","Action","Online Co-Op","FPS","First-Person","Shooter","Survival Horror","Post-apocalyptic","Open World","Indie","Realistic","Atmospheric","Mod","Adventure","Massively Multiplayer"};
g.insert_game("No More Room in Hell", "No More Room in Hell Team", "Lever Games", No_More_Room_in_Hell_tags, 20);
cout << "14 insert" << endl;
//Inserting Day of Defeat
string Day_of_Defeat_tags[11] = {"FPS","World War II","Multiplayer","Action","Shooter","War","Team-Based","Classic","Class-Based","First-Person","Historical"};
g.insert_game("Day of Defeat", "Valve", "Valve", Day_of_Defeat_tags, 11);
cout << "15 insert" << endl;
//Inserting PlanetSide 2
string PlanetSide_2_tags[20] = {"Free to Play","Massively Multiplayer","FPS","Action","Shooter","Team-Based","Open World","Multiplayer","Tactical","Sci-fi","War","First-Person","Futuristic","PvP","Co-op","Strategy","Online Co-Op","Space","Adventure","RPG"};
g.insert_game("PlanetSide 2", "Daybreak Game Company", "Daybreak Game Company", PlanetSide_2_tags, 20);
cout << "16 insert" << endl;
//Inserting Deathmatch Classic
string Deathmatch_Classic_tags[8] = {"Action","FPS","Multiplayer","Classic","Shooter","First-Person","Arena Shooter","Sci-fi"};
g.insert_game("Deathmatch Classic", "Valve", "Valve", Deathmatch_Classic_tags, 8);
cout << "17 insert" << endl;
//Inserting Ricochet
string Ricochet_tags[11] = {"Action","FPS","Multiplayer","First-Person","Cyberpunk","Classic","Space","Sci-fi","Shooter","Conspiracy","Platformer"};
g.insert_game("Ricochet", "Valve", "Valve", Ricochet_tags, 11);
cout << "18 insert" << endl;
//Inserting Borderlands 2
string Borderlands_2_tags[20] = {"FPS","Co-op","Action","RPG","Loot","Shooter","Open World","Funny","Multiplayer","Comedy","Adventure","Action RPG","Online Co-Op","Memes","Stylized","Sci-fi","Futuristic","Dark Humor","Singleplayer","Atmospheric"};
g.insert_game("Borderlands 2", "Gearbox Software, Aspyr (Mac & Linux)", "2K Games, Aspyr (Mac & Linux)", Borderlands_2_tags, 20);
cout << "19 insert" << endl;
//Inserting Grand Theft Auto V
string Grand_Theft_Auto_V_tags[20] = {"Open World","Action","Multiplayer","First-Person","Third Person","Crime","Adventure","Shooter","Third-Person Shooter","Singleplayer","Racing","Atmospheric","Mature","Sandbox","Co-op","Great Soundtrack","Funny","Comedy","Moddable","RPG"};
g.insert_game("Grand Theft Auto V", "Rockstar North", "Rockstar Games", Grand_Theft_Auto_V_tags, 20);
cout << "20 insert" << endl;
//Inserting Path of Exile
string Path_of_Exile_tags[20] = {"Free to Play","Action RPG","RPG","Hack and Slash","Multiplayer","Massively Multiplayer","Indie","Action","Fantasy","Adventure","Loot","Dungeon Crawler","MMORPG","Co-op","Online Co-Op","Fishing","Character Customization","Dark Fantasy","PvE","Inventory Management"};
g.insert_game("Path of Exile", "Grinding Gear Games", "Grinding Gear Games", Path_of_Exile_tags, 20);
cout << "21 insert" << endl;
//Inserting Dirty Bomb
string Dirty_Bomb_tags[20] = {"Free to Play","FPS","Multiplayer","Shooter","Action","Team-Based","First-Person","Fast-Paced","Co-op","Class-Based","PvP","Competitive","Massively Multiplayer","Parkour","Post-apocalyptic","Controller","Singleplayer","Open World","Gore","Female Protagonist"};
g.insert_game("Dirty Bomb", "Splash Damage®", "Warchest Ltd.", Dirty_Bomb_tags, 20);
cout << "22 insert" << endl;
//Inserting Brawlhalla
string Brawlhalla_tags[20] = {"Early Access","Free to Play","Fighting","Multiplayer","2D","Action","2D Fighter","Local Multiplayer","Platformer","Beat 'em up","Co-op","Indie","Controller","Local Co-Op","Online Co-Op","4 Player Local","Singleplayer","Massively Multiplayer","Survival","Adventure"};
g.insert_game("Brawlhalla", "Blue Mammoth Games", "Blue Mammoth Games", Brawlhalla_tags, 20);
cout << "23 insert" << endl;
//Inserting SMITE
string SMITE_tags[20] = {"Free to Play","MOBA","Multiplayer","Action","Third Person","Mythology","Team-Based","Competitive","Strategy","Co-op","PvP","Massively Multiplayer","RPG","e-sports","Adventure","MMORPG","Funny","Survival","Casual","Nudity"};
g.insert_game("SMITE", "Hi-Rez Studios", "Hi-Rez Studios", SMITE_tags, 20);
cout << "24 insert" << endl;
//Inserting Loadout
string Loadout_tags[20] = {"Free to Play","Third-Person Shooter","Action","Gore","Multiplayer","Gun Customization","Shooter","Funny","Fast-Paced","Indie","Comedy","Mature","Character Customization","Third Person","Cartoony","Massively Multiplayer","Co-op","Crafting","Arena Shooter","Casual"};
g.insert_game("Loadout", "Edge of Reality", "Edge of Reality", Loadout_tags, 20);
cout << "25 insert" << endl;
//Inserting Team Fortress Classic
string Team_Fortress_Classic_tags[20] = {"Action","FPS","Multiplayer","Classic","Shooter","Class-Based","Team-Based","First-Person","1990's","Co-op","Competitive","Fast-Paced","Retro","Online Co-Op","Remake","Funny","Mod","Adventure","Story Rich","Casual"};
g.insert_game("Team Fortress Classic", "Valve", "Valve", Team_Fortress_Classic_tags, 20);
cout << "26 insert" << endl;
//Inserting Evolve Stage 2
string Evolve_Stage_2_tags[20] = {"Action","Multiplayer","Co-op","FPS","Online Co-Op","Shooter","Team-Based","Survival","Sci-fi","Aliens","PvP","First-Person","Class-Based","Strategy","Atmospheric","Third Person","Tactical","Singleplayer","Stealth","Casual"};
g.insert_game("Evolve Stage 2", "Turtle Rock Studios", "2K", Evolve_Stage_2_tags, 20);
cout << "27 insert" << endl;
//Inserting Rocket League
string Rocket_League_tags[20] = {"Multiplayer","Racing","Soccer","Sports","Competitive","Team-Based","Online Co-Op","Football","Action","Co-op","Fast-Paced","Funny","Great Soundtrack","Local Multiplayer","Local Co-Op","Split Screen","Singleplayer","4 Player Local","Casual","Indie"};
g.insert_game("Rocket League", "Psyonix, Inc.", "Psyonix, Inc.", Rocket_League_tags, 20);
cout << "28 insert" << endl;
//Inserting Rust
string Rust_tags[20] = {"Early Access","Survival","Crafting","Multiplayer","Open World","Sandbox","PvP","Building","Adventure","First-Person","Action","FPS","Indie","Nudity","Co-op","Shooter","Online Co-Op","Simulation","Post-apocalyptic","Survival Horror"};
g.insert_game("Rust", "Facepunch Studios", "Facepunch Studios", Rust_tags, 20);
cout << "29 insert" << endl;
//Inserting Marvel Heroes 2016
string Marvel_Heroes_2016_tags[20] = {"Free to Play","Superhero","Action","Massively Multiplayer","Multiplayer","RPG","Action RPG","Comic Book","Hack and Slash","Adventure","Co-op","Online Co-Op","MMORPG","Fighting","Third Person","Isometric","Singleplayer","Loot","Strategy","MOBA"};
g.insert_game("Marvel Heroes 2016", "Gazillion Entertainment", "Gazillion Entertainment", Marvel_Heroes_2016_tags, 20);
cout << "30 insert" << endl;
//Inserting Clicker Heroes
string Clicker_Heroes_tags[20] = {"Clicker","Free to Play","Casual","Singleplayer","Indie","2D","RPG","Adventure","Funny","Fantasy","Simulation","Strategy","Multiplayer","Family Friendly","Action","Illuminati","Touch-Friendly","Management","Zombies","Open World"};
g.insert_game("Clicker Heroes", "Playsaurus", "Playsaurus", Clicker_Heroes_tags, 20);
cout << "31 insert" << endl;
//Inserting Alien Swarm
string Alien_Swarm_tags[20] = {"Free to Play","Co-op","Action","Multiplayer","Aliens","Online Co-Op","Shooter","Sci-fi","Top-Down","Top-Down Shooter","Survival","Third Person","Class-Based","PvE","Team-Based","Third-Person Shooter","Moddable","Strategy","Adventure","Singleplayer"};
g.insert_game("Alien Swarm", "Valve", "Valve", Alien_Swarm_tags, 20);
cout << "32 insert" << endl;
//Inserting APB Reloaded
string APB_Reloaded_tags[20] = {"Free to Play","Action","Open World","Character Customization","Multiplayer","Massively Multiplayer","Third-Person Shooter","Shooter","PvP","Third Person","Crime","Co-op","Racing","Sandbox","FPS","Adventure","Hacking","Singleplayer","Nudity","Anime"};
g.insert_game("APB Reloaded", "Reloaded Productions", "Reloaded Games", APB_Reloaded_tags, 20);
cout << "33 insert" << endl;
//Inserting theHunter
string theHunter_tags[20] = {"Free to Play","Hunting","Multiplayer","Open World","Simulation","Shooter","Co-op","First-Person","Realistic","Survival","Sports","Online Co-Op","Adventure","FPS","Singleplayer","Action","Stealth","Strategy","Massively Multiplayer","Casual"};
g.insert_game("theHunter", "Expansive Worlds, Avalanche Studios", "Expansive Worlds, Avalanche Studios", theHunter_tags, 20);
cout << "34 insert" << endl;
//Inserting Neverwinter
string Neverwinter_tags[20] = {"Free to Play","MMORPG","RPG","Massively Multiplayer","Adventure","Action","Fantasy","Multiplayer","Open World","Character Customization","Co-op","Dragons","PvP","Third Person","Action RPG","PvE","Atmospheric","Hack and Slash","Zombies","Comedy"};
g.insert_game("Neverwinter", "Cryptic Studios", "Perfect World Entertainment", Neverwinter_tags, 20);
cout << "35 insert" << endl;
//Inserting BioShock Infinite
string BioShock_Infinite_tags[20] = {"FPS","Action","Story Rich","Singleplayer","Steampunk","Atmospheric","Shooter","First-Person","Alternate History","Adventure","Great Soundtrack","Dystopian ","Sci-fi","Time Travel","Fantasy","Linear","Gore","RPG","Political","Controller"};
g.insert_game("BioShock Infinite", "Irrational Games, Aspyr (Mac), Virtual Programming (Linux)", "2K Games, Aspyr (Mac)", BioShock_Infinite_tags, 20);
cout << "36 insert" << endl;
//Inserting Left 4 Dead
string Left_4_Dead_tags[20] = {"Zombies","Co-op","FPS","Action","Multiplayer","Shooter","Team-Based","Online Co-Op","First-Person","Horror","Post-apocalyptic","Survival","Singleplayer","Tactical","Atmospheric","Competitive","Adventure","Moddable","Female Protagonist","Replay Value"};
g.insert_game("Left 4 Dead", "Valve", "Valve", Left_4_Dead_tags, 20);
cout << "37 insert" << endl;
//Inserting Tomb Raider
string Tomb_Raider_tags[20] = {"Adventure","Action","Female Protagonist","Third Person","Third-Person Shooter","Singleplayer","Lara Croft","Story Rich","Quick-Time Events","Exploration","Multiplayer","Atmospheric","Shooter","Puzzle","Stealth","Action-Adventure","Platformer","Cinematic","3D Vision","RPG"};
g.insert_game("Tomb Raider", "Crystal Dynamics, Feral Interactive (Mac), Feral Interactive (Linux)", "Square Enix, Feral Interactive (Mac), Feral Interactive (Linux)", Tomb_Raider_tags, 20);
cout << "38 insert" << endl;
//Inserting PAYDAY The Heist
string PAYDAY_The_Heist_tags[20] = {"FPS","Action","Co-op","Heist","Crime","Multiplayer","Online Co-Op","Shooter","First-Person","Great Soundtrack","Team-Based","Difficult","Stealth","Tactical","Strategy","Singleplayer","Simulation","RPG","Indie","Adventure"};
g.insert_game("PAYDAY The Heist", "OVERKILL Software", "Daybreak Game Company", PAYDAY_The_Heist_tags, 20);
cout << "39 insert" << endl;
//Inserting AdVenture Capitalist
string AdVenture_Capitalist_tags[20] = {"Free to Play","Clicker","Casual","Capitalism","Singleplayer","Indie","Management","Simulation","Point & Click","2D","Funny","Adventure","Touch-Friendly","Strategy","Real-Time","Comedy","Memes","Family Friendly","Sandbox","Great Soundtrack"};
g.insert_game("AdVenture Capitalist", "Hyper Hippo Games", "Hyper Hippo Games", AdVenture_Capitalist_tags, 20);
cout << "40 insert" << endl;
//Inserting Just Cause 2
string Just_Cause_2_tags[20] = {"Open World","Action","Sandbox","Third Person","Adventure","Multiplayer","Third-Person Shooter","Shooter","Singleplayer","Exploration","Destruction","Funny","Moddable","Co-op","Atmospheric","3D Vision","Comedy","Physics","Massively Multiplayer","FPS"};
g.insert_game("Just Cause 2", "Avalanche Studios", "Square Enix", Just_Cause_2_tags, 20);
cout << "41 insert" << endl;
//Inserting Fallout 4
string Fallout_4_tags[20] = {"Post-apocalyptic","Open World","Exploration","Singleplayer","RPG","Atmospheric","Adventure","Shooter","Story Rich","First-Person","Sci-fi","Action","FPS","Action RPG","Great Soundtrack","Third Person","Sandbox","Third-Person Shooter","Survival","Casual"};
g.insert_game("Fallout 4", "Bethesda Game Studios", "Bethesda Softworks", Fallout_4_tags, 20);
cout << "42 insert" << endl;
//Inserting Age of Empires II HD
string Age_of_Empires_II_HD_tags[20] = {"Strategy","RTS","Classic","Medieval","Multiplayer","Historical","Singleplayer","Base-Building","Resource Management","Competitive","Co-op","City Builder","Tactical","Real-Time","Remake","Replay Value","2D","Adventure","Action","Isometric"};
g.insert_game("Age of Empires II HD", "Skybox Labs, Hidden Path Entertainment, Ensemble Studios", "Microsoft Studios", Age_of_Empires_II_HD_tags, 20);
cout << "43 insert" << endl;
//Inserting Grand Theft Auto IV
string Grand_Theft_Auto_IV_tags[20] = {"Open World","Action","Bowling","Multiplayer","Third Person","Adventure","Crime","Moddable","Sandbox","Third-Person Shooter","Singleplayer","Shooter","Physics","Atmospheric","Classic","Funny","Dark Humor","Co-op","Gore","Satire"};
g.insert_game("Grand Theft Auto IV", "Rockstar North, Rockstar Toronto", "Rockstar Games", Grand_Theft_Auto_IV_tags, 20);
cout << "44 insert" << endl;
//Inserting TERA
string TERA_tags[20] = {"Free to Play","MMORPG","Massively Multiplayer","RPG","Action","Open World","Adventure","Fantasy","Anime","Third Person","Co-op","Action RPG","PvP","Multiplayer","Character Customization","Hack and Slash","PvE","Cute","Controller","Nudity"};
g.insert_game("TERA", "Bluehole Inc., En Masse Entertainment", "En Masse Entertainment", TERA_tags, 20);
cout << "45 insert" << endl;
//Inserting LIMBO
string LIMBO_tags[20] = {"Indie","Platformer","Puzzle","Atmospheric","Dark","Adventure","2D","Singleplayer","Horror","Puzzle-Platformer","Surreal","Short","Difficult","Side Scroller","Physics","Casual","Minimalist","Cinematic","Action","Controller"};
g.insert_game("LIMBO", "Playdead", "Playdead", LIMBO_tags, 20);
cout << "46 insert" << endl;
//Inserting BLOCKADE 3D
string BLOCKADE_3D_tags[20] = {"Early Access","Free to Play","Shooter","Multiplayer","FPS","Action","Building","Zombies","Pixel Graphics","Online Co-Op","Survival","Sandbox","Co-op","3D Vision","Massively Multiplayer","Adventure","Open World","Funny","Casual","Controller"};
g.insert_game("BLOCKADE 3D", "Shumkov Dmitriy", "Shumkov Dmitriy", BLOCKADE_3D_tags, 20);
cout << "47 insert" << endl;
//Inserting Magicka
string Magicka_tags[20] = {"Comedy","Action","Co-op","Fantasy","RPG","Online Co-Op","Multiplayer","Adventure","Funny","Magic","Local Co-Op","Indie","4 Player Local","Difficult","Local Multiplayer","Singleplayer","Team-Based","Strategy","Action RPG","Arcade"};
g.insert_game("Magicka", "Arrowhead Game Studios", "Paradox Interactive", Magicka_tags, 20);
cout << "48 insert" << endl;
//Inserting BioShock Remastered
string BioShock_Remastered_tags[16] = {"Action","FPS","Story Rich","Horror","RPG","Shooter","First-Person","Atmospheric","Singleplayer","Sci-fi","Underwater","Dystopian ","Remake","Adventure","Great Soundtrack","Alternate History"};
g.insert_game("BioShock Remastered", "2K Boston, 2K Australia, Blind Squirrel", "2K", BioShock_Remastered_tags, 16);
cout << "49 insert" << endl;
//Inserting BioShock
string BioShock_tags[20] = {"FPS","Action","Atmospheric","Story Rich","Singleplayer","Steampunk","Horror","First-Person","Shooter","RPG","Sci-fi","Classic","Adventure","Dystopian ","Underwater","Political","Dark","Great Soundtrack","Alternate History","Action RPG"};
g.insert_game("BioShock", "2K Boston, 2K Australia", "2K Games", BioShock_tags, 20);
cout << "50 insert" << endl;
//Inserting Sniper Elite V2
string Sniper_Elite_V2_tags[20] = {"Sniper","Action","Stealth","World War II","Co-op","Shooter","Third-Person Shooter","Multiplayer","Third Person","Singleplayer","Bullet Time","War","FPS","Online Co-Op","Tactical","Historical","Gore","Strategy","Simulation","Adventure"};
g.insert_game("Sniper Elite V2", "Rebellion", "Rebellion", Sniper_Elite_V2_tags, 20);
cout << "51 insert" << endl;
//Inserting Euro Truck Simulator 2
string Euro_Truck_Simulator_2_tags[20] = {"Simulation","Driving","Open World","Realistic","Relaxing","Singleplayer","Exploration","Moddable","First-Person","Economy","Indie","Adventure","Atmospheric","Management","TrackIR","Casual","Sandbox","Racing","Action","RPG"};
g.insert_game("Euro Truck Simulator 2", "SCS Software", "SCS Software", Euro_Truck_Simulator_2_tags, 20);
cout << "52 insert" << endl;
//Inserting Killing Floor
string Killing_Floor_tags[20] = {"FPS","Zombies","Co-op","Survival","Action","Horror","Multiplayer","Online Co-Op","Shooter","Gore","Team-Based","First-Person","Moddable","Survival Horror","Great Soundtrack","Singleplayer","Class-Based","Difficult","Comedy","Adventure"};
g.insert_game("Killing Floor", "Tripwire Interactive", "Tripwire Interactive", Killing_Floor_tags, 20);
cout << "53 insert" << endl;
//Inserting DayZ
string DayZ_tags[20] = {"Early Access","Survival","Zombies","Open World","Multiplayer","PvP","Massively Multiplayer","Action","Simulation","FPS","Post-apocalyptic","Shooter","Survival Horror","Sandbox","Indie","Adventure","Co-op","Horror","Atmospheric","Military"};
g.insert_game("DayZ", "Bohemia Interactive", "Bohemia Interactive", DayZ_tags, 20);
cout << "54 insert" << endl;
//Inserting Insurgency
string Insurgency_tags[20] = {"FPS","Realistic","Tactical","Multiplayer","Action","Shooter","Military","Team-Based","Co-op","Strategy","First-Person","Indie","Online Co-Op","War","Competitive","Simulation","PvP","Atmospheric","Singleplayer","Adventure"};
g.insert_game("Insurgency", "New World Interactive", "New World Interactive", Insurgency_tags, 20);
cout << "55 insert" << endl;
//Inserting Defiance
string Defiance_tags[20] = {"Free to Play","Action","Open World","Massively Multiplayer","Third-Person Shooter","Multiplayer","RPG","Co-op","Shooter","Sci-fi","Post-apocalyptic","Survival","FPS","Adventure","Online Co-Op","Third Person","MMORPG","First-Person","Singleplayer","Casual"};
g.insert_game("Defiance", "Trion Worlds, Inc.", "Trion Worlds, Inc.", Defiance_tags, 20);
cout << "56 insert" << endl;
//Inserting HAWKEN
string HAWKEN_tags[20] = {"Early Access","Mechs","Free to Play","Action","FPS","Multiplayer","Robots","Shooter","Co-op","Sci-fi","Competitive","VR","Tactical","Fast-Paced","First-Person","Destruction","Futuristic","Massively Multiplayer","Arena Shooter","Cyberpunk"};
g.insert_game("HAWKEN", "Reloaded Games", "Reloaded Games", HAWKEN_tags, 20);
cout << "57 insert" << endl;
//Inserting RaceRoom Racing Experience
string RaceRoom_Racing_Experience_tags[18] = {"Racing","Free to Play","Multiplayer","Simulation","Sports","Driving","Action","Singleplayer","First-Person","Realistic","Open World","Controller","Massively Multiplayer","Adventure","Co-op","Online Co-Op","FPS","VR"};
g.insert_game("RaceRoom Racing Experience", "Sector3 Studios", "Sector3 Studios, RaceRoom Entertainment AG", RaceRoom_Racing_Experience_tags, 18);
cout << "58 insert" << endl;
//Inserting Torchlight II
string Torchlight_II_tags[20] = {"RPG","Action RPG","Hack and Slash","Co-op","Dungeon Crawler","Loot","Fantasy","Action","Online Co-Op","Adventure","Multiplayer","Singleplayer","Indie","Moddable","Character Customization","Replay Value","Isometric","Steampunk","Atmospheric","Cartoon"};
g.insert_game("Torchlight II", "Runic Games", "Runic Games", Torchlight_II_tags, 20);
cout << "59 insert" << endl;
//Inserting Castle Crashers
string Castle_Crashers_tags[20] = {"Co-op","Action","Adventure","Beat 'em up","Multiplayer","Local Co-Op","Indie","Funny","Online Co-Op","Comedy","Hack and Slash","RPG","2D","Casual","Local Multiplayer","Controller","Great Soundtrack","Side Scroller","Fantasy","Action RPG"};
g.insert_game("Castle Crashers", "The Behemoth", "The Behemoth", Castle_Crashers_tags, 20);
cout << "60 insert" << endl;
//Inserting Fistful of Frags
string Fistful_of_Frags_tags[20] = {"Free to Play","Multiplayer","FPS","Western","Shooter","Action","First-Person","Indie","Mod","Funny","Online Co-Op","Comedy","Co-op","Survival","Massively Multiplayer","Historical","Classic","Adventure","Simulation","RPG"};
g.insert_game("Fistful of Frags", "Fistful of Frags Team", "Fistful of Frags Team", Fistful_of_Frags_tags, 20);
cout << "61 insert" << endl;
//Inserting Survarium
string Survarium_tags[20] = {"Early Access","Free to Play","Survival","Multiplayer","FPS","Shooter","Post-apocalyptic","Action","First-Person","Open World","PvP","Atmospheric","Massively Multiplayer","Co-op","Zombies","Crafting","RPG","Adventure","Exploration","MMORPG"};
g.insert_game("Survarium", "Vostok Games", "Vostok Games", Survarium_tags, 20);
cout << "62 insert" << endl;
//Inserting Saints Row 2
string Saints_Row_2_tags[20] = {"Open World","Action","Sandbox","Character Customization","Third-Person Shooter","Comedy","Co-op","Third Person","Singleplayer","Online Co-Op","Crime","Multiplayer","Co-op Campaign","Replay Value","Funny","Shooter","Female Protagonist","Great Soundtrack","Moddable","Adventure"};
g.insert_game("Saints Row 2", "Volition", "Deep Silver", Saints_Row_2_tags, 20);
cout << "63 insert" << endl;
//Inserting Saints Row IV
string Saints_Row_IV_tags[20] = {"Open World","Action","Comedy","Co-op","Third-Person Shooter","Superhero","Sandbox","Third Person","Funny","Character Customization","Adventure","Online Co-Op","Aliens","Parody ","Multiplayer","Great Soundtrack","Sci-fi","Singleplayer","Female Protagonist","Dark Humor"};
g.insert_game("Saints Row IV", "Deep Silver Volition", "Deep Silver", Saints_Row_IV_tags, 20);
cout << "64 insert" << endl;
//Inserting Arma 2
string Arma_2_tags[20] = {"Simulation","Military","Action","Multiplayer","Tactical","Realistic","FPS","Open World","Strategy","Shooter","First-Person","Moddable","Co-op","War","Singleplayer","Third Person","Sandbox","Zombies","Third-Person Shooter","TrackIR"};
g.insert_game("Arma 2", "Bohemia Interactive", "Bohemia Interactive", Arma_2_tags, 20);
cout << "65 insert" << endl;
//Inserting BioShock 2 Remastered
string BioShock_2_Remastered_tags[12] = {"Action","RPG","FPS","First-Person","Singleplayer","Adventure","Sci-fi","Shooter","Horror","Atmospheric","Story Rich","Dystopian "};
g.insert_game("BioShock 2 Remastered", "2K Marin, 2K China, Digital Extremes, 2K Australia, Blind Squirrel", "2K", BioShock_2_Remastered_tags, 12);
cout << "66 insert" << endl;
//Inserting Borderlands
string Borderlands_tags[20] = {"FPS","RPG","Co-op","Action","Loot","Online Co-Op","Shooter","First-Person","Comedy","Open World","Sci-fi","Multiplayer","Post-apocalyptic","Singleplayer","Action RPG","Funny","Adventure","Dark Humor","Gore","Local Co-Op"};
g.insert_game("Borderlands", "Gearbox Software", "2K Games", Borderlands_tags, 20);
cout << "67 insert" << endl;
//Inserting Arma 3
string Arma_3_tags[20] = {"Simulation","Military","Multiplayer","Tactical","Realistic","Action","Open World","FPS","War","Strategy","Sandbox","Shooter","Co-op","Moddable","Team-Based","Third-Person Shooter","Online Co-Op","First-Person","Singleplayer","TrackIR"};
g.insert_game("Arma 3", "Bohemia Interactive", "Bohemia Interactive", Arma_3_tags, 20);
cout << "68 insert" << endl;
//Inserting Far Cry 3
string Far_Cry_3_tags[20] = {"Open World","FPS","Action","Adventure","Shooter","Stealth","Hunting","First-Person","Multiplayer","Co-op","Singleplayer","Sandbox","Survival","Story Rich","Atmospheric","Colorful","Online Co-Op","Crafting","RPG","Nudity"};
g.insert_game("Far Cry 3", "Ubisoft Montreal, Massive Entertainment, and Ubisoft Shanghai", "Ubisoft", Far_Cry_3_tags, 20);
cout << "69 insert" << endl;
//Inserting Creativerse
string Creativerse_tags[20] = {"Free to Play","Survival","Multiplayer","Open World","Building","Sandbox","Crafting","Adventure","First-Person","Massively Multiplayer","Action","Singleplayer","Co-op","RPG","Indie","Casual","Simulation","Voxel","Zombies","Funny"};
g.insert_game("Creativerse", "Playful Corporation", "Playful Corporation", Creativerse_tags, 20);
cout << "70 insert" << endl;
//Inserting Dishonored
string Dishonored_tags[20] = {"Stealth","First-Person","Action","Steampunk","Assassin","Singleplayer","Atmospheric","Story Rich","Adventure","Multiple Endings","Dark","Magic","Dystopian ","FPS","RPG","Replay Value","Fantasy","Open World","Shooter","Sci-fi"};
g.insert_game("Dishonored", "Arkane Studios", "Bethesda Softworks", Dishonored_tags, 20);
cout << "71 insert" << endl;
//Inserting Company of Heroes
string Company_of_Heroes_tags[20] = {"Strategy","RTS","World War II","Multiplayer","Action","Tactical","Military","Singleplayer","Base-Building","War","Historical","Tanks","Moddable","Co-op","Simulation","Classic","Team-Based","Adventure","FPS","Free to Play"};
g.insert_game("Company of Heroes", "Relic Entertainment", "SEGA", Company_of_Heroes_tags, 20);
cout << "72 insert" << endl;
//Inserting The Forest
string The_Forest_tags[20] = {"Early Access","Survival","Open World","Horror","Crafting","Adventure","Building","First-Person","Action","Survival Horror","Sandbox","Exploration","Atmospheric","Simulation","Indie","Singleplayer","Realistic","Gore","FPS","Zombies"};
g.insert_game("The Forest", "Endnight Games Ltd", "Endnight Games Ltd", The_Forest_tags, 20);
cout << "73 insert" << endl;
//Inserting Firefall
string Firefall_tags[20] = {"Free to Play","Massively Multiplayer","Open World","Shooter","Action","FPS","Multiplayer","RPG","Sci-fi","Co-op","Third-Person Shooter","First-Person","Adventure","PvE","Third Person","PvP","Crafting","Sandbox","Singleplayer","Indie"};
g.insert_game("Firefall", "Red 5 Studios", "Red 5 Studios", Firefall_tags, 20);
cout << "74 insert" << endl;
//Inserting Cry of Fear
string Cry_of_Fear_tags[20] = {"Horror","Free to Play","Survival Horror","Co-op","Multiplayer","Action","Indie","Psychological Horror","Atmospheric","Adventure","Online Co-Op","First-Person","Zombies","Psychological","Singleplayer","FPS","Survival","Shooter","Mod","Massively Multiplayer"};
g.insert_game("Cry of Fear", "Team Psykskallar", "Team Psykskallar", Cry_of_Fear_tags, 20);
cout << "75 insert" << endl;
//Inserting The Binding of Isaac
string The_Binding_of_Isaac_tags[20] = {"Rogue-like","Indie","Replay Value","Difficult","Procedural Generation","Action","Dark","Top-Down","Great Soundtrack","Adventure","Singleplayer","Rogue-lite","RPG","Survival","Perma Death","2D","Dungeon Crawler","Bullet Hell","Atmospheric","Arena Shooter"};
g.insert_game("The Binding of Isaac", "Edmund McMillen and Florian Himsl", "Edmund McMillen", The_Binding_of_Isaac_tags, 20);
cout << "76 insert" << endl;
//Inserting Spiral Knights
string Spiral_Knights_tags[20] = {"Free to Play","Massively Multiplayer","Adventure","RPG","Action","Multiplayer","Online Co-Op","Dungeon Crawler","Hack and Slash","MMORPG","Co-op","Cute","Action RPG","Sci-fi","Great Soundtrack","Open World","Casual","Singleplayer","Anime","Indie"};
g.insert_game("Spiral Knights", "Grey Havens", "", Spiral_Knights_tags, 20);
cout << "77 insert" << endl;
//Inserting Gotham City Impostors Free to Play
string Gotham_City_Impostors_Free_to_Play_tags[20] = {"Free to Play","Action","Multiplayer","Batman","FPS","Shooter","Funny","Superhero","First-Person","Character Customization","Comic Book","Comedy","Massively Multiplayer","Online Co-Op","Co-op","Fighting","Gore","Open World","Adventure","Sandbox"};
g.insert_game("Gotham City Impostors Free to Play", "Monolith Productions, Inc.", "Warner Bros. Interactive Entertainment", Gotham_City_Impostors_Free_to_Play_tags, 20);
cout << "78 insert" << endl;
//Inserting The Expendabros
string The_Expendabros_tags[20] = {"Free to Play","Action","Pixel Graphics","Multiplayer","2D","Local Co-Op","Shooter","Co-op","Platformer","Indie","Singleplayer","Adventure","Local Multiplayer","America","Comedy","Side Scroller","Funny","Controller","Classic","Open World"};
g.insert_game("The Expendabros", "Free Lives", "Devolver Digital", The_Expendabros_tags, 20);
cout << "79 insert" << endl;
//Inserting Realm of the Mad God
string Realm_of_the_Mad_God_tags[20] = {"Free to Play","Massively Multiplayer","Pixel Graphics","RPG","Perma Death","Multiplayer","Bullet Hell","Action","MMORPG","Indie","Rogue-like","2D","Open World","Adventure","Difficult","Survival","Co-op","Retro","Strategy","Casual"};
g.insert_game("Realm of the Mad God", "Wild Shadow Studios", "Deca Games", Realm_of_the_Mad_God_tags, 20);
cout << "80 insert" << endl;
//Inserting STAR WARS Battlefront II
string STAR_WARS_Battlefront_II_tags[20] = {"Star Wars","Action","Multiplayer","Third-Person Shooter","Shooter","Sci-fi","Space","Classic","FPS","First-Person","Singleplayer","Moddable","Third Person","Military","Tactical","Strategy","Co-op","Adventure","Great Soundtrack","Open World"};
g.insert_game("STAR WARS Battlefront II", "Pandemic Studios", "Lucasfilm, LucasArts, Disney Interactive", STAR_WARS_Battlefront_II_tags, 20);
cout << "81 insert" << endl;
//Inserting Starbound
string Starbound_tags[20] = {"Sandbox","Adventure","Indie","Survival","Crafting","Space","Multiplayer","Building","2D","Pixel Graphics","RPG","Action","Exploration","Platformer","Open World","Sci-fi","Co-op","Singleplayer","Atmospheric","Great Soundtrack"};
g.insert_game("Starbound", "", "Chucklefish", Starbound_tags, 20);
cout << "82 insert" << endl;
//Inserting Dungeon Defenders II
string Dungeon_Defenders_II_tags[20] = {"Early Access","Tower Defense","Free to Play","Multiplayer","Co-op","Strategy","RPG","Action","Online Co-Op","Fantasy","Adventure","Indie","Third Person","Funny","Hack and Slash","Casual","Singleplayer","Massively Multiplayer","MMORPG","MOBA"};
g.insert_game("Dungeon Defenders II", "Trendy Entertainment", "Trendy Entertainment", Dungeon_Defenders_II_tags, 20);
cout << "83 insert" << endl;
//Inserting Block N Load
string Block_N_Load_tags[20] = {"Free to Play","Action","Multiplayer","FPS","Building","Shooter","Strategy","First-Person","Team-Based","Class-Based","Base-Building","Massively Multiplayer","Destruction","PvP","Sandbox","Funny","MOBA","Voxel","Comedy","Gore"};
g.insert_game("Block N Load", "Jagex, Artplant", "Jagex", Block_N_Load_tags, 20);
cout << "84 insert" << endl;
//Inserting Goat Simulator
string Goat_Simulator_tags[20] = {"Simulation","Funny","Comedy","Open World","Sandbox","Physics","Indie","Action","Singleplayer","Casual","Destruction","Third Person","Co-op","Exploration","Moddable","Local Multiplayer","Local Co-Op","MMORPG","Family Friendly","Memes"};
g.insert_game("Goat Simulator", "Coffee Stain Studios", "Coffee Stain Studios", Goat_Simulator_tags, 20);
cout << "85 insert" << endl;
//Inserting RIFT
string RIFT_tags[20] = {"Free to Play","MMORPG","Massively Multiplayer","RPG","Fantasy","Multiplayer","Open World","Adventure","Action","Co-op","Character Customization","Online Co-Op","PvP","Magic","Survival","Singleplayer","Crafting","Strategy","First-Person","FPS"};
g.insert_game("RIFT", "Trion Worlds", "Trion Worlds", RIFT_tags, 20);
cout << "86 insert" << endl;
//Inserting Darksiders Warmastered Edition
string Darksiders_Warmastered_Edition_tags[13] = {"Action","Adventure","Hack and Slash","Violent","RPG","Third Person","Singleplayer","Dark Fantasy","Fantasy","Gore","Puzzle","Open World","Remake"};
g.insert_game("Darksiders Warmastered Edition", "KAIKO, Vigil Games", "THQ Nordic", Darksiders_Warmastered_Edition_tags, 13);
cout << "87 insert" << endl;
//Inserting Super Meat Boy
string Super_Meat_Boy_tags[20] = {"Platformer","Indie","Difficult","2D","Great Soundtrack","Singleplayer","Fast-Paced","Retro","Pixel Graphics","Controller","Action","Gore","Time Attack","Funny","Comedy","Side Scroller","Adventure","Replay Value","Casual","Level Editor"};
g.insert_game("Super Meat Boy", "Team Meat", "", Super_Meat_Boy_tags, 20);
cout << "88 insert" << endl;
//Inserting Darksiders
string Darksiders_tags[20] = {"Action","Adventure","Hack and Slash","Third Person","Singleplayer","Post-apocalyptic","Fantasy","Controller","Action RPG","Action-Adventure","Puzzle","Metroidvania","Open World","Spectacle fighter","3D Platformer","RPG","Gore","Beat 'em up","Character Action Game","Platformer"};
g.insert_game("Darksiders", "Vigil Games", "THQ Nordic", Darksiders_tags, 20);
cout << "89 insert" << endl;
//Inserting Quake Live
string Quake_Live_tags[15] = {"FPS","Multiplayer","Classic","Arena Shooter","Fast-Paced","Action","Shooter","e-sports","Competitive","First-Person","Difficult","Cult Classic","Funny","Parkour","Survival"};
g.insert_game("Quake Live", "id Software", "Bethesda Softworks", Quake_Live_tags, 15);
cout << "90 insert" << endl;
//Inserting Toribash
string Toribash_tags[20] = {"Free to Play","Fighting","Multiplayer","Physics","Gore","Action","Strategy","Turn-Based","Indie","Martial Arts","Funny","Simulation","Blood","Moddable","Sandbox","Difficult","Parkour","Singleplayer","Turn-Based Strategy","Co-op"};
g.insert_game("Toribash", "Nabi Studios", "Nicalis, Inc.", Toribash_tags, 20);
cout << "91 insert" << endl;
//Inserting Tactical Intervention
string Tactical_Intervention_tags[20] = {"Free to Play","Action","FPS","Multiplayer","Shooter","Co-op","Tactical","First-Person","Open World","Zombies","Adventure","Massively Multiplayer","Singleplayer","Simulation","Strategy","Gore","Sandbox","RPG","Indie","Casual"};
g.insert_game("Tactical Intervention", "FIX Korea, Co.LTD, FIX Games, Co. LTD", "FIX Games, Co. LTD", Tactical_Intervention_tags, 20);
cout << "92 insert" << endl;
//Inserting Undertale
string Undertale_tags[20] = {"Great Soundtrack","Story Rich","Choices Matter","Funny","RPG","Multiple Endings","Pixel Graphics","Singleplayer","Indie","Comedy","Replay Value","2D","Bullet Hell","Cute","Memes","Retro","Dark","Psychological Horror","Dating Sim","Horror"};
g.insert_game("Undertale", "tobyfox", "tobyfox", Undertale_tags, 20);
cout << "93 insert" << endl;
//Inserting Fallout Shelter
string Fallout_Shelter_tags[20] = {"Free to Play","Survival","Post-apocalyptic","Simulation","Singleplayer","Base-Building","Strategy","Management","2D","RPG","Casual","Adventure","Building","Crafting","Action","Sandbox","Funny","Multiplayer","Atmospheric","Great Soundtrack"};
g.insert_game("Fallout Shelter", "Bethesda Game Studios", "Bethesda Softworks LLC", Fallout_Shelter_tags, 20);
cout << "94 insert" << endl;
//Inserting Stardew Valley
string Stardew_Valley_tags[20] = {"RPG","Simulation","Agriculture","Pixel Graphics","Crafting","Relaxing","Indie","Sandbox","Singleplayer","Building","Great Soundtrack","Casual","2D","Fishing","Cute","Dating Sim","Atmospheric","Open World","Retro","Multiplayer"};
g.insert_game("Stardew Valley", "ConcernedApe", "Chucklefish", Stardew_Valley_tags, 20);
cout << "95 insert" << endl;
//Inserting Magic Duels
string Magic_Duels_tags[16] = {"Free to Play","Card Game","Trading Card Game","Magic","Strategy","Multiplayer","Singleplayer","Fantasy","Co-op","Online Co-Op","Turn-Based","Action","Great Soundtrack","Survival","Horror","Nudity"};
g.insert_game("Magic Duels", "Stainless Games Ltd.", "Wizards of the Coast LLC", Magic_Duels_tags, 16);
cout << "96 insert" << endl;
//Inserting Mafia II
string Mafia_II_tags[20] = {"Action","Open World","Crime","Story Rich","Atmospheric","Singleplayer","Third Person","Third-Person Shooter","Shooter","Adventure","Great Soundtrack","America","Driving","Music","Classic","Nudity","Multiplayer","Sandbox","3D Vision","RPG"};
g.insert_game("Mafia II", "2K Czech, Feral Interactive (Mac)", "2K Games, Feral Interactive (Mac)", Mafia_II_tags, 20);
cout << "97 insert" << endl;
//Inserting DC Universe Online
string DC_Universe_Online_tags[20] = {"Free to Play","Superhero","Massively Multiplayer","Action","RPG","Open World","MMORPG","Adventure","Multiplayer","Character Customization","Batman","Comic Book","Third Person","Fighting","Co-op","Online Co-Op","PvP","Fantasy","Beat 'em up","Indie"};
g.insert_game("DC Universe Online", "Daybreak Game Company", "Daybreak Game Company", DC_Universe_Online_tags, 20);
cout << "98 insert" << endl;
//Inserting Bastion
string Bastion_tags[20] = {"Great Soundtrack","Indie","Action","Narration","Singleplayer","RPG","Hack and Slash","Story Rich","Dynamic Narration","Isometric","Adventure","Action RPG","Fantasy","Atmospheric","Colorful","Post-apocalyptic","Twin Stick Shooter","2D","Controller","Music"};
g.insert_game("Bastion", "Supergiant Games", "Warner Bros. Interactive Entertainment", Bastion_tags, 20);
cout << "99 insert" << endl;
//Inserting BattleBlock Theater
string BattleBlock_Theater_tags[20] = {"Comedy","Co-op","Platformer","Funny","Multiplayer","Indie","Adventure","Local Co-Op","2D","Action","Great Soundtrack","Casual","Puzzle","Online Co-Op","Level Editor","Local Multiplayer","Singleplayer","Team-Based","Difficult","Sandbox"};
g.insert_game("BattleBlock Theater", "The Behemoth", "The Behemoth", BattleBlock_Theater_tags, 20);
cout << "100 insert" << endl;
//Inserting Aura Kingdom
string Aura_Kingdom_tags[20] = {"Anime","Free to Play","MMORPG","RPG","Massively Multiplayer","Adventure","Multiplayer","Fantasy","Open World","Casual","Action","JRPG","Cute","Nudity","PvE","Magic","Third Person","Online Co-Op","Co-op","Female Protagonist"};
g.insert_game("Aura Kingdom", "X-Legend", "Aeria Games", Aura_Kingdom_tags, 20);
cout << "101 insert" << endl;

g.clean_games();

g.get_game("Clicker Heroes")->dijkstra( g.get_game("Dota 2"), g.get_size() );
cout << "===== Dijkstra =====" << endl;
Game *ggg = g.get_game("Dota 2");
while(ggg != NULL){
    cout << ggg->name << endl;
    ggg = ggg->pi;
}

}

