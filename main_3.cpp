#include <iostream>
#include <string>
#include "graph.h"
#include "game.h"
#include "queue.h"
#include "tags.h"
using namespace std;
int main_3() {
Graph g;
//Inserting Unturned
string Unturned_tags[20] = {"Early Access","Free to Play","Survival","Zombies","Multiplayer","Open World","Adventure","Crafting","Action","First-Person","Co-op","Sandbox","Post-apocalyptic","Shooter","FPS","Singleplayer","Indie","Massively Multiplayer","Atmospheric","Casual"};
g.insert_game("Unturned", "Smartly Dressed Games", "Smartly Dressed Games", Unturned_tags, 20);
cout << "1 insert" << endl;
//Inserting Warframe
string Warframe_tags[20] = {"Free to Play","Action","Co-op","Multiplayer","Third-Person Shooter","Sci-fi","Ninja","Shooter","Parkour","Space","Online Co-Op","Futuristic","Third Person","Massively Multiplayer","PvE","RPG","Singleplayer","Hack and Slash","FPS","Cyberpunk"};
g.insert_game("Warframe", "Digital Extremes", "Digital Extremes", Warframe_tags, 20);
cout << "2 insert" << endl;
//Inserting Robocraft
string Robocraft_tags[20] = {"Early Access","Free to Play","Robots","Building","Multiplayer","Action","Shooter","PvP","Massively Multiplayer","Sandbox","Crafting","Third-Person Shooter","Sci-fi","Strategy","Simulation","Indie","Open World","Funny","RPG","Adventure"};
g.insert_game("Robocraft", "Freejam", "Freejam", Robocraft_tags, 20);
cout << "3 insert" << endl;
//Inserting War Thunder
string War_Thunder_tags[20] = {"Free to Play","World War II","Simulation","Multiplayer","War","Flight","Tanks","Military","Massively Multiplayer","Action","Historical","Realistic","Team-Based","Shooter","Arcade","Co-op","Strategy","FPS","Open World","TrackIR"};
g.insert_game("War Thunder", "Gaijin Entertainment", "Gaijin Entertainment", War_Thunder_tags, 20);
cout << "4 insert" << endl;
//Inserting Paladins
string Paladins_tags[20] = {"Early Access","Free to Play","Multiplayer","FPS","Shooter","Action","Team-Based","MOBA","First-Person","PvP","Online Co-Op","Strategy","Co-op","Fantasy","Massively Multiplayer","Funny","Adventure","Survival","Anime","Memes"};
g.insert_game("Paladins", "Hi-Rez Studios", "Hi-Rez Studios", Paladins_tags, 20);
cout << "5 insert" << endl;
//Inserting Portal
string Portal_tags[20] = {"Puzzle","First-Person","Singleplayer","Sci-fi","Comedy","Female Protagonist","Action","Funny","Platformer","FPS","Story Rich","Short","Physics","Classic","Adventure","Science","Atmospheric","Dark Humor","Great Soundtrack","Strategy"};
g.insert_game("Portal", "Valve", "Valve", Portal_tags, 20);
cout << "6 insert" << endl;
//Inserting Terraria
string Terraria_tags[20] = {"Sandbox","Adventure","Survival","2D","Multiplayer","Crafting","Building","Exploration","Pixel Graphics","Co-op","Indie","Open World","Action","RPG","Online Co-Op","Singleplayer","Platformer","Replay Value","Atmospheric","Family Friendly"};
g.insert_game("Terraria", "Re-Logic", "Re-Logic", Terraria_tags, 20);
cout << "7 insert" << endl;
//Inserting Trove
string Trove_tags[20] = {"Free to Play","Open World","Multiplayer","Adventure","Massively Multiplayer","Building","MMORPG","Sandbox","Action","Pixel Graphics","Crafting","RPG","Third Person","Exploration","Co-op","Dungeon Crawler","Voxel","Funny","Casual","FPS"};
g.insert_game("Trove", "Trion Worlds", "Trion Worlds", Trove_tags, 20);
cout << "8 insert" << endl;
//Inserting No More Room in Hell
string No_More_Room_in_Hell_tags[20] = {"Free to Play","Zombies","Multiplayer","Survival","Horror","Co-op","Action","Online Co-Op","FPS","First-Person","Shooter","Survival Horror","Post-apocalyptic","Open World","Indie","Realistic","Atmospheric","Mod","Adventure","Massively Multiplayer"};
g.insert_game("No More Room in Hell", "No More Room in Hell Team", "Lever Games", No_More_Room_in_Hell_tags, 20);
cout << "9 insert" << endl;
//Inserting Day of Defeat
string Day_of_Defeat_tags[11] = {"FPS","World War II","Multiplayer","Action","Shooter","War","Team-Based","Classic","Class-Based","First-Person","Historical"};
g.insert_game("Day of Defeat", "Valve", "Valve", Day_of_Defeat_tags, 11);
cout << "10 insert" << endl;
//Inserting Deathmatch Classic
string Deathmatch_Classic_tags[8] = {"Action","FPS","Multiplayer","Classic","Shooter","First-Person","Arena Shooter","Sci-fi"};
g.insert_game("Deathmatch Classic", "Valve", "Valve", Deathmatch_Classic_tags, 8);
cout << "11 insert" << endl;
//Inserting Ricochet
string Ricochet_tags[11] = {"Action","FPS","Multiplayer","First-Person","Cyberpunk","Classic","Space","Sci-fi","Shooter","Conspiracy","Platformer"};
g.insert_game("Ricochet", "Valve", "Valve", Ricochet_tags, 11);
cout << "12 insert" << endl;
//Inserting Grand Theft Auto V
string Grand_Theft_Auto_V_tags[20] = {"Open World","Action","Multiplayer","First-Person","Third Person","Crime","Adventure","Shooter","Third-Person Shooter","Singleplayer","Racing","Atmospheric","Mature","Sandbox","Co-op","Great Soundtrack","Funny","Comedy","Moddable","RPG"};
g.insert_game("Grand Theft Auto V", "Rockstar North", "Rockstar Games", Grand_Theft_Auto_V_tags, 20);
cout << "13 insert" << endl;
//Inserting Path of Exile
string Path_of_Exile_tags[20] = {"Free to Play","Action RPG","RPG","Hack and Slash","Multiplayer","Massively Multiplayer","Indie","Action","Fantasy","Adventure","Loot","Dungeon Crawler","MMORPG","Co-op","Online Co-Op","Fishing","Character Customization","Dark Fantasy","PvE","Inventory Management"};
g.insert_game("Path of Exile", "Grinding Gear Games", "Grinding Gear Games", Path_of_Exile_tags, 20);
cout << "14 insert" << endl;
//Inserting Dirty Bomb
string Dirty_Bomb_tags[20] = {"Free to Play","FPS","Multiplayer","Shooter","Action","Team-Based","First-Person","Fast-Paced","Co-op","Class-Based","PvP","Competitive","Massively Multiplayer","Parkour","Post-apocalyptic","Controller","Singleplayer","Open World","Gore","Female Protagonist"};
g.insert_game("Dirty Bomb", "Splash Damage®", "Warchest Ltd.", Dirty_Bomb_tags, 20);
cout << "15 insert" << endl;
//Inserting Brawlhalla
string Brawlhalla_tags[20] = {"Early Access","Free to Play","Fighting","Multiplayer","2D","Action","2D Fighter","Local Multiplayer","Platformer","Beat 'em up","Co-op","Indie","Controller","Local Co-Op","Online Co-Op","4 Player Local","Singleplayer","Massively Multiplayer","Survival","Adventure"};
g.insert_game("Brawlhalla", "Blue Mammoth Games", "Blue Mammoth Games", Brawlhalla_tags, 20);
cout << "16 insert" << endl;
//Inserting SMITE
string SMITE_tags[20] = {"Free to Play","MOBA","Multiplayer","Action","Third Person","Mythology","Team-Based","Competitive","Strategy","Co-op","PvP","Massively Multiplayer","RPG","e-sports","Adventure","MMORPG","Funny","Survival","Casual","Nudity"};
g.insert_game("SMITE", "Hi-Rez Studios", "Hi-Rez Studios", SMITE_tags, 20);
cout << "17 insert" << endl;
//Inserting Loadout
string Loadout_tags[20] = {"Free to Play","Third-Person Shooter","Action","Gore","Multiplayer","Gun Customization","Shooter","Funny","Fast-Paced","Indie","Comedy","Mature","Character Customization","Third Person","Cartoony","Massively Multiplayer","Co-op","Crafting","Arena Shooter","Casual"};
g.insert_game("Loadout", "Edge of Reality", "Edge of Reality", Loadout_tags, 20);
cout << "18 insert" << endl;
//Inserting Team Fortress Classic
string Team_Fortress_Classic_tags[20] = {"Action","FPS","Multiplayer","Classic","Shooter","Class-Based","Team-Based","First-Person","1990's","Co-op","Competitive","Fast-Paced","Retro","Online Co-Op","Remake","Funny","Mod","Adventure","Story Rich","Casual"};
g.insert_game("Team Fortress Classic", "Valve", "Valve", Team_Fortress_Classic_tags, 20);
cout << "19 insert" << endl;
//Inserting Rocket League
string Rocket_League_tags[20] = {"Multiplayer","Racing","Soccer","Sports","Competitive","Team-Based","Online Co-Op","Football","Action","Co-op","Fast-Paced","Funny","Great Soundtrack","Local Multiplayer","Local Co-Op","Split Screen","Singleplayer","4 Player Local","Casual","Indie"};
g.insert_game("Rocket League", "Psyonix, Inc.", "Psyonix, Inc.", Rocket_League_tags, 20);
cout << "20 insert" << endl;
//Inserting Rust
string Rust_tags[20] = {"Early Access","Survival","Crafting","Multiplayer","Open World","Sandbox","PvP","Building","Adventure","First-Person","Action","FPS","Indie","Nudity","Co-op","Shooter","Online Co-Op","Simulation","Post-apocalyptic","Survival Horror"};
g.insert_game("Rust", "Facepunch Studios", "Facepunch Studios", Rust_tags, 20);
cout << "21 insert" << endl;
//Inserting Clicker Heroes
string Clicker_Heroes_tags[20] = {"Clicker","Free to Play","Casual","Singleplayer","Indie","2D","RPG","Adventure","Funny","Fantasy","Simulation","Strategy","Multiplayer","Family Friendly","Action","Illuminati","Touch-Friendly","Management","Zombies","Open World"};
g.insert_game("Clicker Heroes", "Playsaurus", "Playsaurus", Clicker_Heroes_tags, 20);
cout << "22 insert" << endl;
//Inserting Alien Swarm
string Alien_Swarm_tags[20] = {"Free to Play","Co-op","Action","Multiplayer","Aliens","Online Co-Op","Shooter","Sci-fi","Top-Down","Top-Down Shooter","Survival","Third Person","Class-Based","PvE","Team-Based","Third-Person Shooter","Moddable","Strategy","Adventure","Singleplayer"};
g.insert_game("Alien Swarm", "Valve", "Valve", Alien_Swarm_tags, 20);
cout << "23 insert" << endl;
//Inserting APB Reloaded
string APB_Reloaded_tags[20] = {"Free to Play","Action","Open World","Character Customization","Multiplayer","Massively Multiplayer","Third-Person Shooter","Shooter","PvP","Third Person","Crime","Co-op","Racing","Sandbox","FPS","Adventure","Hacking","Singleplayer","Nudity","Anime"};
g.insert_game("APB Reloaded", "Reloaded Productions", "Reloaded Games", APB_Reloaded_tags, 20);
cout << "24 insert" << endl;
//Inserting theHunter
string theHunter_tags[20] = {"Free to Play","Hunting","Multiplayer","Open World","Simulation","Shooter","Co-op","First-Person","Realistic","Survival","Sports","Online Co-Op","Adventure","FPS","Singleplayer","Action","Stealth","Strategy","Massively Multiplayer","Casual"};
g.insert_game("theHunter", "Expansive Worlds, Avalanche Studios", "Expansive Worlds, Avalanche Studios", theHunter_tags, 20);
cout << "25 insert" << endl;
//Inserting Neverwinter
string Neverwinter_tags[20] = {"Free to Play","MMORPG","RPG","Massively Multiplayer","Adventure","Action","Fantasy","Multiplayer","Open World","Character Customization","Co-op","Dragons","PvP","Third Person","Action RPG","PvE","Atmospheric","Hack and Slash","Zombies","Comedy"};
g.insert_game("Neverwinter", "Cryptic Studios", "Perfect World Entertainment", Neverwinter_tags, 20);
cout << "26 insert" << endl;
//Inserting BioShock Infinite
string BioShock_Infinite_tags[20] = {"FPS","Action","Story Rich","Singleplayer","Steampunk","Atmospheric","Shooter","First-Person","Alternate History","Adventure","Great Soundtrack","Dystopian ","Sci-fi","Time Travel","Fantasy","Linear","Gore","RPG","Political","Controller"};
g.insert_game("BioShock Infinite", "Irrational Games, Aspyr (Mac), Virtual Programming (Linux)", "2K Games, Aspyr (Mac)", BioShock_Infinite_tags, 20);
cout << "27 insert" << endl;
//Inserting Tomb Raider
string Tomb_Raider_tags[20] = {"Adventure","Action","Female Protagonist","Third Person","Third-Person Shooter","Singleplayer","Lara Croft","Story Rich","Quick-Time Events","Exploration","Multiplayer","Atmospheric","Shooter","Puzzle","Stealth","Action-Adventure","Platformer","Cinematic","3D Vision","RPG"};
g.insert_game("Tomb Raider", "Crystal Dynamics, Feral Interactive (Mac), Feral Interactive (Linux)", "Square Enix, Feral Interactive (Mac), Feral Interactive (Linux)", Tomb_Raider_tags, 20);
cout << "28 insert" << endl;
//Inserting PAYDAY The Heist
string PAYDAY_The_Heist_tags[20] = {"FPS","Action","Co-op","Heist","Crime","Multiplayer","Online Co-Op","Shooter","First-Person","Great Soundtrack","Team-Based","Difficult","Stealth","Tactical","Strategy","Singleplayer","Simulation","RPG","Indie","Adventure"};
g.insert_game("PAYDAY The Heist", "OVERKILL Software", "Daybreak Game Company", PAYDAY_The_Heist_tags, 20);
cout << "29 insert" << endl;
//Inserting AdVenture Capitalist
string AdVenture_Capitalist_tags[20] = {"Free to Play","Clicker","Casual","Capitalism","Singleplayer","Indie","Management","Simulation","Point & Click","2D","Funny","Adventure","Touch-Friendly","Strategy","Real-Time","Comedy","Memes","Family Friendly","Sandbox","Great Soundtrack"};
g.insert_game("AdVenture Capitalist", "Hyper Hippo Games", "Hyper Hippo Games", AdVenture_Capitalist_tags, 20);
cout << "30 insert" << endl;
//Inserting Age of Empires II HD
string Age_of_Empires_II_HD_tags[20] = {"Strategy","RTS","Classic","Medieval","Multiplayer","Historical","Singleplayer","Base-Building","Resource Management","Competitive","Co-op","City Builder","Tactical","Real-Time","Remake","Replay Value","2D","Adventure","Action","Isometric"};
g.insert_game("Age of Empires II HD", "Skybox Labs, Hidden Path Entertainment, Ensemble Studios", "Microsoft Studios", Age_of_Empires_II_HD_tags, 20);
cout << "31 insert" << endl;
//Inserting Grand Theft Auto IV
string Grand_Theft_Auto_IV_tags[20] = {"Open World","Action","Bowling","Multiplayer","Third Person","Adventure","Crime","Moddable","Sandbox","Third-Person Shooter","Singleplayer","Shooter","Physics","Atmospheric","Classic","Funny","Dark Humor","Co-op","Gore","Satire"};
g.insert_game("Grand Theft Auto IV", "Rockstar North, Rockstar Toronto", "Rockstar Games", Grand_Theft_Auto_IV_tags, 20);
cout << "32 insert" << endl;
//Inserting TERA
string TERA_tags[20] = {"Free to Play","MMORPG","Massively Multiplayer","RPG","Action","Open World","Adventure","Fantasy","Anime","Third Person","Co-op","Action RPG","PvP","Multiplayer","Character Customization","Hack and Slash","PvE","Cute","Controller","Nudity"};
g.insert_game("TERA", "Bluehole Inc., En Masse Entertainment", "En Masse Entertainment", TERA_tags, 20);
cout << "33 insert" << endl;
//Inserting LIMBO
string LIMBO_tags[20] = {"Indie","Platformer","Puzzle","Atmospheric","Dark","Adventure","2D","Singleplayer","Horror","Puzzle-Platformer","Surreal","Short","Difficult","Side Scroller","Physics","Casual","Minimalist","Cinematic","Action","Controller"};
g.insert_game("LIMBO", "Playdead", "Playdead", LIMBO_tags, 20);
cout << "34 insert" << endl;
//Inserting Magicka
string Magicka_tags[20] = {"Comedy","Action","Co-op","Fantasy","RPG","Online Co-Op","Multiplayer","Adventure","Funny","Magic","Local Co-Op","Indie","4 Player Local","Difficult","Local Multiplayer","Singleplayer","Team-Based","Strategy","Action RPG","Arcade"};
g.insert_game("Magicka", "Arrowhead Game Studios", "Paradox Interactive", Magicka_tags, 20);
cout << "35 insert" << endl;
//Inserting BioShock Remastered
string BioShock_Remastered_tags[16] = {"Action","FPS","Story Rich","Horror","RPG","Shooter","First-Person","Atmospheric","Singleplayer","Sci-fi","Underwater","Dystopian ","Remake","Adventure","Great Soundtrack","Alternate History"};
g.insert_game("BioShock Remastered", "2K Boston, 2K Australia, Blind Squirrel", "2K", BioShock_Remastered_tags, 16);
cout << "36 insert" << endl;
//Inserting BioShock
string BioShock_tags[20] = {"FPS","Action","Atmospheric","Story Rich","Singleplayer","Steampunk","Horror","First-Person","Shooter","RPG","Sci-fi","Classic","Adventure","Dystopian ","Underwater","Political","Dark","Great Soundtrack","Alternate History","Action RPG"};
g.insert_game("BioShock", "2K Boston, 2K Australia", "2K Games", BioShock_tags, 20);
cout << "37 insert" << endl;
//Inserting Killing Floor
string Killing_Floor_tags[20] = {"FPS","Zombies","Co-op","Survival","Action","Horror","Multiplayer","Online Co-Op","Shooter","Gore","Team-Based","First-Person","Moddable","Survival Horror","Great Soundtrack","Singleplayer","Class-Based","Difficult","Comedy","Adventure"};
g.insert_game("Killing Floor", "Tripwire Interactive", "Tripwire Interactive", Killing_Floor_tags, 20);
cout << "38 insert" << endl;
//Inserting DayZ
string DayZ_tags[20] = {"Early Access","Survival","Zombies","Open World","Multiplayer","PvP","Massively Multiplayer","Action","Simulation","FPS","Post-apocalyptic","Shooter","Survival Horror","Sandbox","Indie","Adventure","Co-op","Horror","Atmospheric","Military"};
g.insert_game("DayZ", "Bohemia Interactive", "Bohemia Interactive", DayZ_tags, 20);
cout << "39 insert" << endl;
//Inserting Insurgency
string Insurgency_tags[20] = {"FPS","Realistic","Tactical","Multiplayer","Action","Shooter","Military","Team-Based","Co-op","Strategy","First-Person","Indie","Online Co-Op","War","Competitive","Simulation","PvP","Atmospheric","Singleplayer","Adventure"};
g.insert_game("Insurgency", "New World Interactive", "New World Interactive", Insurgency_tags, 20);
cout << "40 insert" << endl;
//Inserting Defiance
string Defiance_tags[20] = {"Free to Play","Action","Open World","Massively Multiplayer","Third-Person Shooter","Multiplayer","RPG","Co-op","Shooter","Sci-fi","Post-apocalyptic","Survival","FPS","Adventure","Online Co-Op","Third Person","MMORPG","First-Person","Singleplayer","Casual"};
g.insert_game("Defiance", "Trion Worlds, Inc.", "Trion Worlds, Inc.", Defiance_tags, 20);
cout << "41 insert" << endl;
//Inserting HAWKEN
string HAWKEN_tags[20] = {"Early Access","Mechs","Free to Play","Action","FPS","Multiplayer","Robots","Shooter","Co-op","Sci-fi","Competitive","VR","Tactical","Fast-Paced","First-Person","Destruction","Futuristic","Massively Multiplayer","Arena Shooter","Cyberpunk"};
g.insert_game("HAWKEN", "Reloaded Games", "Reloaded Games", HAWKEN_tags, 20);
cout << "42 insert" << endl;
//Inserting RaceRoom Racing Experience
string RaceRoom_Racing_Experience_tags[18] = {"Racing","Free to Play","Multiplayer","Simulation","Sports","Driving","Action","Singleplayer","First-Person","Realistic","Open World","Controller","Massively Multiplayer","Adventure","Co-op","Online Co-Op","FPS","VR"};
g.insert_game("RaceRoom Racing Experience", "Sector3 Studios", "Sector3 Studios, RaceRoom Entertainment AG", RaceRoom_Racing_Experience_tags, 18);
cout << "43 insert" << endl;
//Inserting Torchlight II
string Torchlight_II_tags[20] = {"RPG","Action RPG","Hack and Slash","Co-op","Dungeon Crawler","Loot","Fantasy","Action","Online Co-Op","Adventure","Multiplayer","Singleplayer","Indie","Moddable","Character Customization","Replay Value","Isometric","Steampunk","Atmospheric","Cartoon"};
g.insert_game("Torchlight II", "Runic Games", "Runic Games", Torchlight_II_tags, 20);
cout << "44 insert" << endl;
//Inserting Castle Crashers
string Castle_Crashers_tags[20] = {"Co-op","Action","Adventure","Beat 'em up","Multiplayer","Local Co-Op","Indie","Funny","Online Co-Op","Comedy","Hack and Slash","RPG","2D","Casual","Local Multiplayer","Controller","Great Soundtrack","Side Scroller","Fantasy","Action RPG"};
g.insert_game("Castle Crashers", "The Behemoth", "The Behemoth", Castle_Crashers_tags, 20);
cout << "45 insert" << endl;
//Inserting Fistful of Frags
string Fistful_of_Frags_tags[20] = {"Free to Play","Multiplayer","FPS","Western","Shooter","Action","First-Person","Indie","Mod","Funny","Online Co-Op","Comedy","Co-op","Survival","Massively Multiplayer","Historical","Classic","Adventure","Simulation","RPG"};
g.insert_game("Fistful of Frags", "Fistful of Frags Team", "Fistful of Frags Team", Fistful_of_Frags_tags, 20);
cout << "46 insert" << endl;
//Inserting Survarium
string Survarium_tags[20] = {"Early Access","Free to Play","Survival","Multiplayer","FPS","Shooter","Post-apocalyptic","Action","First-Person","Open World","PvP","Atmospheric","Massively Multiplayer","Co-op","Zombies","Crafting","RPG","Adventure","Exploration","MMORPG"};
g.insert_game("Survarium", "Vostok Games", "Vostok Games", Survarium_tags, 20);
cout << "47 insert" << endl;
//Inserting Saints Row IV
string Saints_Row_IV_tags[20] = {"Open World","Action","Comedy","Co-op","Third-Person Shooter","Superhero","Sandbox","Third Person","Funny","Character Customization","Adventure","Online Co-Op","Aliens","Parody ","Multiplayer","Great Soundtrack","Sci-fi","Singleplayer","Female Protagonist","Dark Humor"};
g.insert_game("Saints Row IV", "Deep Silver Volition", "Deep Silver", Saints_Row_IV_tags, 20);
cout << "48 insert" << endl;
//Inserting Borderlands
string Borderlands_tags[20] = {"FPS","RPG","Co-op","Action","Loot","Online Co-Op","Shooter","First-Person","Comedy","Open World","Sci-fi","Multiplayer","Post-apocalyptic","Singleplayer","Action RPG","Funny","Adventure","Dark Humor","Gore","Local Co-Op"};
g.insert_game("Borderlands", "Gearbox Software", "2K Games", Borderlands_tags, 20);
cout << "49 insert" << endl;
//Inserting Creativerse
string Creativerse_tags[20] = {"Free to Play","Survival","Multiplayer","Open World","Building","Sandbox","Crafting","Adventure","First-Person","Massively Multiplayer","Action","Singleplayer","Co-op","RPG","Indie","Casual","Simulation","Voxel","Zombies","Funny"};
g.insert_game("Creativerse", "Playful Corporation", "Playful Corporation", Creativerse_tags, 20);
cout << "50 insert" << endl;
//Inserting Dishonored
string Dishonored_tags[20] = {"Stealth","First-Person","Action","Steampunk","Assassin","Singleplayer","Atmospheric","Story Rich","Adventure","Multiple Endings","Dark","Magic","Dystopian ","FPS","RPG","Replay Value","Fantasy","Open World","Shooter","Sci-fi"};
g.insert_game("Dishonored", "Arkane Studios", "Bethesda Softworks", Dishonored_tags, 20);
cout << "51 insert" << endl;
//Inserting Company of Heroes
string Company_of_Heroes_tags[20] = {"Strategy","RTS","World War II","Multiplayer","Action","Tactical","Military","Singleplayer","Base-Building","War","Historical","Tanks","Moddable","Co-op","Simulation","Classic","Team-Based","Adventure","FPS","Free to Play"};
g.insert_game("Company of Heroes", "Relic Entertainment", "SEGA", Company_of_Heroes_tags, 20);
cout << "52 insert" << endl;
//Inserting The Forest
string The_Forest_tags[20] = {"Early Access","Survival","Open World","Horror","Crafting","Adventure","Building","First-Person","Action","Survival Horror","Sandbox","Exploration","Atmospheric","Simulation","Indie","Singleplayer","Realistic","Gore","FPS","Zombies"};
g.insert_game("The Forest", "Endnight Games Ltd", "Endnight Games Ltd", The_Forest_tags, 20);
cout << "53 insert" << endl;
//Inserting Firefall
string Firefall_tags[20] = {"Free to Play","Massively Multiplayer","Open World","Shooter","Action","FPS","Multiplayer","RPG","Sci-fi","Co-op","Third-Person Shooter","First-Person","Adventure","PvE","Third Person","PvP","Crafting","Sandbox","Singleplayer","Indie"};
g.insert_game("Firefall", "Red 5 Studios", "Red 5 Studios", Firefall_tags, 20);
cout << "54 insert" << endl;
//Inserting Cry of Fear
string Cry_of_Fear_tags[20] = {"Horror","Free to Play","Survival Horror","Co-op","Multiplayer","Action","Indie","Psychological Horror","Atmospheric","Adventure","Online Co-Op","First-Person","Zombies","Psychological","Singleplayer","FPS","Survival","Shooter","Mod","Massively Multiplayer"};
g.insert_game("Cry of Fear", "Team Psykskallar", "Team Psykskallar", Cry_of_Fear_tags, 20);
cout << "55 insert" << endl;
//Inserting The Binding of Isaac
string The_Binding_of_Isaac_tags[20] = {"Rogue-like","Indie","Replay Value","Difficult","Procedural Generation","Action","Dark","Top-Down","Great Soundtrack","Adventure","Singleplayer","Rogue-lite","RPG","Survival","Perma Death","2D","Dungeon Crawler","Bullet Hell","Atmospheric","Arena Shooter"};
g.insert_game("The Binding of Isaac", "Edmund McMillen and Florian Himsl", "Edmund McMillen", The_Binding_of_Isaac_tags, 20);
cout << "56 insert" << endl;
//Inserting Spiral Knights
string Spiral_Knights_tags[20] = {"Free to Play","Massively Multiplayer","Adventure","RPG","Action","Multiplayer","Online Co-Op","Dungeon Crawler","Hack and Slash","MMORPG","Co-op","Cute","Action RPG","Sci-fi","Great Soundtrack","Open World","Casual","Singleplayer","Anime","Indie"};
g.insert_game("Spiral Knights", "Grey Havens", "", Spiral_Knights_tags, 20);
cout << "57 insert" << endl;
//Inserting Gotham City Impostors Free to Play
string Gotham_City_Impostors_Free_to_Play_tags[20] = {"Free to Play","Action","Multiplayer","Batman","FPS","Shooter","Funny","Superhero","First-Person","Character Customization","Comic Book","Comedy","Massively Multiplayer","Online Co-Op","Co-op","Fighting","Gore","Open World","Adventure","Sandbox"};
g.insert_game("Gotham City Impostors Free to Play", "Monolith Productions, Inc.", "Warner Bros. Interactive Entertainment", Gotham_City_Impostors_Free_to_Play_tags, 20);
cout << "58 insert" << endl;
//Inserting The Expendabros
string The_Expendabros_tags[20] = {"Free to Play","Action","Pixel Graphics","Multiplayer","2D","Local Co-Op","Shooter","Co-op","Platformer","Indie","Singleplayer","Adventure","Local Multiplayer","America","Comedy","Side Scroller","Funny","Controller","Classic","Open World"};
g.insert_game("The Expendabros", "Free Lives", "Devolver Digital", The_Expendabros_tags, 20);
cout << "59 insert" << endl;
//Inserting Realm of the Mad God
string Realm_of_the_Mad_God_tags[20] = {"Free to Play","Massively Multiplayer","Pixel Graphics","RPG","Perma Death","Multiplayer","Bullet Hell","Action","MMORPG","Indie","Rogue-like","2D","Open World","Adventure","Difficult","Survival","Co-op","Retro","Strategy","Casual"};
g.insert_game("Realm of the Mad God", "Wild Shadow Studios", "Deca Games", Realm_of_the_Mad_God_tags, 20);
cout << "60 insert" << endl;
//Inserting STAR WARS Battlefront II
string STAR_WARS_Battlefront_II_tags[20] = {"Star Wars","Action","Multiplayer","Third-Person Shooter","Shooter","Sci-fi","Space","Classic","FPS","First-Person","Singleplayer","Moddable","Third Person","Military","Tactical","Strategy","Co-op","Adventure","Great Soundtrack","Open World"};
g.insert_game("STAR WARS Battlefront II", "Pandemic Studios", "Lucasfilm, LucasArts, Disney Interactive", STAR_WARS_Battlefront_II_tags, 20);
cout << "61 insert" << endl;
//Inserting Starbound
string Starbound_tags[20] = {"Sandbox","Adventure","Indie","Survival","Crafting","Space","Multiplayer","Building","2D","Pixel Graphics","RPG","Action","Exploration","Platformer","Open World","Sci-fi","Co-op","Singleplayer","Atmospheric","Great Soundtrack"};
g.insert_game("Starbound", "", "Chucklefish", Starbound_tags, 20);
cout << "62 insert" << endl;
//Inserting Dungeon Defenders II
string Dungeon_Defenders_II_tags[20] = {"Early Access","Tower Defense","Free to Play","Multiplayer","Co-op","Strategy","RPG","Action","Online Co-Op","Fantasy","Adventure","Indie","Third Person","Funny","Hack and Slash","Casual","Singleplayer","Massively Multiplayer","MMORPG","MOBA"};
g.insert_game("Dungeon Defenders II", "Trendy Entertainment", "Trendy Entertainment", Dungeon_Defenders_II_tags, 20);
cout << "63 insert" << endl;
//Inserting Block N Load
string Block_N_Load_tags[20] = {"Free to Play","Action","Multiplayer","FPS","Building","Shooter","Strategy","First-Person","Team-Based","Class-Based","Base-Building","Massively Multiplayer","Destruction","PvP","Sandbox","Funny","MOBA","Voxel","Comedy","Gore"};
g.insert_game("Block N Load", "Jagex, Artplant", "Jagex", Block_N_Load_tags, 20);
cout << "64 insert" << endl;
//Inserting Goat Simulator
string Goat_Simulator_tags[20] = {"Simulation","Funny","Comedy","Open World","Sandbox","Physics","Indie","Action","Singleplayer","Casual","Destruction","Third Person","Co-op","Exploration","Moddable","Local Multiplayer","Local Co-Op","MMORPG","Family Friendly","Memes"};
g.insert_game("Goat Simulator", "Coffee Stain Studios", "Coffee Stain Studios", Goat_Simulator_tags, 20);
cout << "65 insert" << endl;
//Inserting RIFT
string RIFT_tags[20] = {"Free to Play","MMORPG","Massively Multiplayer","RPG","Fantasy","Multiplayer","Open World","Adventure","Action","Co-op","Character Customization","Online Co-Op","PvP","Magic","Survival","Singleplayer","Crafting","Strategy","First-Person","FPS"};
g.insert_game("RIFT", "Trion Worlds", "Trion Worlds", RIFT_tags, 20);
cout << "66 insert" << endl;
//Inserting Darksiders Warmastered Edition
string Darksiders_Warmastered_Edition_tags[13] = {"Action","Adventure","Hack and Slash","Violent","RPG","Third Person","Singleplayer","Dark Fantasy","Fantasy","Gore","Puzzle","Open World","Remake"};
g.insert_game("Darksiders Warmastered Edition", "KAIKO, Vigil Games", "THQ Nordic", Darksiders_Warmastered_Edition_tags, 13);
cout << "67 insert" << endl;
//Inserting Super Meat Boy
string Super_Meat_Boy_tags[20] = {"Platformer","Indie","Difficult","2D","Great Soundtrack","Singleplayer","Fast-Paced","Retro","Pixel Graphics","Controller","Action","Gore","Time Attack","Funny","Comedy","Side Scroller","Adventure","Replay Value","Casual","Level Editor"};
g.insert_game("Super Meat Boy", "Team Meat", "", Super_Meat_Boy_tags, 20);
cout << "68 insert" << endl;
//Inserting Darksiders
string Darksiders_tags[20] = {"Action","Adventure","Hack and Slash","Third Person","Singleplayer","Post-apocalyptic","Fantasy","Controller","Action RPG","Action-Adventure","Puzzle","Metroidvania","Open World","Spectacle fighter","3D Platformer","RPG","Gore","Beat 'em up","Character Action Game","Platformer"};
g.insert_game("Darksiders", "Vigil Games", "THQ Nordic", Darksiders_tags, 20);
cout << "69 insert" << endl;
//Inserting Quake Live
string Quake_Live_tags[15] = {"FPS","Multiplayer","Classic","Arena Shooter","Fast-Paced","Action","Shooter","e-sports","Competitive","First-Person","Difficult","Cult Classic","Funny","Parkour","Survival"};
g.insert_game("Quake Live", "id Software", "Bethesda Softworks", Quake_Live_tags, 15);
cout << "70 insert" << endl;
//Inserting Toribash
string Toribash_tags[20] = {"Free to Play","Fighting","Multiplayer","Physics","Gore","Action","Strategy","Turn-Based","Indie","Martial Arts","Funny","Simulation","Blood","Moddable","Sandbox","Difficult","Parkour","Singleplayer","Turn-Based Strategy","Co-op"};
g.insert_game("Toribash", "Nabi Studios", "Nicalis, Inc.", Toribash_tags, 20);
cout << "71 insert" << endl;
//Inserting Tactical Intervention
string Tactical_Intervention_tags[20] = {"Free to Play","Action","FPS","Multiplayer","Shooter","Co-op","Tactical","First-Person","Open World","Zombies","Adventure","Massively Multiplayer","Singleplayer","Simulation","Strategy","Gore","Sandbox","RPG","Indie","Casual"};
g.insert_game("Tactical Intervention", "FIX Korea, Co.LTD, FIX Games, Co. LTD", "FIX Games, Co. LTD", Tactical_Intervention_tags, 20);
cout << "72 insert" << endl;
//Inserting Undertale
string Undertale_tags[20] = {"Great Soundtrack","Story Rich","Choices Matter","Funny","RPG","Multiple Endings","Pixel Graphics","Singleplayer","Indie","Comedy","Replay Value","2D","Bullet Hell","Cute","Memes","Retro","Dark","Psychological Horror","Dating Sim","Horror"};
g.insert_game("Undertale", "tobyfox", "tobyfox", Undertale_tags, 20);
cout << "73 insert" << endl;
//Inserting Fallout Shelter
string Fallout_Shelter_tags[20] = {"Free to Play","Survival","Post-apocalyptic","Simulation","Singleplayer","Base-Building","Strategy","Management","2D","RPG","Casual","Adventure","Building","Crafting","Action","Sandbox","Funny","Multiplayer","Atmospheric","Great Soundtrack"};
g.insert_game("Fallout Shelter", "Bethesda Game Studios", "Bethesda Softworks LLC", Fallout_Shelter_tags, 20);
cout << "74 insert" << endl;
//Inserting Stardew Valley
string Stardew_Valley_tags[20] = {"RPG","Simulation","Agriculture","Pixel Graphics","Crafting","Relaxing","Indie","Sandbox","Singleplayer","Building","Great Soundtrack","Casual","2D","Fishing","Cute","Dating Sim","Atmospheric","Open World","Retro","Multiplayer"};
g.insert_game("Stardew Valley", "ConcernedApe", "Chucklefish", Stardew_Valley_tags, 20);
cout << "75 insert" << endl;
//Inserting Magic Duels
string Magic_Duels_tags[16] = {"Free to Play","Card Game","Trading Card Game","Magic","Strategy","Multiplayer","Singleplayer","Fantasy","Co-op","Online Co-Op","Turn-Based","Action","Great Soundtrack","Survival","Horror","Nudity"};
g.insert_game("Magic Duels", "Stainless Games Ltd.", "Wizards of the Coast LLC", Magic_Duels_tags, 16);
cout << "76 insert" << endl;
//Inserting Mafia II
string Mafia_II_tags[20] = {"Action","Open World","Crime","Story Rich","Atmospheric","Singleplayer","Third Person","Third-Person Shooter","Shooter","Adventure","Great Soundtrack","America","Driving","Music","Classic","Nudity","Multiplayer","Sandbox","3D Vision","RPG"};
g.insert_game("Mafia II", "2K Czech, Feral Interactive (Mac)", "2K Games, Feral Interactive (Mac)", Mafia_II_tags, 20);
cout << "77 insert" << endl;
//Inserting DC Universe Online
string DC_Universe_Online_tags[20] = {"Free to Play","Superhero","Massively Multiplayer","Action","RPG","Open World","MMORPG","Adventure","Multiplayer","Character Customization","Batman","Comic Book","Third Person","Fighting","Co-op","Online Co-Op","PvP","Fantasy","Beat 'em up","Indie"};
g.insert_game("DC Universe Online", "Daybreak Game Company", "Daybreak Game Company", DC_Universe_Online_tags, 20);
cout << "78 insert" << endl;
//Inserting Bastion
string Bastion_tags[20] = {"Great Soundtrack","Indie","Action","Narration","Singleplayer","RPG","Hack and Slash","Story Rich","Dynamic Narration","Isometric","Adventure","Action RPG","Fantasy","Atmospheric","Colorful","Post-apocalyptic","Twin Stick Shooter","2D","Controller","Music"};
g.insert_game("Bastion", "Supergiant Games", "Warner Bros. Interactive Entertainment", Bastion_tags, 20);
cout << "79 insert" << endl;
//Inserting BattleBlock Theater
string BattleBlock_Theater_tags[20] = {"Comedy","Co-op","Platformer","Funny","Multiplayer","Indie","Adventure","Local Co-Op","2D","Action","Great Soundtrack","Casual","Puzzle","Online Co-Op","Level Editor","Local Multiplayer","Singleplayer","Team-Based","Difficult","Sandbox"};
g.insert_game("BattleBlock Theater", "The Behemoth", "The Behemoth", BattleBlock_Theater_tags, 20);
cout << "80 insert" << endl;
//Inserting Aura Kingdom
string Aura_Kingdom_tags[20] = {"Anime","Free to Play","MMORPG","RPG","Massively Multiplayer","Adventure","Multiplayer","Fantasy","Open World","Casual","Action","JRPG","Cute","Nudity","PvE","Magic","Third Person","Online Co-Op","Co-op","Female Protagonist"};
g.insert_game("Aura Kingdom", "X-Legend", "Aeria Games", Aura_Kingdom_tags, 20);
cout << "81 insert" << endl;
//Inserting Gear Up
string Gear_Up_tags[20] = {"Free to Play","Multiplayer","Robots","Action","Shooter","Tanks","Building","PvP","Third Person","War","Massively Multiplayer","Sandbox","Indie","Strategy","Open World","Funny","Simulation","FPS","Adventure","Singleplayer"};
g.insert_game("Gear Up", "Doctor Entertainment AB", "Doctor Entertainment AB", Gear_Up_tags, 20);
cout << "82 insert" << endl;
//Inserting The Lord of the Rings Online
string The_Lord_of_the_Rings_Online_tags[20] = {"Free to Play","MMORPG","Massively Multiplayer","RPG","Fantasy","Open World","Adventure","Multiplayer","Based On A Novel","Action","Exploration","Character Customization","Story Rich","Co-op","Online Co-Op","Third Person","Survival","PvP","Singleplayer","Dark Fantasy"};
g.insert_game("The Lord of the Rings Online", "Standing Stone Games, LLC", "Standing Stone Games, LLC", The_Lord_of_the_Rings_Online_tags, 20);
cout << "83 insert" << endl;
//Inserting Wallpaper Engine
string Wallpaper_Engine_tags[11] = {"Early Access","Utilities","Design & Illustration","Software","Animation & Modeling","Anime","Memes","3D Vision","Illuminati","Zombies","Nudity"};
g.insert_game("Wallpaper Engine", "Kristjan Skutta", "Kristjan Skutta", Wallpaper_Engine_tags, 11);
cout << "84 insert" << endl;
//Inserting Fishing Planet
string Fishing_Planet_tags[20] = {"Early Access","Free to Play","Fishing","Simulation","Multiplayer","Sports","Massively Multiplayer","Relaxing","First-Person","Co-op","Realistic","Singleplayer","Open World","Online Co-Op","Family Friendly","Action","Adventure","Casual","MMORPG","FPS"};
g.insert_game("Fishing Planet", "Fishing Planet LLC", "Fishing Planet LLC", Fishing_Planet_tags, 20);
cout << "85 insert" << endl;
//Inserting The Stanley Parable
string The_Stanley_Parable_tags[20] = {"Comedy","Narration","Indie","First-Person","Walking Simulator","Satire","Funny","Psychological","Dynamic Narration","Adventure","Exploration","Singleplayer","Multiple Endings","Short","Choices Matter","Story Rich","Atmospheric","Surreal","Puzzle","Casual"};
g.insert_game("The Stanley Parable", "Galactic Cafe", "Galactic Cafe", The_Stanley_Parable_tags, 20);
cout << "86 insert" << endl;
//Inserting Transformice
string Transformice_tags[20] = {"Free to Play","Massively Multiplayer","Multiplayer","Funny","Platformer","2D","Casual","Adventure","Racing","Indie","Survival","Mouse only","Strategy","Cute","Online Co-Op","Family Friendly","Co-op","Puzzle","Comedy","Action"};
g.insert_game("Transformice", "Atelier 801", "Atelier 801", Transformice_tags, 20);
cout << "87 insert" << endl;
//Inserting Space Engineers
string Space_Engineers_tags[20] = {"Early Access","Space","Sandbox","Building","Multiplayer","Simulation","Survival","Physics","Open World","Crafting","Destruction","Indie","Futuristic","Co-op","Action","Singleplayer","Sci-fi","Strategy","Adventure","Atmospheric"};
g.insert_game("Space Engineers", "Keen Software House", "Keen Software House", Space_Engineers_tags, 20);
cout << "88 insert" << endl;
//Inserting The Walking Dead
string The_Walking_Dead_tags[20] = {"Zombies","Adventure","Story Rich","Point & Click","Episodic","Singleplayer","Horror","Mature","Choices Matter","Drama","Atmospheric","Comic Book","Choose Your Own Adventure","Post-apocalyptic","Survival","Quick-Time Events","Gore","Action","Third Person","Visual Novel"};
g.insert_game("The Walking Dead", "Telltale Games", "Telltale Games", The_Walking_Dead_tags, 20);
cout << "89 insert" << endl;
//Inserting Fractured Space
string Fractured_Space_tags[20] = {"Space","Multiplayer","Free to Play","PvP","MOBA","Action","Strategy","Sci-fi","Tactical","Shooter","Space Sim","Indie","Team-Based","Competitive","Co-op","Massively Multiplayer","Open World","Survival","Simulation","Sandbox"};
g.insert_game("Fractured Space", "Edge Case Games Ltd.", "Edge Case Games Ltd.", Fractured_Space_tags, 20);
cout << "90 insert" << endl;
//Inserting Hotline Miami
string Hotline_Miami_tags[20] = {"Great Soundtrack","Action","Indie","Violent","Top-Down","Fast-Paced","1980s","Gore","Pixel Graphics","Psychedelic","Retro","Surreal","Singleplayer","Difficult","Shooter","2D","Atmospheric","Music","Top-Down Shooter","Arcade"};
g.insert_game("Hotline Miami", "Dennaton Games", "Devolver Digital", Hotline_Miami_tags, 20);
cout << "91 insert" << endl;
//Inserting Prison Architect
string Prison_Architect_tags[20] = {"Simulation","Building","Strategy","Management","Sandbox","Singleplayer","Indie","2D","Resource Management","Economy","Base-Building","Top-Down","Moddable","City Builder","Replay Value","Casual","Comedy","Funny","Action","RTS"};
g.insert_game("Prison Architect", "Introversion Software", "Introversion Software", Prison_Architect_tags, 20);
cout << "92 insert" << endl;
//Inserting WARMODE
string WARMODE_tags[20] = {"Early Access","Free to Play","FPS","Multiplayer","Shooter","Action","First-Person","War","Massively Multiplayer","Co-op","Zombies","Singleplayer","Survival","Controller","Gore","Open World","Atmospheric","Online Co-Op","Adventure","RPG"};
g.insert_game("WARMODE", "WARTEAM", "WARTEAM", WARMODE_tags, 20);
cout << "93 insert" << endl;
//Inserting ArcheBlade
string ArcheBlade_tags[20] = {"Free to Play","Action","Anime","Fighting","Multiplayer","Indie","MOBA","Massively Multiplayer","Third Person","PvP","MMORPG","RPG","Team-Based","Hack and Slash","Adventure","Fantasy","Online Co-Op","Co-op","Female Protagonist","Third-Person Shooter"};
g.insert_game("ArcheBlade", "CodeBrush Games", "Codebrush Games", ArcheBlade_tags, 20);
cout << "94 insert" << endl;
//Inserting Star Conflict
string Star_Conflict_tags[20] = {"Free to Play","Space","Action","Multiplayer","Sci-fi","Massively Multiplayer","Simulation","Open World","Flight","Co-op","Space Sim","Third Person","Shooter","Competitive","PvP","Adventure","Atmospheric","Sandbox","MMORPG","VR"};
g.insert_game("Star Conflict", "Star Gem Inc.", "Gaijin Entertainment", Star_Conflict_tags, 20);
cout << "95 insert" << endl;
//Inserting Dungeon Defenders
string Dungeon_Defenders_tags[20] = {"Tower Defense","RPG","Strategy","Co-op","Action","Online Co-Op","Multiplayer","Fantasy","Indie","Third Person","Local Co-Op","Singleplayer","Local Multiplayer","4 Player Local","Split Screen","Action RPG","Loot","Hack and Slash","Third-Person Shooter","Survival"};
g.insert_game("Dungeon Defenders", "Trendy Entertainment", "Trendy Entertainment", Dungeon_Defenders_tags, 20);
cout << "96 insert" << endl;
//Inserting Knight Online
string Knight_Online_tags[20] = {"Free to Play","MMORPG","Massively Multiplayer","Action","Adventure","RPG","Action-Adventure","PvP","Open World","Multiplayer","War","Strategy","Survival","Action RPG","Casual","Character Customization","Fantasy","Anime","Horror","MOBA"};
g.insert_game("Knight Online", "Noah System, Mgame", "NTTGame", Knight_Online_tags, 20);
cout << "97 insert" << endl;
//Inserting Besiege
string Besiege_tags[20] = {"Early Access","Building","Sandbox","Physics","Destruction","Medieval","Singleplayer","Simulation","Strategy","Indie","Funny","Puzzle","Blood","Action","Casual","Open World","Third Person","Gore","Adventure","Difficult"};
g.insert_game("Besiege", "Spiderling Studios", "Spiderling Studios", Besiege_tags, 20);
cout << "98 insert" << endl;
//Inserting Sid Meiers Civilization VI
string Sid_Meiers_Civilization_VI_tags[20] = {"Strategy","Turn-Based Strategy","Historical","Multiplayer","Singleplayer","Turn-Based","4X","Grand Strategy","Cartoony","War","Simulation","Tactical","Great Soundtrack","Moddable","Open World","Online Co-Op","Cartoon","Co-op","Casual","Memes"};
g.insert_game("Sid Meiers Civilization VI", "Firaxis, Aspyr (Mac, Linux)", "2K, Aspyr (Mac, Linux)", Sid_Meiers_Civilization_VI_tags, 20);
cout << "99 insert" << endl;
//Inserting Titan Quest Anniversary Edition
string Titan_Quest_Anniversary_Edition_tags[17] = {"RPG","Hack and Slash","Action","Multiplayer","Action RPG","Classic","Singleplayer","Loot","Atmospheric","Great Soundtrack","Mythology","Fantasy","Level Editor","Adventure","Co-op","Isometric","Open World"};
g.insert_game("Titan Quest Anniversary Edition", "Iron Lore Entertainment, THQ Nordic", "THQ Nordic", Titan_Quest_Anniversary_Edition_tags, 17);
cout << "100 insert" << endl;
//Inserting Dead by Daylight
string Dead_by_Daylight_tags[20] = {"Horror","Survival Horror","Multiplayer","Co-op","Survival","Stealth","Atmospheric","Gore","Third Person","Action","Blood","First-Person","Online Co-Op","Team-Based","Psychological Horror","Violent","Strategy","Mature","Difficult","Comedy"};
g.insert_game("Dead by Daylight", "Behaviour Digital Inc.", "Starbreeze Studios", Dead_by_Daylight_tags, 20);
cout << "101 insert" << endl;
//Inserting Line of Sight
string Line_of_Sight_tags[20] = {"Free to Play","FPS","Action","Multiplayer","Shooter","Gun Customization","First-Person","Military","Open World","Singleplayer","Character Customization","Zombies","Survival","War","Controller","Strategy","Co-op","Adventure","Competitive","Horror"};
g.insert_game("Line of Sight", "BlackSpot Entertainment", "BlackSpot Entertainment", Line_of_Sight_tags, 20);
cout << "102 insert" << endl;
//Inserting Awesomenauts
string Awesomenauts_tags[20] = {"MOBA","Multiplayer","Platformer","2D","Indie","Action","Local Co-Op","Co-op","Great Soundtrack","Strategy","Controller","Sci-fi","Local Multiplayer","Space","Online Co-Op","Competitive","Cartoon","Side Scroller","Funny","Casual"};
g.insert_game("Awesomenauts", "Ronimo Games", "Ronimo Games", Awesomenauts_tags, 20);
cout << "103 insert" << endl;
//Inserting Codename CURE
string Codename_CURE_tags[20] = {"Early Access","Free to Play","Zombies","Multiplayer","Shooter","Survival","Co-op","FPS","Action","Online Co-Op","First-Person","Horror","Gore","Singleplayer","Open World","Mod","Massively Multiplayer","Adventure","Funny","Third Person"};
g.insert_game("Codename CURE", "Hoobalugalar_X", "Hoobalugalar_X", Codename_CURE_tags, 20);
cout << "104 insert" << endl;
//Inserting World of Tanks Blitz
string World_of_Tanks_Blitz_tags[20] = {"Tanks","Free to Play","Action","Multiplayer","World War II","Massively Multiplayer","War","Strategy","Shooter","PvP","Simulation","Competitive","Online Co-Op","Military","Arcade","Open World","First-Person","FPS","Psychological Horror","Singleplayer"};
g.insert_game("World of Tanks Blitz", "Wargaming Group Limited", "Wargaming Group Limited", World_of_Tanks_Blitz_tags, 20);
cout << "105 insert" << endl;
//Inserting Kerbal Space Program
string Kerbal_Space_Program_tags[20] = {"Space","Simulation","Sandbox","Physics","Science","Space Sim","Building","Indie","Moddable","Education","Singleplayer","Open World","Exploration","Funny","Sci-fi","Adventure","Strategy","Difficult","Replay Value","Comedy"};
g.insert_game("Kerbal Space Program", "Squad", "Squad", Kerbal_Space_Program_tags, 20);
cout << "106 insert" << endl;
//Inserting DOOM
string DOOM_tags[20] = {"FPS","Action","Gore","Demons","Shooter","First-Person","Multiplayer","Great Soundtrack","Singleplayer","Fast-Paced","Sci-fi","Classic","Horror","Atmospheric","Difficult","Remake","Zombies","Co-op","Blood","Memes"};
g.insert_game("DOOM", "id Software", "Bethesda Softworks", DOOM_tags, 20);
cout << "107 insert" << endl;
//Inserting This War of Mine
string This_War_of_Mine_tags[20] = {"Survival","War","Atmospheric","Singleplayer","Strategy","Simulation","Crafting","Choices Matter","Indie","Adventure","Stealth","2D","Post-apocalyptic","Side Scroller","Difficult","Point & Click","Open World","2.5D","Platformer","Rogue-like"};
g.insert_game("This War of Mine", "11 bit studios", "11 bit studios", This_War_of_Mine_tags, 20);
cout << "108 insert" << endl;
//Inserting SNOW
string SNOW_tags[20] = {"Early Access","Sports","Free to Play","Multiplayer","Open World","Simulation","Indie","VR","Realistic","First-Person","Singleplayer","Adventure","Action","Controller","Exploration","Funny","Third Person","Massively Multiplayer","Memes","Casual"};
g.insert_game("SNOW", "Poppermost Productions", "Poppermost Productions", SNOW_tags, 20);
cout << "109 insert" << endl;
//Inserting Alan Wake
string Alan_Wake_tags[20] = {"Action","Horror","Adventure","Third Person","Story Rich","Atmospheric","Singleplayer","Psychological Horror","Thriller","Great Soundtrack","Episodic","Mystery","Third-Person Shooter","Dark","Survival Horror","Supernatural","Cinematic","Narration","Shooter","Survival"};
g.insert_game("Alan Wake", "Remedy Entertainment", "Remedy Entertainment", Alan_Wake_tags, 20);
cout << "110 insert" << endl;
//Inserting Banished
string Banished_tags[20] = {"City Builder","Strategy","Simulation","Survival","Indie","Singleplayer","Sandbox","Medieval","Relaxing","Resource Management","Economy","Difficult","Open World","Building","Procedural Generation","Management","Historical","Atmospheric","RTS","Casual"};
g.insert_game("Banished", "Shining Rock Software LLC", "Shining Rock Software LLC", Banished_tags, 20);
cout << "111 insert" << endl;
//Inserting SPORE
string SPORE_tags[20] = {"Simulation","Sandbox","Open World","Space","Exploration","Adventure","God Game","Singleplayer","Aliens","Strategy","Sci-fi","Funny","Science","Family Friendly","Action","RPG","Multiplayer","Casual","Comedy","RTS"};
g.insert_game("SPORE", "Maxis™", "Electronic Arts", SPORE_tags, 20);
cout << "112 insert" << endl;
//Inserting Riders of Icarus
string Riders_of_Icarus_tags[20] = {"Free to Play","MMORPG","RPG","Massively Multiplayer","Dragons","Adventure","Open World","Fantasy","Multiplayer","Action","Character Customization","Fighting","PvP","Action RPG","Co-op","FPS","First-Person","Anime","Singleplayer","Survival"};
g.insert_game("Riders of Icarus", "WeMade", "Nexon America", Riders_of_Icarus_tags, 20);
cout << "113 insert" << endl;
//Inserting Mass Effect
string Mass_Effect_tags[20] = {"RPG","Sci-fi","Story Rich","Action","Third-Person Shooter","Singleplayer","Space","Great Soundtrack","Third Person","Female Protagonist","Shooter","Choices Matter","Adventure","Open World","Real-Time with Pause","Atmospheric","Character Customization","Romance","Action RPG","Dark Fantasy"};
g.insert_game("Mass Effect", "BioWare", "Electronic Arts", Mass_Effect_tags, 20);
cout << "114 insert" << endl;
//Inserting Mark of the Ninja
string Mark_of_the_Ninja_tags[20] = {"Stealth","Platformer","Ninja","Indie","2D","Action","Singleplayer","Side Scroller","Adventure","Atmospheric","Assassin","Controller","Replay Value","Cartoon","Puzzle","Short","Dark","Strategy","Story Rich","Casual"};
g.insert_game("Mark of the Ninja", "Klei Entertainment", "Microsoft Studios", Mark_of_the_Ninja_tags, 20);
cout << "115 insert" << endl;
//Inserting DCS World
string DCS_World_tags[20] = {"Simulation","Free to Play","Flight","Military","Multiplayer","Realistic","War","Open World","TrackIR","Action","Shooter","Co-op","Singleplayer","Tanks","Sandbox","FPS","First-Person","Massively Multiplayer","Strategy","VR"};
g.insert_game("DCS World", "Eagle Dynamics", "The Fighter Collection", DCS_World_tags, 20);
cout << "116 insert" << endl;
//Inserting Jet Set Radio
string Jet_Set_Radio_tags[20] = {"Great Soundtrack","Classic","Action","Platformer","3D Platformer","Singleplayer","Colorful","Arcade","Stylized","Music","Third Person","Atmospheric","Sports","Controller","Parkour","Anime","Retro","Open World","Cult Classic","Female Protagonist"};
g.insert_game("Jet Set Radio", "Blit Software", "Sega", Jet_Set_Radio_tags, 20);
cout << "117 insert" << endl;
//Inserting Trine Enchanted Edition
string Trine_Enchanted_Edition_tags[20] = {"Platformer","Fantasy","Puzzle","Indie","Action","Local Co-Op","Co-op","Adventure","Puzzle-Platformer","Great Soundtrack","Singleplayer","Online Co-Op","Physics","Multiplayer","Female Protagonist","Casual","Atmospheric","3D Vision","2D","Local Multiplayer"};
g.insert_game("Trine Enchanted Edition", "Frozenbyte", "Frozenbyte", Trine_Enchanted_Edition_tags, 20);
cout << "118 insert" << endl;
//Inserting Outlast
string Outlast_tags[20] = {"Horror","Atmospheric","First-Person","Survival Horror","Survival","Gore","Adventure","Action","Singleplayer","Indie","Psychological Horror","Dark","Stealth","Nudity","Parkour","Difficult","3D Vision","Walking Simulator","Sci-fi","FPS"};
g.insert_game("Outlast", "Red Barrels", "Red Barrels", Outlast_tags, 20);
cout << "119 insert" << endl;
//Inserting Last Man Standing
string Last_Man_Standing_tags[20] = {"Free to Play","Survival","Multiplayer","Action","Open World","Shooter","Massively Multiplayer","First-Person","PvP","Adventure","Third-Person Shooter","FPS","Violent","Strategy","Co-op","Indie","Third Person","Singleplayer","Zombies","Funny"};
g.insert_game("Last Man Standing", "Free Reign Entertainment, Free Reign Entertainment", "Free Reign Entertainment", Last_Man_Standing_tags, 20);
cout << "120 insert" << endl;
//Inserting DARK SOULS III
string DARK_SOULS_III_tags[20] = {"Dark Fantasy","Difficult","Atmospheric","RPG","Lore-Rich","Third Person","Exploration","Story Rich","PvP","Co-op","Action RPG","Adventure","Open World","Action","Great Soundtrack","Multiplayer","Singleplayer","Character Customization","Horror","Replay Value"};
g.insert_game("DARK SOULS III", "FromSoftware, Inc.", "FromSoftware, Inc., BANDAI NAMCO Entertainment", DARK_SOULS_III_tags, 20);
cout << "121 insert" << endl;
//Inserting Emily is Away
string Emily_is_Away_tags[20] = {"Free to Play","Story Rich","Singleplayer","Indie","Simulation","Choices Matter","Interactive Fiction","Casual","Retro","Choose Your Own Adventure","Visual Novel","Dating Sim","Pixel Graphics","Adventure","Romance","Short","2D","Funny","Illuminati","Text-Based"};
g.insert_game("Emily is Away", "Kyle Seeley", "Kyle Seeley", Emily_is_Away_tags, 20);
cout << "122 insert" << endl;
//Inserting Scribblenauts Unlimited
string Scribblenauts_Unlimited_tags[20] = {"Puzzle","Casual","Adventure","Sandbox","Family Friendly","Singleplayer","2D","Funny","Comedy","Open World","Strategy","Education","Cute","Fantasy","Moddable","Platformer","Multiplayer","Action","Replay Value","Indie"};
g.insert_game("Scribblenauts Unlimited", "5th Cell Media", "Warner Bros. Interactive Entertainment", Scribblenauts_Unlimited_tags, 20);
cout << "123 insert" << endl;
//Inserting Grand Theft Auto III
string Grand_Theft_Auto_III_tags[20] = {"Open World","Action","Classic","Third Person","Singleplayer","Sandbox","Crime","Driving","Shooter","Adventure","Third-Person Shooter","Atmospheric","Great Soundtrack","Violent","Silent Protagonist","Story Rich","Mature","Multiplayer","Moddable","Satire"};
g.insert_game("Grand Theft Auto III", "Rockstar Games", "Rockstar Games", Grand_Theft_Auto_III_tags, 20);
cout << "124 insert" << endl;
//Inserting Sleeping Dogs
string Sleeping_Dogs_tags[20] = {"Open World","Action","Martial Arts","Third Person","Crime","Adventure","Fighting","Sandbox","Singleplayer","Story Rich","Great Soundtrack","Driving","RPG","Third-Person Shooter","Parkour","Violent","Shooter","Atmospheric","Multiplayer","Racing"};
g.insert_game("Sleeping Dogs", "United Front Games", "Square Enix", Sleeping_Dogs_tags, 20);
cout << "125 insert" << endl;
//Inserting Guns of Icarus Online
string Guns_of_Icarus_Online_tags[20] = {"Steampunk","Team-Based","Multiplayer","Co-op","Action","Tactical","Indie","Competitive","Simulation","Adventure","Flight","FPS","Strategy","Online Co-Op","PvP","First-Person","Shooter","Class-Based","Kickstarter","Massively Multiplayer"};
g.insert_game("Guns of Icarus Online", "Muse Games", "Muse Games", Guns_of_Icarus_Online_tags, 20);
cout << "126 insert" << endl;
//Inserting Stronghold Kingdoms
string Stronghold_Kingdoms_tags[15] = {"Strategy","Free to Play","Medieval","Massively Multiplayer","Multiplayer","City Builder","Real-Time","Building","RTS","Action","RPG","Singleplayer","Open World","PvP","War"};
g.insert_game("Stronghold Kingdoms", "FireFly Studios", "FireFly Studios", Stronghold_Kingdoms_tags, 15);
cout << "127 insert" << endl;
//Inserting Enclave
string Enclave_tags[15] = {"RPG","Action","Third Person","Fantasy","Hack and Slash","Adventure","Classic","Singleplayer","Multiplayer","First-Person","Action RPG","Female Protagonist","Open World","Magic","Great Soundtrack"};
g.insert_game("Enclave", "Starbreeze", "Topware Interactive", Enclave_tags, 15);
cout << "128 insert" << endl;
//Inserting Strife
string Strife_tags[20] = {"Free to Play","MOBA","Multiplayer","Action","Strategy","RPG","RTS","Massively Multiplayer","Co-op","Fantasy","Online Co-Op","Casual","Adventure","MMORPG","PvP","Open World","Survival","Singleplayer","Zombies","Team-Based"};
g.insert_game("Strife", "S2 Games", "S2 Games", Strife_tags, 20);
cout << "129 insert" << endl;
//Inserting Super MNC
string Super_MNC_tags[20] = {"Free to Play","Action","Multiplayer","MOBA","Shooter","Third-Person Shooter","Strategy","Funny","Indie","Sports","Competitive","Character Customization","Massively Multiplayer","Co-op","Third Person","Comedy","First-Person","Adventure","Class-Based","Singleplayer"};
g.insert_game("Super MNC", "Uber Entertainment", "Uber Entertainment", Super_MNC_tags, 20);
cout << "130 insert" << endl;
//Inserting AirMech
string AirMech_tags[20] = {"Early Access","Free to Play","Strategy","Multiplayer","Mechs","MOBA","Action","RTS","Indie","Online Co-Op","Robots","Sci-fi","Co-op","Massively Multiplayer","Shooter","PvP","Adventure","Singleplayer","Fast-Paced","RPG"};
g.insert_game("AirMech", "Carbon Games", "Carbon Games", AirMech_tags, 20);
cout << "131 insert" << endl;
//Inserting Rise of the Tomb Raider
string Rise_of_the_Tomb_Raider_tags[20] = {"Adventure","Lara Croft","Action","Female Protagonist","Third Person","Exploration","Singleplayer","Action-Adventure","Survival","Open World","Story Rich","Puzzle","Atmospheric","Stealth","Third-Person Shooter","Shooter","Parkour","Great Soundtrack","RPG","Quick-Time Events"};
g.insert_game("Rise of the Tomb Raider", "Crystal Dynamics", "Square Enix", Rise_of_the_Tomb_Raider_tags, 20);
cout << "132 insert" << endl;
//Inserting Risk of Rain
string Risk_of_Rain_tags[20] = {"Rogue-like","Indie","Platformer","Action","Pixel Graphics","Great Soundtrack","Online Co-Op","Difficult","Perma Death","Co-op","2D","Local Co-Op","Rogue-lite","Multiplayer","RPG","Singleplayer","Replay Value","Survival","Sci-fi","Side Scroller"};
g.insert_game("Risk of Rain", "Hopoo Games, LLC", "Chucklefish", Risk_of_Rain_tags, 20);
cout << "133 insert" << endl;
//Inserting Thief
string Thief_tags[20] = {"Stealth","Action","Adventure","First-Person","Singleplayer","Dark","Steampunk","Atmospheric","Horror","Parkour","Assassin","Open World","Heist","RPG","Medieval","FPS","Nudity","Fantasy","Strategy","3D Vision"};
g.insert_game("Thief", "Eidos-Montréal, Feral Interactive (Mac)", "Square Enix, Feral Interactive (Mac)", Thief_tags, 20);
cout << "134 insert" << endl;
//Inserting FEZ
string FEZ_tags[20] = {"Platformer","Indie","Puzzle","Exploration","Pixel Graphics","Great Soundtrack","Singleplayer","Adventure","Casual","Mystery","2D","Puzzle-Platformer","Relaxing","Atmospheric","Cute","Retro","2.5D","Controller","Metroidvania","Action"};
g.insert_game("FEZ", "Polytron Corporation", "Trapdoor", FEZ_tags, 20);
cout << "135 insert" << endl;
//Inserting AudioSurf
string AudioSurf_tags[20] = {"Music","Indie","Rhythm","Casual","Music-Based Procedural Generation","Colorful","Arcade","Singleplayer","Relaxing","Score Attack","Local Co-Op","Procedural Generation","Puzzle","Replay Value","Great Soundtrack","Local Multiplayer","Co-op","Racing","Fast-Paced","Action"};
g.insert_game("AudioSurf", "Dylan Fitterer", "", AudioSurf_tags, 20);
cout << "136 insert" << endl;
//Inserting Subnautica
string Subnautica_tags[20] = {"Early Access","Survival","Open World","Exploration","Underwater","Crafting","First-Person","Adventure","Base-Building","Singleplayer","Sandbox","Sci-fi","Aliens","Atmospheric","Horror","Action","Indie","FPS","Voxel","Multiplayer"};
g.insert_game("Subnautica", "Unknown Worlds Entertainment", "Unknown Worlds Entertainment", Subnautica_tags, 20);
cout << "137 insert" << endl;
//Inserting Crusader Kings II
string Crusader_Kings_II_tags[20] = {"Grand Strategy","Strategy","Medieval","Historical","Simulation","Sandbox","RPG","Multiplayer","Replay Value","Singleplayer","Politics","Diplomacy","Real-Time with Pause","Moddable","Political","Character Customization","Great Soundtrack","RTS","Education","Co-op"};
g.insert_game("Crusader Kings II", "Paradox Development Studio", "Paradox Interactive", Crusader_Kings_II_tags, 20);
cout << "138 insert" << endl;
//Inserting SpeedRunners
string SpeedRunners_tags[20] = {"Multiplayer","Racing","Local Multiplayer","Competitive","Platformer","Indie","Fast-Paced","2D","Action","4 Player Local","Funny","Parkour","Local Co-Op","Sports","Controller","Level Editor","Co-op","Singleplayer","Arcade","Superhero"};
g.insert_game("SpeedRunners", "DoubleDutch Games", "tinyBuild", SpeedRunners_tags, 20);
cout << "139 insert" << endl;
//Inserting How to Survive
string How_to_Survive_tags[20] = {"Zombies","Survival","Crafting","Action","Co-op","RPG","Multiplayer","Online Co-Op","Local Co-Op","Adventure","Hack and Slash","Survival Horror","Open World","Singleplayer","Third Person","Post-apocalyptic","Gore","Comedy","Indie","Funny"};
g.insert_game("How to Survive", "Eko Software", "505 Games", How_to_Survive_tags, 20);
cout << "140 insert" << endl;
//Inserting STAR WARS Republic Commando
string STAR_WARS_Republic_Commando_tags[20] = {"Star Wars","Action","FPS","Tactical","Sci-fi","Singleplayer","Shooter","First-Person","Multiplayer","Classic","Great Soundtrack","Atmospheric","Space","Adventure","Team-Based","Co-op","War","Strategy","Dark","Futuristic"};
g.insert_game("STAR WARS Republic Commando", "LucasArts", "LucasArts, Lucasfilm, Disney Interactive", STAR_WARS_Republic_Commando_tags, 20);
cout << "141 insert" << endl;
//Inserting Torchlight
string Torchlight_tags[18] = {"RPG","Action RPG","Hack and Slash","Dungeon Crawler","Fantasy","Singleplayer","Loot","Indie","Moddable","Action","Adventure","Cartoon","Magic","Female Protagonist","Isometric","Steampunk","Exploration","Co-op"};
g.insert_game("Torchlight", "Runic Games", "Runic Games", Torchlight_tags, 18);
cout << "142 insert" << endl;
//Inserting Mad Max
string Mad_Max_tags[20] = {"Action","Open World","Post-apocalyptic","Driving","Survival","Adventure","Singleplayer","Third Person","Racing","Exploration","Atmospheric","Story Rich","Third-Person Shooter","RPG","Sandbox","Shooter","War","Multiplayer","Sci-fi","First-Person"};
g.insert_game("Mad Max", "Avalanche Studios, Feral Interactive (Mac/Linux)", "Warner Bros. Interactive Entertainment, Feral Interactive (Mac/Linux)", Mad_Max_tags, 20);
cout << "143 insert" << endl;
//Inserting Game Dev Tycoon
string Game_Dev_Tycoon_tags[20] = {"Simulation","Management","Indie","Strategy","Casual","Singleplayer","2D","Economy","Moddable","Replay Value","Funny","Sandbox","GameMaker","Point & Click","Difficult","Great Soundtrack","Touch-Friendly","Comedy","Adventure","Isometric"};
g.insert_game("Game Dev Tycoon", "Greenheart Games", "Greenheart Games", Game_Dev_Tycoon_tags, 20);
cout << "144 insert" << endl;
//Inserting Assassins Creed IV Black Flag
string Assassins_Creed_IV_Black_Flag_tags[20] = {"Pirates","Open World","Action","Adventure","Assassin","Third Person","Stealth","Naval","Parkour","Multiplayer","Historical","Story Rich","Singleplayer","Exploration","Action-Adventure","Atmospheric","RPG","Mature","Sandbox","Action RPG"};
g.insert_game("Assassins Creed IV Black Flag", "Ubisoft Montreal", "Ubisoft", Assassins_Creed_IV_Black_Flag_tags, 20);
cout << "145 insert" << endl;
//Inserting RAGE
string RAGE_tags[20] = {"FPS","Post-apocalyptic","Action","Open World","Shooter","Racing","First-Person","Singleplayer","Atmospheric","Adventure","Co-op","Sci-fi","Multiplayer","RPG","Gore","Horror","Crafting","Linear","Online Co-Op","Survival"};
g.insert_game("RAGE", "id Software", "Bethesda Softworks", RAGE_tags, 20);
cout << "146 insert" << endl;
//Inserting WAKFU
string WAKFU_tags[20] = {"Free to Play","Massively Multiplayer","Turn-Based Strategy","RPG","MMORPG","Turn-Based","Anime","Strategy","Adventure","Tactical","Open World","Multiplayer","Fantasy","Isometric","Sandbox","2D","Co-op","Cartoon","Indie","Casual"};
g.insert_game("WAKFU", "Ankama Studio", "Ankama Games", WAKFU_tags, 20);
cout << "147 insert" << endl;
//Inserting Moonbase Alpha
string Moonbase_Alpha_tags[20] = {"Simulation","Space","Free to Play","Multiplayer","Online Co-Op","Strategy","Adventure","Funny","Open World","Walking Simulator","Co-op","Sandbox","Realistic","Memes","Third Person","Massively Multiplayer","Comedy","Puzzle","Singleplayer","First-Person"};
g.insert_game("Moonbase Alpha", "Virtual Heroes, Army Game Studio", "NASA", Moonbase_Alpha_tags, 20);
cout << "148 insert" << endl;
//Inserting Deus Ex  Game of the Year Edition
string Deus_Ex_Game_of_the_Year_Edition_tags[20] = {"Cyberpunk","RPG","Stealth","Classic","FPS","Sci-fi","Action","Cult Classic","Singleplayer","Dystopian ","Inventory Management","Story Rich","Great Soundtrack","Moddable","First-Person","Atmospheric","Conspiracy","Action RPG","Shooter","Adventure"};
g.insert_game("Deus Ex  Game of the Year Edition", "Ion Storm", "Square Enix", Deus_Ex_Game_of_the_Year_Edition_tags, 20);
cout << "149 insert" << endl;
//Inserting Rogue Legacy
string Rogue_Legacy_tags[20] = {"Rogue-like","Platformer","Indie","Action","Singleplayer","2D","Metroidvania","RPG","Rogue-lite","Pixel Graphics","Side Scroller","Controller","Fantasy","Exploration","Medieval","Difficult","Adventure","Replay Value","Procedural Generation","Perma Death"};
g.insert_game("Rogue Legacy", "Cellar Door Games", "Cellar Door Games", Rogue_Legacy_tags, 20);
cout << "150 insert" << endl;
//Inserting Sakura Clicker
string Sakura_Clicker_tags[17] = {"Anime","Free to Play","Nudity","Mature","Clicker","Female Protagonist","Singleplayer","Casual","Sexual Content","Indie","Fantasy","Funny","Memes","2D","Adventure","RPG","Multiplayer"};
g.insert_game("Sakura Clicker", "Winged Cloud", "Winged Cloud", Sakura_Clicker_tags, 17);
cout << "151 insert" << endl;
//Inserting ArcheAge
string ArcheAge_tags[20] = {"Massively Multiplayer","Free to Play","MMORPG","RPG","Open World","Sandbox","Fantasy","Adventure","PvP","Multiplayer","PvE","Action","Pirates","Exploration","Crafting","Walking Simulator","Nudity","Third Person","Gambling","Co-op"};
g.insert_game("ArcheAge", "XLGAMES", "Trion Worlds", ArcheAge_tags, 20);
cout << "152 insert" << endl;
//Inserting Everlasting Summer
string Everlasting_Summer_tags[20] = {"Visual Novel","Story Rich","Free to Play","Anime","Great Soundtrack","Choices Matter","Singleplayer","Mature","Romance","Multiple Endings","Nudity","Replay Value","Adventure","Dating Sim","2D","Mystery","Indie","Comedy","Classic","Casual"};
g.insert_game("Everlasting Summer", "Soviet Games", "Soviet Games", Everlasting_Summer_tags, 20);
cout << "153 insert" << endl;
//Inserting Brutal Legend
string Brutal_Legend_tags[20] = {"Action","Comedy","Adventure","Open World","Great Soundtrack","Music","Strategy","Third Person","Hack and Slash","RTS","Funny","Fantasy","Singleplayer","Multiplayer","Atmospheric","Gothic","Action-Adventure","Beat 'em up","Action RPG","RPG"};
g.insert_game("Brutal Legend", "Double Fine Productions", "Double Fine Productions", Brutal_Legend_tags, 20);
cout << "154 insert" << endl;
//Inserting Source Filmmaker
string Source_Filmmaker_tags[19] = {"Animation & Modeling","Video Production","Free to Play","Software","Movie","Sandbox","Difficult","Action","Funny","Comedy","Singleplayer","Moddable","Multiplayer","Anime","Horror","First-Person","Crafting","Character Customization","Great Soundtrack"};
g.insert_game("Source Filmmaker", "Valve", "Valve", Source_Filmmaker_tags, 19);
cout << "155 insert" << endl;
//Inserting Darkest Dungeon
string Darkest_Dungeon_tags[20] = {"Turn-Based Combat","Dark Fantasy","RPG","Dungeon Crawler","Rogue-like","Lovecraftian","Difficult","Turn-Based","Perma Death","Atmospheric","Singleplayer","Indie","Strategy","Dark","2D","Horror","Fantasy","Rogue-lite","Gothic","Kickstarter"};
g.insert_game("Darkest Dungeon", "Red Hook Studios", "Red Hook Studios", Darkest_Dungeon_tags, 20);
cout << "156 insert" << endl;
//Inserting To the Moon
string To_the_Moon_tags[20] = {"Story Rich","Indie","Great Soundtrack","Adventure","RPGMaker","Interactive Fiction","Singleplayer","Pixel Graphics","RPG","Short","Romance","Funny","2D","Retro","Psychological","Linear","Casual","Female Protagonist","Cute","Walking Simulator"};
g.insert_game("To the Moon", "Freebird Games", "Freebird Games", To_the_Moon_tags, 20);
cout << "157 insert" << endl;
//Inserting Braid
string Braid_tags[20] = {"Puzzle","Platformer","Indie","Time Manipulation","2D","Singleplayer","Puzzle-Platformer","Great Soundtrack","Difficult","Time Travel","Casual","Strategy","Classic","Atmospheric","Story Rich","Adventure","Side Scroller","Action","Controller","Fantasy"};
g.insert_game("Braid", "Number None", "Number None", Braid_tags, 20);
cout << "158 insert" << endl;
//Inserting Planetary Annihilation
string Planetary_Annihilation_tags[20] = {"Strategy","RTS","Space","Multiplayer","Sci-fi","Robots","Futuristic","Grand Strategy","Kickstarter","Real-Time","Indie","Tactical","Crowdfunded","Singleplayer","Stylized","Co-op","Action","Sandbox","Great Soundtrack","Adventure"};
g.insert_game("Planetary Annihilation", "Uber Entertainment", "Uber Entertainment", Planetary_Annihilation_tags, 20);
cout << "159 insert" << endl;
//Inserting Dragons and Titans
string Dragons_and_Titans_tags[20] = {"Free to Play","Dragons","MOBA","Multiplayer","RPG","Action","Adventure","Singleplayer","Indie","Massively Multiplayer","Co-op","Fantasy","PvP","Strategy","Survival","Open World","MMORPG","FPS","Sandbox","Atmospheric"};
g.insert_game("Dragons and Titans", "Wyrmbyte", "Versus Evil	", Dragons_and_Titans_tags, 20);
cout << "160 insert" << endl;
//Inserting Europa Universalis IV
string Europa_Universalis_IV_tags[20] = {"Grand Strategy","Strategy","Historical","Simulation","Real-Time with Pause","Sandbox","Military","Multiplayer","Replay Value","Singleplayer","Diplomacy","Education","Political","Moddable","Open World","RTS","Great Soundtrack","Medieval","Co-op","4X"};
g.insert_game("Europa Universalis IV", "Paradox Development Studio", "Paradox Interactive", Europa_Universalis_IV_tags, 20);
cout << "161 insert" << endl;
//Inserting The Way of Life Free Edition
string The_Way_of_Life_Free_Edition_tags[20] = {"Free to Play","Walking Simulator","Indie","First-Person","Singleplayer","Adventure","Short","Simulation","Multiplayer","Atmospheric","Open World","Survival","Great Soundtrack","Story Rich","Action","Family Friendly","Funny","Illuminati","Strategy","VR"};
g.insert_game("The Way of Life Free Edition", "Fabio Ferrara, Davide Caio, Nicolò Azzolini, Antonio Carcagnì, Luigi Di Guida, Tommaso Vita", "CyberCoconut, Hexagon Hive", The_Way_of_Life_Free_Edition_tags, 20);
cout << "162 insert" << endl;
//Inserting Tabletop Simulator
string Tabletop_Simulator_tags[20] = {"Simulation","Board Game","Multiplayer","Sandbox","Physics","Casual","Indie","Strategy","Card Game","RPG","Chess","Moddable","Singleplayer","Co-op","Comedy","Online Co-Op","VR","Relaxing","Adventure","Local Multiplayer"};
g.insert_game("Tabletop Simulator", "Berserk Games", "Berserk Games", Tabletop_Simulator_tags, 20);
cout << "163 insert" << endl;
//Inserting Transistor
string Transistor_tags[20] = {"Great Soundtrack","Female Protagonist","Indie","Cyberpunk","Sci-fi","Story Rich","Action RPG","RPG","Singleplayer","Isometric","Atmospheric","Action","Narration","Adventure","Strategy","Tactical","Turn-Based","Hack and Slash","Short","2D"};
g.insert_game("Transistor", "Supergiant Games", "Supergiant Games", Transistor_tags, 20);
cout << "164 insert" << endl;
//Inserting Sanctum
string Sanctum_tags[18] = {"Tower Defense","Strategy","FPS","Action","Co-op","Indie","Sci-fi","First-Person","Multiplayer","Online Co-Op","Female Protagonist","Shooter","Casual","Singleplayer","Great Soundtrack","Adventure","Futuristic","Tactical"};
g.insert_game("Sanctum", "Coffee Stain Studios", "Coffee Stain Studios", Sanctum_tags, 18);
cout << "165 insert" << endl;
//Inserting School of Dragons
string School_of_Dragons_tags[20] = {"Free to Play","Dragons","Adventure","Multiplayer","Massively Multiplayer","RPG","Open World","MMORPG","Family Friendly","Fantasy","Action","Online Co-Op","Singleplayer","Simulation","First-Person","Co-op","Survival","PvP","Funny","Atmospheric"};
g.insert_game("School of Dragons", "JumpStart Games, Inc.", "JumpStart Games, Inc.", School_of_Dragons_tags, 20);
cout << "166 insert" << endl;
//Inserting Tom Clancys The Division
string Tom_Clancys_The_Division_tags[20] = {"Open World","Third-Person Shooter","Multiplayer","Action","Co-op","Shooter","RPG","Post-apocalyptic","Online Co-Op","Survival","Tactical","Massively Multiplayer","Third Person","MMORPG","Adventure","Atmospheric","Singleplayer","Stealth","Sandbox","FPS"};
g.insert_game("Tom Clancys The Division", "Massive Entertainment", "Ubisoft", Tom_Clancys_The_Division_tags, 20);
cout << "167 insert" << endl;
//Inserting Only If
string Only_If_tags[20] = {"Free to Play","Adventure","First-Person","Horror","Puzzle","Indie","Singleplayer","Walking Simulator","Survival","Multiplayer","Surreal","Atmospheric","Comedy","Action","FPS","Open World","Casual","Simulation","Co-op","Funny"};
g.insert_game("Only If", "Creability", "Creability", Only_If_tags, 20);
cout << "168 insert" << endl;
//Inserting Guns and Robots
string Guns_and_Robots_tags[20] = {"Free to Play","Action","Robots","Multiplayer","Shooter","Third-Person Shooter","Massively Multiplayer","Sandbox","Indie","FPS","Open World","RPG","Co-op","Building","First-Person","Strategy","Survival","Adventure","Singleplayer","Casual"};
g.insert_game("Guns and Robots", "Masthead Studios Ltd", "Masthead Studios Ltd, Thegamewallstudios, Gamigo AG", Guns_and_Robots_tags, 20);
cout << "169 insert" << endl;
//Inserting Broforce
string Broforce_tags[20] = {"America","Action","Pixel Graphics","Co-op","2D","Platformer","Indie","Local Co-Op","Multiplayer","Side Scroller","Retro","Shooter","Funny","Gore","Comedy","Local Multiplayer","Adventure","Arcade","Casual","Simulation"};
g.insert_game("Broforce", "Free Lives", "Devolver Digital", Broforce_tags, 20);
cout << "170 insert" << endl;
//Inserting Elsword
string Elsword_tags[20] = {"Free to Play","Anime","RPG","Action","Adventure","Massively Multiplayer","MMORPG","Fighting","Multiplayer","Side Scroller","PvP","Online Co-Op","Cute","Hack and Slash","Fantasy","2D","Casual","Co-op","Beat 'em up","Platformer"};
g.insert_game("Elsword", "KOG", "KOG Games", Elsword_tags, 20);
cout << "171 insert" << endl;
//Inserting Panzar
string Panzar_tags[20] = {"Free to Play","Action","Multiplayer","Massively Multiplayer","PvP","RPG","Fantasy","MOBA","Third Person","Co-op","Gore","PvE","MMORPG","Open World","Survival","Adventure","Crafting","Nudity","Horror","Action RPG"};
g.insert_game("Panzar", "Panzar Studio", "OVALIS INVESTMENTS LIMITED", Panzar_tags, 20);
cout << "172 insert" << endl;
//Inserting The Darkness II
string The_Darkness_II_tags[20] = {"FPS","Action","Gore","Shooter","Singleplayer","Co-op","Dark","Horror","First-Person","Atmospheric","Multiplayer","Short","Story Rich","Violent","Multiple Endings","Comic Book","Supernatural","Adventure","Nudity","Funny"};
g.insert_game("The Darkness II", "Digital Extremes", "2K Games", The_Darkness_II_tags, 20);
cout << "173 insert" << endl;
//Inserting FINAL FANTASY VII
string FINAL_FANTASY_VII_tags[20] = {"JRPG","RPG","Classic","Singleplayer","Turn-Based","Story Rich","Great Soundtrack","Fantasy","Retro","Adventure","Sci-fi","Open World","Atmospheric","Cyberpunk","Exploration","Party-Based RPG","Dystopian ","Strategy","1990's","Turn-Based Strategy"};
g.insert_game("FINAL FANTASY VII", "Square Enix", "Square Enix", FINAL_FANTASY_VII_tags, 20);
cout << "174 insert" << endl;
//Inserting World of Goo
string World_of_Goo_tags[20] = {"Puzzle","Indie","Physics","Singleplayer","Great Soundtrack","Casual","2D","Comedy","Cute","Building","Satire","Atmospheric","Funny","Touch-Friendly","Classic","Strategy","Surreal","Difficult","Story Rich","Family Friendly"};
g.insert_game("World of Goo", "2D BOY", "2D BOY ", World_of_Goo_tags, 20);
cout << "175 insert" << endl;
//Inserting NEOTOKYO
string NEOTOKYO_tags[20] = {"Free to Play","Multiplayer","FPS","Cyberpunk","Shooter","Action","Anime","Great Soundtrack","Mod","Tactical","Sci-fi","First-Person","Team-Based","Futuristic","Co-op","Singleplayer","Realistic","Indie","Adventure","Zombies"};
g.insert_game("NEOTOKYO", "STUDIO RADI-8", "NEOTOKYO [MOD]", NEOTOKYO_tags, 20);
cout << "176 insert" << endl;
//Inserting Contagion
string Contagion_tags[20] = {"Zombies","Survival","Action","Co-op","Horror","FPS","Multiplayer","Online Co-Op","Indie","First-Person","Shooter","Adventure","Open World","Survival Horror","PvP","Atmospheric","Gore","Singleplayer","Competitive","Local Co-Op"};
g.insert_game("Contagion", "Monochrome, Inc", "Monochrome, Inc", Contagion_tags, 20);
cout << "177 insert" << endl;
//Inserting Pixel Puzzles Ultimate
string Pixel_Puzzles_Ultimate_tags[5] = {"Free to Play","Casual","Puzzle","Indie","Simulation"};
g.insert_game("Pixel Puzzles Ultimate", "Decaying Logic", "KISS ltd", Pixel_Puzzles_Ultimate_tags, 5);
cout << "178 insert" << endl;
//Inserting Endless Legend
string Endless_Legend_tags[20] = {"Strategy","4X","Turn-Based","Fantasy","Turn-Based Strategy","Hex Grid","Multiplayer","Singleplayer","Indie","RPG","Great Soundtrack","Sci-fi","Adventure","Medieval","Tactical","Grand Strategy","Exploration","Open World","Sandbox","Atmospheric"};
g.insert_game("Endless Legend", "AMPLITUDE Studios", "SEGA", Endless_Legend_tags, 20);
cout << "179 insert" << endl;
//Inserting DARK SOULS II
string DARK_SOULS_II_tags[20] = {"RPG","Dark Fantasy","Difficult","Action RPG","Action","Adventure","Exploration","Atmospheric","Co-op","Multiplayer","Fantasy","PvP","Third Person","Replay Value","Open World","Medieval","Dark","Online Co-Op","Singleplayer","Horror"};
g.insert_game("DARK SOULS II", "FromSoftware, Inc", "BANDAI NAMCO Entertainment, FromSoftware, Inc", DARK_SOULS_II_tags, 20);
cout << "180 insert" << endl;
//Inserting Hero Siege
string Hero_Siege_tags[20] = {"RPG","Rogue-like","Indie","Action","Hack and Slash","Adventure","Local Co-Op","Pixel Graphics","Multiplayer","Co-op","2D","Top-Down","Controller","Rogue-lite","Twin Stick Shooter","Action RPG","Difficult","Massively Multiplayer","Singleplayer","Bullet Hell"};
g.insert_game("Hero Siege", "Elias Viglione, Jussi Kukkonen", "Panic Art Studios", Hero_Siege_tags, 20);
cout << "181 insert" << endl;
//Inserting Worms Revolution
string Worms_Revolution_tags[20] = {"Strategy","Multiplayer","Funny","Turn-Based Strategy","Turn-Based","Comedy","Local Co-Op","Local Multiplayer","Physics","Singleplayer","2.5D","Tactical","Action","Co-op","Family Friendly","Team-Based","Classic","Side Scroller","4 Player Local","2D"};
g.insert_game("Worms Revolution", "Team17 Digital Ltd", "Team17 Digital Ltd", Worms_Revolution_tags, 20);
cout << "182 insert" << endl;
//Inserting MechWarrior Online
string MechWarrior_Online_tags[20] = {"Free to Play","Mechs","Action","Multiplayer","Shooter","Robots","Simulation","Sci-fi","FPS","Strategy","Massively Multiplayer","Tactical","PvP","First-Person","War","Walking Simulator","Survival","Team-Based","Singleplayer","Open World"};
g.insert_game("MechWarrior Online", "Piranha Games Inc.", "Piranha Games Inc.", MechWarrior_Online_tags, 20);
cout << "183 insert" << endl;
//Inserting Stronghold HD
string Stronghold_HD_tags[16] = {"Strategy","Medieval","RTS","Classic","Base-Building","Simulation","Economy","City Builder","Multiplayer","Resource Management","Singleplayer","Historical","Great Soundtrack","Atmospheric","2D","Isometric"};
g.insert_game("Stronghold HD", "FireFly Studios", "FireFly Studios", Stronghold_HD_tags, 16);
cout << "184 insert" << endl;
//Inserting Golf With Your Friends
string Golf_With_Your_Friends_tags[20] = {"Early Access","Mini Golf","Multiplayer","Golf","Sports","Casual","Family Friendly","Indie","Funny","Co-op","Singleplayer","Great Soundtrack","Simulation","Strategy","Physics","Difficult","Action","Memes","Illuminati","Massively Multiplayer"};
g.insert_game("Golf With Your Friends", "Blacklight Interactive®", "Blacklight Interactive®", Golf_With_Your_Friends_tags, 20);
cout << "185 insert" << endl;
//Inserting Red Faction Guerrilla Steam Edition
string Red_Faction_Guerrilla_Steam_Edition_tags[18] = {"Open World","Action","Destruction","Physics","Sci-fi","Third Person","Mars","Third-Person Shooter","Multiplayer","Singleplayer","Sandbox","Shooter","Adventure","Atmospheric","Co-op","Great Soundtrack","Controller","FPS"};
g.insert_game("Red Faction Guerrilla Steam Edition", "Volition, Reactor Zero, THQ Nordic", "THQ Nordic", Red_Faction_Guerrilla_Steam_Edition_tags, 18);
cout << "186 insert" << endl;
//Inserting Dungeonland
string Dungeonland_tags[20] = {"Free to Play","Action","Online Co-Op","Casual","Local Co-Op","Co-op","Hack and Slash","Multiplayer","Local Multiplayer","Funny","Fantasy","Adventure","Controller","Singleplayer","Indie","Comedy","Third Person","Action RPG","Strategy","Open World"};
g.insert_game("Dungeonland", "Critical Studio", "Paradox Interactive", Dungeonland_tags, 20);
cout << "187 insert" << endl;
//Inserting Mortal Kombat Komplete Edition
string Mortal_Kombat_Komplete_Edition_tags[20] = {"Fighting","Gore","Action","Multiplayer","Violent","Classic","Co-op","Arcade","Blood","Singleplayer","Local Co-Op","Competitive","Local Multiplayer","2D Fighter","Replay Value","2.5D","Remake","Beat 'em up","2D","Family Friendly"};
g.insert_game("Mortal Kombat Komplete Edition", "NetherRealm Studios, High Voltage Software", "Warner Bros. Interactive Entertainment", Mortal_Kombat_Komplete_Edition_tags, 20);
cout << "188 insert" << endl;
//Inserting Poker Night at the Inventory
string Poker_Night_at_the_Inventory_tags[18] = {"Card Game","Casual","Comedy","Singleplayer","Funny","Strategy","Sports","Gambling","Simulation","Conversation","Touch-Friendly","Multiplayer","Indie","First-Person","Point & Click","Memes","Action","Free to Play"};
g.insert_game("Poker Night at the Inventory", "Telltale Games", "", Poker_Night_at_the_Inventory_tags, 18);
cout << "189 insert" << endl;
//Inserting Duke Nukem Forever
string Duke_Nukem_Forever_tags[20] = {"FPS","Action","Nudity","Shooter","Aliens","Singleplayer","Comedy","Sci-fi","Multiplayer","First-Person","Mature","Funny","Gore","Dark Humor","Classic","Adventure","Linear","Memes","Atmospheric","3D Vision"};
g.insert_game("Duke Nukem Forever", "Gearbox Software", "2K Games", Duke_Nukem_Forever_tags, 20);
cout << "190 insert" << endl;
//Inserting Knights and Merchants
string Knights_and_Merchants_tags[10] = {"Strategy","Medieval","City Builder","Simulation","RTS","Classic","Multiplayer","Singleplayer","Historical","Great Soundtrack"};
g.insert_game("Knights and Merchants", "Topware Interactive", "Topware Interactive", Knights_and_Merchants_tags, 10);
cout << "191 insert" << endl;
//Inserting Iron Snout
string Iron_Snout_tags[20] = {"Free to Play","Action","Fighting","Indie","Funny","Multiplayer","Gore","2D","2D Fighter","Survival","Cartoon","Fast-Paced","Beat 'em up","Singleplayer","Arcade","Violent","Cute","Blood","Casual","Difficult"};
g.insert_game("Iron Snout", "SnoutUp", "SnoutUp", Iron_Snout_tags, 20);
cout << "192 insert" << endl;
//Inserting No Time To Explain Remastered
string No_Time_To_Explain_Remastered_tags[18] = {"Indie","Casual","Action","Adventure","Platformer","Comedy","Funny","2D","Multiplayer","Difficult","Great Soundtrack","Local Co-Op","Singleplayer","Local Multiplayer","Time Travel","Remake","Memes","Gore"};
g.insert_game("No Time To Explain Remastered", "tinyBuild", "tinyBuild", No_Time_To_Explain_Remastered_tags, 18);
cout << "193 insert" << endl;
//Inserting Vindictus
string Vindictus_tags[18] = {"Free to Play","Action","Massively Multiplayer","Hack and Slash","RPG","MMORPG","Adventure","Third Person","Co-op","Character Customization","Action RPG","PvP","Multiplayer","Fast-Paced","Nudity","Fantasy","Horror","Singleplayer"};
g.insert_game("Vindictus", "Nexon", "Nexon America Inc.", Vindictus_tags, 18);
cout << "194 insert" << endl;
//Inserting Train Simulator
string Train_Simulator_tags[20] = {"Simulation","Trains","Singleplayer","Driving","Realistic","Casual","Relaxing","Open World","Building","Moddable","Sandbox","TrackIR","Atmospheric","Level Editor","Fishing","Action","City Builder","Strategy","VR","Massively Multiplayer"};
g.insert_game("Train Simulator", "Dovetail Games", "Dovetail Games - Trains", Train_Simulator_tags, 20);
cout << "195 insert" << endl;
//Inserting Super Hexagon
string Super_Hexagon_tags[19] = {"Difficult","Indie","Great Soundtrack","Fast-Paced","Arcade","Rhythm","Singleplayer","Action","Score Attack","Minimalist","Music","2D","Psychedelic","Casual","Colorful","Replay Value","Controller","Puzzle","Bullet Hell"};
g.insert_game("Super Hexagon", "Terry Cavanagh", "Terry Cavanagh", Super_Hexagon_tags, 19);
cout << "196 insert" << endl;
//Inserting Antichamber
string Antichamber_tags[20] = {"Puzzle","First-Person","Indie","Surreal","Exploration","Singleplayer","Abstract","Adventure","Nonlinear","Atmospheric","Difficult","Minimalist","Psychedelic","Psychological","Colorful","Great Soundtrack","Metroidvania","Platformer","Sci-fi","Replay Value"};
g.insert_game("Antichamber", "Alexander Bruce", "Demruth", Antichamber_tags, 20);
cout << "197 insert" << endl;
//Inserting Bloons TD Battles
string Bloons_TD_Battles_tags[14] = {"Free to Play","Tower Defense","Strategy","Multiplayer","Action","Competitive","Co-op","Casual","Funny","PvP","Massively Multiplayer","2D","Singleplayer","Family Friendly"};
g.insert_game("Bloons TD Battles", "Ninja Kiwi", "Ninja Kiwi", Bloons_TD_Battles_tags, 14);
cout << "198 insert" << endl;
//Inserting Assassins Creed III
string Assassins_Creed_III_tags[20] = {"Adventure","Action","Open World","Assassin","Parkour","Stealth","Third Person","Historical","Multiplayer","America","Singleplayer","Story Rich","Atmospheric","Hunting","Action-Adventure","Sandbox","Alternate History","Conspiracy","Controller","Casual"};
g.insert_game("Assassins Creed III", "Ubisoft Montreal", "Ubisoft", Assassins_Creed_III_tags, 20);
cout << "199 insert" << endl;
//Inserting VVVVVV
string VVVVVV_tags[20] = {"Platformer","Indie","Great Soundtrack","Difficult","Retro","2D","Singleplayer","Pixel Graphics","Exploration","Action","Sci-fi","Adventure","Metroidvania","Short","Puzzle","Open World","Minimalist","Space","Classic","Casual"};
g.insert_game("VVVVVV", "Terry Cavanagh", "Terry Cavanagh", VVVVVV_tags, 20);
cout << "200 insert" << endl;
//Inserting SpaceChem
string SpaceChem_tags[16] = {"Puzzle","Difficult","Programming","Indie","Singleplayer","Great Soundtrack","Sci-fi","Science","Casual","Illuminati","2D","Simulation","Space","Strategy","Touch-Friendly","Education"};
g.insert_game("SpaceChem", "Zachtronics", "Zachtronics", SpaceChem_tags, 16);
cout << "201 insert" << endl;
//Inserting The Escapists
string The_Escapists_tags[20] = {"Pixel Graphics","Strategy","Crafting","Singleplayer","Simulation","2D","Indie","Action","Survival","Difficult","Adventure","Puzzle","RPG","Funny","Top-Down","Sandbox","Comedy","Multiplayer","Rogue-like","Co-op"};
g.insert_game("The Escapists", "Mouldy Toof Studios", "Team17 Digital Ltd", The_Escapists_tags, 20);
cout << "202 insert" << endl;
//Inserting Super Crate Box
string Super_Crate_Box_tags[20] = {"Free to Play","Indie","Platformer","Action","Pixel Graphics","2D","Shooter","Multiplayer","Arcade","Singleplayer","Difficult","Retro","GameMaker","Fast-Paced","Controller","Co-op","Online Co-Op","Great Soundtrack","Rogue-like","Family Friendly"};
g.insert_game("Super Crate Box", "Vlambeer", "Vlambeer", Super_Crate_Box_tags, 20);
cout << "203 insert" << endl;
//Inserting WildStar
string WildStar_tags[20] = {"Free to Play","Massively Multiplayer","MMORPG","Open World","RPG","Sci-fi","PvP","PvE","Multiplayer","Character Customization","Action","Funny","Action-Adventure","Adventure","Co-op","Fantasy","Building","Cartoony","FPS","Survival"};
g.insert_game("WildStar", "Carbine Studios", "NCSOFT", WildStar_tags, 20);
cout << "204 insert" << endl;
//Inserting Crysis
string Crysis_tags[20] = {"FPS","Action","Sci-fi","Stealth","Singleplayer","Shooter","Aliens","Open World","Benchmark","First-Person","Multiplayer","Futuristic","Adventure","Atmospheric","Story Rich","Classic","Sandbox","Destruction","Great Soundtrack","Moddable"};
g.insert_game("Crysis", "Crytek", "Electronic Arts", Crysis_tags, 20);
cout << "205 insert" << endl;
//Inserting Two Worlds Epic Edition
string Two_Worlds_Epic_Edition_tags[11] = {"RPG","Open World","Fantasy","Third Person","Multiplayer","Adventure","Action","Singleplayer","Medieval","Action RPG","Story Rich"};
g.insert_game("Two Worlds Epic Edition", "Reality Pump Studios", "Topware Interactive", Two_Worlds_Epic_Edition_tags, 11);
cout << "206 insert" << endl;
//Inserting Deadlight
string Deadlight_tags[20] = {"Zombies","Platformer","Indie","Action","Post-apocalyptic","Adventure","Atmospheric","Singleplayer","Side Scroller","Parkour","2D","Survival","Horror","2.5D","Puzzle","Great Soundtrack","Short","Story Rich","Controller","Noir"};
g.insert_game("Deadlight", "Tequila Works, S.L.", "Microsoft Studios", Deadlight_tags, 20);
cout << "207 insert" << endl;
//Inserting State of Decay
string State_of_Decay_tags[20] = {"Zombies","Survival","Open World","Action","Post-apocalyptic","RPG","Third Person","Singleplayer","Sandbox","Base-Building","Simulation","Exploration","Adventure","Multiplayer","Horror","Third-Person Shooter","Survival Horror","Atmospheric","Indie","Co-op"};
g.insert_game("State of Decay", "Undead Labs", "Microsoft Studios", State_of_Decay_tags, 20);
cout << "208 insert" << endl;
//Inserting Elite Dangerous
string Elite_Dangerous_tags[20] = {"Space Sim","Space","Open World","Exploration","Sci-fi","Massively Multiplayer","Simulation","Multiplayer","Action","First-Person","Sandbox","Adventure","Online Co-Op","Trading","Singleplayer","RPG","Difficult","Strategy","VR","TrackIR"};
g.insert_game("Elite Dangerous", "Frontier Developments", "Frontier Developments", Elite_Dangerous_tags, 20);
cout << "209 insert" << endl;
//Inserting Lara Croft and the Guardian of Light
string Lara_Croft_and_the_Guardian_of_Light_tags[20] = {"Action","Adventure","Co-op","Local Co-Op","Puzzle","Lara Croft","Female Protagonist","Platformer","Online Co-Op","Puzzle-Platformer","Singleplayer","Multiplayer","Third Person","Twin Stick Shooter","Local Multiplayer","Arcade","Isometric","Exploration","Difficult","Controller"};
g.insert_game("Lara Croft and the Guardian of Light", "Crystal Dynamics", "Square Enix", Lara_Croft_and_the_Guardian_of_Light_tags, 20);
cout << "210 insert" << endl;
//Inserting The Long Dark
string The_Long_Dark_tags[20] = {"Early Access","Survival","Open World","Atmospheric","First-Person","Exploration","Adventure","Singleplayer","Sandbox","Crafting","Simulation","Indie","Post-apocalyptic","Walking Simulator","Survival Horror","Strategy","Action","Female Protagonist","Horror","Difficult"};
g.insert_game("The Long Dark", "Hinterland Studio Inc.", "Hinterland Studio Inc.", The_Long_Dark_tags, 20);
cout << "211 insert" << endl;
//Inserting Defy Gravity Extended
string Defy_Gravity_Extended_tags[20] = {"Indie","Platformer","Puzzle","Space","Action","2D","Casual","Singleplayer","Difficult","Great Soundtrack","Sci-fi","Female Protagonist","Physics","Anime","Multiplayer","Shooter","Retro","Arcade","Open World","Horror"};
g.insert_game("Defy Gravity Extended", "Paul Fisch", "Fish Factory Games", Defy_Gravity_Extended_tags, 20);
cout << "212 insert" << endl;
//Inserting Shadowrun Returns
string Shadowrun_Returns_tags[20] = {"RPG","Cyberpunk","Turn-Based","Isometric","Sci-fi","Indie","Strategy","Singleplayer","Tactical","Kickstarter","Moddable","Adventure","CRPG","Crowdfunded","Story Rich","Atmospheric","Fantasy","Turn-Based Strategy","Female Protagonist","Dystopian "};
g.insert_game("Shadowrun Returns", "Harebrained Schemes", "Harebrained Holdings", Shadowrun_Returns_tags, 20);
cout << "213 insert" << endl;
//Inserting Blender
string Blender_tags[12] = {"Animation & Modeling","Game Development","Free to Play","Video Production","Design & Illustration","Software","Singleplayer","GameMaker","Action","Difficult","Anime","Casual"};
g.insert_game("Blender", "Blender Foundation", "Blender Foundation", Blender_tags, 12);
cout << "214 insert" << endl;
//Inserting Two Worlds II
string Two_Worlds_II_tags[20] = {"RPG","Open World","Fantasy","Third Person","Exploration","Singleplayer","Multiplayer","Co-op","Crafting","Action RPG","Adventure","Story Rich","Action","Hack and Slash","Great Soundtrack","Dark Fantasy","Inventory Management","Magic","Atmospheric","Sandbox"};
g.insert_game("Two Worlds II", "Reality Pump Studios", "Topware Interactive", Two_Worlds_II_tags, 20);
cout << "215 insert" << endl;
//Inserting The Wolf Among Us
string The_Wolf_Among_Us_tags[20] = {"Adventure","Detective","Episodic","Point & Click","Story Rich","Noir","Mature","Comic Book","Singleplayer","Atmospheric","Mystery","Choose Your Own Adventure","Dark","Cinematic","Fantasy","Quick-Time Events","Great Soundtrack","Nudity","Cartoony","Action"};
g.insert_game("The Wolf Among Us", "Telltale Games", "Telltale Games", The_Wolf_Among_Us_tags, 20);
cout << "216 insert" << endl;
//Inserting Valkyria Chronicles
string Valkyria_Chronicles_tags[20] = {"Anime","Strategy","Turn-Based","RPG","Story Rich","JRPG","Tactical","Singleplayer","Great Soundtrack","Strategy RPG","Tactical RPG","Third Person","Tanks","Action","War","Turn-Based Strategy","World War II","Romance","Classic","Female Protagonist"};
g.insert_game("Valkyria Chronicles", "SEGA", "SEGA", Valkyria_Chronicles_tags, 20);
cout << "217 insert" << endl;
//Inserting SPINTIRES
string SPINTIRES_tags[20] = {"Simulation","Offroad","Physics","Multiplayer","Open World","Driving","Adventure","Realistic","Co-op","Atmospheric","Moddable","Exploration","Online Co-Op","Racing","Sandbox","Singleplayer","Difficult","Action","Survival","Indie"};
g.insert_game("SPINTIRES", "Oovee® Game Studios", "Oovee® Game Studios, IMGN.PRO", SPINTIRES_tags, 20);
cout << "218 insert" << endl;
//Inserting Legend of Grimrock
string Legend_of_Grimrock_tags[20] = {"RPG","Dungeon Crawler","Indie","Fantasy","Grid-Based Movement","Adventure","Singleplayer","Party-Based RPG","Puzzle","Real-Time","First-Person","Moddable","Atmospheric","Retro","Difficult","Character Customization","Action","Tactical","Replay Value","Level Editor"};
g.insert_game("Legend of Grimrock", "Almost Human Games", "Almost Human Games", Legend_of_Grimrock_tags, 20);
cout << "219 insert" << endl;
//Inserting Call of Juarez Gunslinger
string Call_of_Juarez_Gunslinger_tags[20] = {"Western","FPS","Action","Bullet Time","Comedy","Shooter","Story Rich","Singleplayer","First-Person","Narration","Adventure","Great Soundtrack","Atmospheric","Arcade","Funny","Historical","Alternate History","Dynamic Narration","Gore","Linear"};
g.insert_game("Call of Juarez Gunslinger", "Techland", "Ubisoft", Call_of_Juarez_Gunslinger_tags, 20);
cout << "220 insert" << endl;
//Inserting LEGO Marvel Super Heroes
string LEGO_Marvel_Super_Heroes_tags[20] = {"LEGO","Open World","Superhero","Adventure","Action","Local Co-Op","Comedy","Family Friendly","Comic Book","Funny","Singleplayer","Co-op","Third Person","Local Multiplayer","Casual","Split Screen","Puzzle","Sandbox","Multiplayer","Platformer"};
g.insert_game("LEGO Marvel Super Heroes", "Traveller's Tales", "Warner Bros. Interactive Entertainment, Feral Interactive (Mac)", LEGO_Marvel_Super_Heroes_tags, 20);
cout << "221 insert" << endl;
//Inserting Darksiders II Deathinitive Edition
string Darksiders_II_Deathinitive_Edition_tags[16] = {"Action","Adventure","RPG","Hack and Slash","Open World","Singleplayer","Third Person","Fantasy","Puzzle","Great Soundtrack","Story Rich","Parkour","Action RPG","Gore","Spectacle fighter","Controller"};
g.insert_game("Darksiders II Deathinitive Edition", "Gunfire Games, Vigil Games, THQ Nordic", "THQ Nordic", Darksiders_II_Deathinitive_Edition_tags, 16);
cout << "222 insert" << endl;
//Inserting Time Clickers
string Time_Clickers_tags[20] = {"Free to Play","Clicker","Casual","Action","Indie","FPS","Shooter","Singleplayer","Multiplayer","Strategy","Adventure","Time Travel","Voxel","RPG","Simulation","Tower Defense","Open World","Point & Click","First-Person","Sandbox"};
g.insert_game("Time Clickers", "Proton Studio Inc", " ", Time_Clickers_tags, 20);
cout << "223 insert" << endl;
//Inserting Cubic Castles
string Cubic_Castles_tags[20] = {"Free to Play","Building","Multiplayer","Sandbox","Open World","Massively Multiplayer","Adventure","Crafting","Cute","Survival","Indie","Casual","Action","Co-op","3D Platformer","RPG","Singleplayer","MMORPG","2D","FPS"};
g.insert_game("Cubic Castles", "Cosmic Cow LLC", "Cosmic Cow LLC", Cubic_Castles_tags, 20);
cout << "224 insert" << endl;
//Inserting Ori and the Blind Forest
string Ori_and_the_Blind_Forest_tags[20] = {"Great Soundtrack","Atmospheric","Platformer","Adventure","Story Rich","Fantasy","2D","Cute","Metroidvania","Singleplayer","Difficult","Indie","Action","Puzzle","Exploration","Family Friendly","Side Scroller","Open World","RPG","2.5D"};
g.insert_game("Ori and the Blind Forest", "Moon Studios GmbH", "Microsoft Studios", Ori_and_the_Blind_Forest_tags, 20);
cout << "225 insert" << endl;
//Inserting Stronghold Crusader HD
string Stronghold_Crusader_HD_tags[14] = {"Strategy","Medieval","Classic","RTS","Multiplayer","Simulation","Tactical","Historical","Economy","Singleplayer","City Builder","Adventure","Sandbox","Remake"};
g.insert_game("Stronghold Crusader HD", "FireFly Studios", "FireFly Studios", Stronghold_Crusader_HD_tags, 14);
cout << "226 insert" << endl;
//Inserting Grim Dawn
string Grim_Dawn_tags[20] = {"Action RPG","RPG","Hack and Slash","Loot","Dark Fantasy","Multiplayer","Co-op","Indie","Singleplayer","Action","Dungeon Crawler","Post-apocalyptic","Adventure","Dark","Isometric","Kickstarter","Fantasy","Atmospheric","Crowdfunded","Zombies"};
g.insert_game("Grim Dawn", "Crate Entertainment", "Crate Entertainment", Grim_Dawn_tags, 20);
cout << "227 insert" << endl;
//Inserting Floating Point
string Floating_Point_tags[11] = {"Free to Play","Casual","Indie","Relaxing","Physics","2D","Singleplayer","Great Soundtrack","Puzzle","Point & Click","Open World"};
g.insert_game("Floating Point", "Suspicious Developments", "Suspicious Developments", Floating_Point_tags, 11);
cout << "228 insert" << endl;
//Inserting Worms Reloaded
string Worms_Reloaded_tags[19] = {"Strategy","2D","Turn-Based","Turn-Based Strategy","Multiplayer","Local Multiplayer","Funny","Classic","Comedy","Action","Online Co-Op","Local Co-Op","Team-Based","Singleplayer","Side Scroller","Tactical","Competitive","4 Player Local","Co-op"};
g.insert_game("Worms Reloaded", "Team17 Digital Ltd", "Team17 Digital Ltd", Worms_Reloaded_tags, 19);
cout << "229 insert" << endl;
//Inserting Relic Hunters Zero
string Relic_Hunters_Zero_tags[20] = {"Free to Play","Action","Pixel Graphics","Multiplayer","Co-op","Indie","Top-Down Shooter","Local Co-Op","Colorful","Shooter","Rogue-like","2D","Cute","Twin Stick Shooter","Female Protagonist","RPG","Controller","Singleplayer","Funny","Retro"};
g.insert_game("Relic Hunters Zero", "Rogue Snail", "Zueira Digital", Relic_Hunters_Zero_tags, 20);
cout << "230 insert" << endl;
//Inserting Stellaris
string Stellaris_tags[20] = {"Space","Strategy","Grand Strategy","Sci-fi","4X","Exploration","Real-Time with Pause","Multiplayer","Singleplayer","RTS","Simulation","Sandbox","Replay Value","Great Soundtrack","Moddable","Atmospheric","Open World","Story Rich","Building","Adventure"};
g.insert_game("Stellaris", "Paradox Development Studio", "Paradox Interactive", Stellaris_tags, 20);
cout << "231 insert" << endl;
//Inserting EVGA Precision XOC
string EVGA_Precision_XOC_tags[3] = {"Utilities","Software","Free to Play"};
g.insert_game("EVGA Precision XOC", "EVGA", "EVGA", EVGA_Precision_XOC_tags, 3);
cout << "232 insert" << endl;
//Inserting The SKIES
string The_SKIES_tags[20] = {"Early Access","Free to Play","Survival","Open World","Multiplayer","Massively Multiplayer","Post-apocalyptic","Shooter","Zombies","FPS","Action","RPG","Crafting","First-Person","Co-op","PvP","Adventure","Third Person","Third-Person Shooter","Horror"};
g.insert_game("The SKIES", "Eforb", "Eforb", The_SKIES_tags, 20);
cout << "233 insert" << endl;
//Inserting Skullgirls
string Skullgirls_tags[20] = {"Fighting","2D Fighter","Indie","Multiplayer","Anime","2D","Great Soundtrack","Action","Competitive","Female Protagonist","Crowdfunded","Local Multiplayer","Cute","Arcade","Hand-drawn","Cartoon","Controller","Singleplayer","Beat 'em up","Nudity"};
g.insert_game("Skullgirls", "Lab Zero Games", "Marvelous, Autumn Games", Skullgirls_tags, 20);
cout << "234 insert" << endl;
//Inserting Shadow Warrior
string Shadow_Warrior_tags[20] = {"Action","FPS","Swordplay","Gore","Comedy","First-Person","Hack and Slash","Adventure","Shooter","Singleplayer","Great Soundtrack","Dark Humor","Ninja","Demons","Funny","Remake","3D Vision","Atmospheric","Classic","Multiplayer"};
g.insert_game("Shadow Warrior", "Flying Wild Hog", "Devolver Digital", Shadow_Warrior_tags, 20);
cout << "235 insert" << endl;
//Inserting Hammerwatch
string Hammerwatch_tags[20] = {"Indie","Dungeon Crawler","RPG","Co-op","Action","Local Co-Op","Pixel Graphics","Online Co-Op","Adventure","Retro","Fantasy","Multiplayer","Hack and Slash","2D","4 Player Local","Singleplayer","Top-Down","Rogue-like","Local Multiplayer","Level Editor"};
g.insert_game("Hammerwatch", "Crackshell", "Crackshell", Hammerwatch_tags, 20);
cout << "236 insert" << endl;
//Inserting The Last Remnant
string The_Last_Remnant_tags[16] = {"JRPG","RPG","Singleplayer","Fantasy","Turn-Based","Great Soundtrack","Turn-Based Strategy","Story Rich","Strategy","Turn-Based Tactics","Adventure","Difficult","Open World","Controller","Action","Tactical"};
g.insert_game("The Last Remnant", "SQUARE ENIX", "Square Enix", The_Last_Remnant_tags, 16);
cout << "237 insert" << endl;
//Inserting Assassins Creed Brotherhood
string Assassins_Creed_Brotherhood_tags[20] = {"Action","Adventure","Open World","Parkour","Stealth","Third Person","Assassin","Historical","Multiplayer","Singleplayer","Rome","Great Soundtrack","Story Rich","Atmospheric","Conspiracy","Sandbox","Action-Adventure","Medieval","Controller","Casual"};
g.insert_game("Assassins Creed Brotherhood", "Ubisoft Montreal", "Ubisoft", Assassins_Creed_Brotherhood_tags, 20);
cout << "238 insert" << endl;
//Inserting Deus Ex  Invisible War
string Deus_Ex_Invisible_War_tags[18] = {"Cyberpunk","Action","FPS","Sci-fi","RPG","Stealth","Singleplayer","Transhumanism","Female Protagonist","First-Person","Dystopian ","Shooter","Story Rich","Atmospheric","Illuminati","Classic","Action RPG","Conspiracy"};
g.insert_game("Deus Ex  Invisible War", "Ion Storm", "Square Enix", Deus_Ex_Invisible_War_tags, 18);
cout << "239 insert" << endl;
//Inserting Tom Clancys Splinter Cell Blacklist
string Tom_Clancys_Splinter_Cell_Blacklist_tags[20] = {"Stealth","Action","Co-op","Third Person","Multiplayer","Adventure","Singleplayer","Shooter","Online Co-Op","Tactical","Third-Person Shooter","Parkour","FPS","Story Rich","Strategy","Atmospheric","First-Person","Controller","RPG","Mature"};
g.insert_game("Tom Clancys Splinter Cell Blacklist", "Ubisoft Toronto", "Ubisoft", Tom_Clancys_Splinter_Cell_Blacklist_tags, 20);
cout << "240 insert" << endl;
//Inserting Supreme Commander
string Supreme_Commander_tags[13] = {"Strategy","RTS","Sci-fi","Multiplayer","Real-Time","Co-op","Real-Time with Pause","Singleplayer","Action","Base-Building","Robots","Classic","Space"};
g.insert_game("Supreme Commander", "Gas Powered Games", "THQ Nordic", Supreme_Commander_tags, 13);
cout << "241 insert" << endl;
//Inserting Crysis Warhead
string Crysis_Warhead_tags[14] = {"Action","FPS","Sci-fi","Shooter","Singleplayer","Aliens","Military","First-Person","Benchmark","Multiplayer","Open World","Adventure","Stealth","Futuristic"};
g.insert_game("Crysis Warhead", "Crytek", "Electronic Arts", Crysis_Warhead_tags, 14);
cout << "242 insert" << endl;
//Inserting Risen
string Risen_tags[20] = {"RPG","Open World","Gothic","Fantasy","Adventure","Third Person","Atmospheric","Singleplayer","Exploration","Action","Magic","Dark Fantasy","Great Soundtrack","Action RPG","Sandbox","Difficult","Story Rich","Medieval","Character Customization","Classic"};
g.insert_game("Risen", "Piranha Bytes", "Deep Silver", Risen_tags, 20);
cout << "243 insert" << endl;
//Inserting Far Cry
string Far_Cry_tags[17] = {"FPS","Action","Classic","Shooter","Open World","Stealth","First-Person","Difficult","Singleplayer","Multiplayer","Adventure","Atmospheric","Story Rich","Sandbox","Sci-fi","Horror","Great Soundtrack"};
g.insert_game("Far Cry", "Crytek Studios", "Ubisoft", Far_Cry_tags, 17);
cout << "244 insert" << endl;
//Inserting Pillars of Eternity
string Pillars_of_Eternity_tags[20] = {"RPG","Fantasy","Isometric","Singleplayer","Story Rich","CRPG","Party-Based RPG","Real-Time with Pause","Kickstarter","Adventure","Atmospheric","Dark Fantasy","Open World","Exploration","Classic","Great Soundtrack","Strategy","Indie","Character Customization","Crowdfunded"};
g.insert_game("Pillars of Eternity", "Obsidian Entertainment", "Paradox Interactive", Pillars_of_Eternity_tags, 20);
cout << "245 insert" << endl;
//Inserting STAR WARS Starfighter
string STAR_WARS_Starfighter_tags[7] = {"Action","Simulation","Star Wars","Space","Sci-fi","Singleplayer","Flight"};
g.insert_game("STAR WARS Starfighter", "LucasArts", "LucasArts, Lucasfilm, Disney Interactive", STAR_WARS_Starfighter_tags, 7);
cout << "246 insert" << endl;
//Inserting Reus
string Reus_tags[13] = {"God Game","Strategy","Indie","Simulation","Singleplayer","Sandbox","Casual","2D","Puzzle","Replay Value","Resource Management","Fantasy","Relaxing"};
g.insert_game("Reus", "Abbey Games", "Abbey Games", Reus_tags, 13);
cout << "247 insert" << endl;
//Inserting Steel Ocean
string Steel_Ocean_tags[20] = {"Free to Play","Naval","World War II","Massively Multiplayer","Simulation","Military","War","Multiplayer","Action","MOBA","Strategy","Shooter","Adventure","Co-op","Survival","Tactical","First-Person","Sandbox","Singleplayer","Open World"};
g.insert_game("Steel Ocean", "ICE Entertainment", "Changyou.com Limited", Steel_Ocean_tags, 20);
cout << "248 insert" << endl;
//Inserting Brilliant Bob
string Brilliant_Bob_tags[20] = {"Action","Casual","Adventure","3D Platformer","Indie","Platformer","Puzzle-Platformer","Puzzle","Third Person","Singleplayer","Cartoony","Physics","Family Friendly","Action-Adventure","Fantasy","Atmospheric","Colorful","Controller","Aliens","Difficult"};
g.insert_game("Brilliant Bob", "Zonitron Productions", "GrabTheGames", Brilliant_Bob_tags, 20);
cout << "249 insert" << endl;
//Inserting Thomas Was Alone
string Thomas_Was_Alone_tags[20] = {"Platformer","Indie","Narration","Minimalist","Puzzle","Great Soundtrack","Puzzle-Platformer","Story Rich","2D","Atmospheric","Singleplayer","Funny","Family Friendly","Comedy","Short","Casual","Adventure","Colorful","Sci-fi","Relaxing"};
g.insert_game("Thomas Was Alone", "Bithell Games", "Bithell Games", Thomas_Was_Alone_tags, 20);
cout << "250 insert" << endl;
//Inserting Mortal Kombat X
string Mortal_Kombat_X_tags[20] = {"Fighting","Gore","Action","Violent","Multiplayer","Blood","Mature","Competitive","Atmospheric","Local Multiplayer","2D Fighter","Singleplayer","Arcade","Great Soundtrack","2.5D","Online Co-Op","Fantasy","Third Person","Horror","Female Protagonist"};
g.insert_game("Mortal Kombat X", "NetherRealm Studios, High Voltage Software", "Warner Bros. Interactive Entertainment", Mortal_Kombat_X_tags, 20);
cout << "251 insert" << endl;
//Inserting Why So Evil
string Why_So_Evil_tags[20] = {"Action","Casual","Adventure","Difficult","Indie","Physics","Puzzle","Third Person","Platformer","Top-Down","3D Platformer","Co-op","Great Soundtrack","Singleplayer","Family Friendly","Puzzle-Platformer","Controller","Fantasy","Atmospheric","Colorful"};
g.insert_game("Why So Evil", "Zonitron Productions", "GrabTheGames", Why_So_Evil_tags, 20);
cout << "252 insert" << endl;
//Inserting Deponia
string Deponia_tags[18] = {"Adventure","Point & Click","Comedy","Singleplayer","Indie","Puzzle","Dark Humor","Hand-drawn","Funny","Story Rich","Steampunk","2D","Sci-fi","Dystopian ","Atmospheric","Great Soundtrack","Hidden Object","Difficult"};
g.insert_game("Deponia", "Daedalic Entertainment", "Daedalic Entertainment", Deponia_tags, 18);
cout << "253 insert" << endl;
//Inserting MapleStory
string MapleStory_tags[19] = {"Free to Play","Massively Multiplayer","RPG","Anime","MMORPG","2D","Casual","Adventure","Platformer","Side Scroller","Action RPG","Fantasy","Multiplayer","Cute","Action","Open World","Pixel Graphics","Great Soundtrack","Co-op"};
g.insert_game("MapleStory", "Nexon", "Nexon America Inc.", MapleStory_tags, 19);
cout << "254 insert" << endl;
//Inserting Dear Esther
string Dear_Esther_tags[20] = {"Walking Simulator","Indie","Exploration","First-Person","Short","Atmospheric","Story Rich","Casual","Adventure","Great Soundtrack","Singleplayer","Narration","Mystery","Experimental","Relaxing","Interactive Fiction","Linear","Open World","Experience","3D Vision"};
g.insert_game("Dear Esther", "The Chinese Room, Robert Briscoe", "The Chinese Room", Dear_Esther_tags, 20);
cout << "255 insert" << endl;
//Inserting Project CARS
string Project_CARS_tags[20] = {"Racing","Simulation","Driving","Realistic","Multiplayer","Sports","Singleplayer","Physics","Atmospheric","First-Person","VR","Action","Controller","Third Person","Open World","Co-op","Arcade","TrackIR","Indie","Casual"};
g.insert_game("Project CARS", "Slightly Mad Studios", "Slightly Mad Studios, BANDAI NAMCO Entertainment", Project_CARS_tags, 20);
cout << "256 insert" << endl;
//Inserting The Incredible Adventures of Van Helsing
string The_Incredible_Adventures_of_Van_Helsing_tags[20] = {"RPG","Hack and Slash","Action RPG","Action","Adventure","Indie","Fantasy","Co-op","Steampunk","Loot","Dungeon Crawler","Multiplayer","Singleplayer","Funny","Gothic","Vampire","Dark Fantasy","Magic","Isometric","Based On A Novel"};
g.insert_game("The Incredible Adventures of Van Helsing", "NeocoreGames", "NeocoreGames", The_Incredible_Adventures_of_Van_Helsing_tags, 20);
cout << "257 insert" << endl;
//Inserting Race The Sun
string Race_The_Sun_tags[17] = {"Racing","Indie","Singleplayer","Fast-Paced","Action","Sci-fi","Casual","Arcade","Minimalist","Kickstarter","Difficult","Controller","Great Soundtrack","Perma Death","Runner","Flight","VR"};
g.insert_game("Race The Sun", "Flippfly LLC", "Flippfly LLC", Race_The_Sun_tags, 17);
cout << "258 insert" << endl;
//Inserting Champions Online
string Champions_Online_tags[15] = {"Free to Play","Superhero","Massively Multiplayer","RPG","MMORPG","Character Customization","Action","Open World","Multiplayer","Third Person","Co-op","Adventure","Singleplayer","FPS","Comic Book"};
g.insert_game("Champions Online", "Cryptic Studios", "Perfect World Entertainment", Champions_Online_tags, 15);
cout << "259 insert" << endl;
//Inserting Digimon Masters Online
string Digimon_Masters_Online_tags[16] = {"Free to Play","Anime","Adventure","Massively Multiplayer","MMORPG","RPG","Action","Casual","Open World","Multiplayer","Action-Adventure","Co-op","Action RPG","Fantasy","Arcade","FPS"};
g.insert_game("Digimon Masters Online", "Move Games Co., Ltd.", "Move Games Co., Ltd.", Digimon_Masters_Online_tags, 16);
cout << "260 insert" << endl;
//Inserting Homefront
string Homefront_tags[8] = {"Action","FPS","Shooter","Multiplayer","Singleplayer","Short","First-Person","Atmospheric"};
g.insert_game("Homefront", "Kaos Studios, Digital Extremes", "Deep Silver", Homefront_tags, 8);
cout << "261 insert" << endl;
//Inserting The Swapper
string The_Swapper_tags[20] = {"Puzzle","Sci-fi","Atmospheric","Indie","Space","Platformer","Puzzle-Platformer","Singleplayer","Adventure","Great Soundtrack","Psychological Horror","2D","Metroidvania","Action","Exploration","Story Rich","Mystery","Difficult","Side Scroller","Horror"};
g.insert_game("The Swapper", "Olli Harjola, Otto Hantula, Tom Jubert, Carlo Castellano", "Facepalm Games", The_Swapper_tags, 20);
cout << "262 insert" << endl;
//Inserting KnightShift
string KnightShift_tags[6] = {"RPG","Strategy","Fantasy","RTS","Multiplayer","Singleplayer"};
g.insert_game("KnightShift", "", "Topware Interactive", KnightShift_tags, 6);
cout << "263 insert" << endl;
//Inserting GooCubelets
string GooCubelets_tags[20] = {"Casual","Puzzle","Difficult","Indie","Atmospheric","Colorful","Singleplayer","Physics","Family Friendly","Great Soundtrack","Minimalist","Cute","Stylized","Replay Value","Story Rich","Relaxing","Top-Down","Simulation","Cartoony","Platformer"};
g.insert_game("GooCubelets", "Zonitron Productions", "GrabTheGames", GooCubelets_tags, 20);
cout << "264 insert" << endl;
//Inserting Faeria
string Faeria_tags[16] = {"Free to Play","Card Game","Strategy","Multiplayer","Massively Multiplayer","Indie","Turn-Based","Singleplayer","Fantasy","Board Game","Hex Grid","Turn-Based Strategy","Survival","Action","Casual","Trading Card Game"};
g.insert_game("Faeria", "Abrakam SA", "Abrakam SA", Faeria_tags, 16);
cout << "265 insert" << endl;
//Inserting Gunpoint
string Gunpoint_tags[20] = {"Stealth","Puzzle","Indie","Comedy","2D","Singleplayer","Action","Pixel Graphics","Strategy","Platformer","Noir","Great Soundtrack","Funny","Short","Hacking","GameMaker","Level Editor","Adventure","Story Rich","Sci-fi"};
g.insert_game("Gunpoint", "Suspicious Developments", "Suspicious Developments", Gunpoint_tags, 20);
cout << "266 insert" << endl;
//Inserting MOBIUS FINAL FANTASY
string MOBIUS_FINAL_FANTASY_tags[20] = {"Free to Play","RPG","Fantasy","Multiplayer","MMORPG","Anime","Action","Open World","Turn-Based","Card Game","Singleplayer","Adventure","JRPG","Casual","Story Rich","Action RPG","Survival","Character Customization","FPS","Psychological Horror"};
g.insert_game("MOBIUS FINAL FANTASY", "SQUARE ENIX CO., LTD.", "SQUARE ENIX CO., LTD.", MOBIUS_FINAL_FANTASY_tags, 20);
cout << "267 insert" << endl;
//Inserting ShellShock Live
string ShellShock_Live_tags[20] = {"Early Access","Tanks","Multiplayer","Strategy","Action","2D","Turn-Based","Massively Multiplayer","Casual","Indie","Shooter","Singleplayer","Colorful","Co-op","Online Co-Op","Funny","Turn-Based Strategy","Great Soundtrack","Physics","Family Friendly"};
g.insert_game("ShellShock Live", "kChamp Games", "kChamp Games", ShellShock_Live_tags, 20);
cout << "268 insert" << endl;
//Inserting Factorio
string Factorio_tags[20] = {"Early Access","Base-Building","Resource Management","Sandbox","Strategy","Crafting","Survival","Multiplayer","Open World","Management","Simulation","Singleplayer","Moddable","Indie","Trains","Co-op","Sci-fi","Aliens","Tower Defense","Casual"};
g.insert_game("Factorio", "Wube Software LTD.", "Wube Software LTD.", Factorio_tags, 20);
cout << "269 insert" << endl;
//Inserting Receiver
string Receiver_tags[19] = {"Simulation","FPS","Indie","Rogue-like","Action","Procedural Generation","First-Person","Difficult","Singleplayer","Shooter","Realistic","Abstract","Perma Death","Tactical","Cyberpunk","Horror","Atmospheric","Sci-fi","Walking Simulator"};
g.insert_game("Receiver", "Wolfire Games", "Wolfire Games", Receiver_tags, 19);
cout << "270 insert" << endl;
//Inserting Little Inferno
string Little_Inferno_tags[20] = {"Indie","Casual","Singleplayer","Puzzle","Satire","Funny","Short","Comedy","Adventure","Story Rich","Great Soundtrack","Sandbox","Atmospheric","Dark Humor","Dark","Parody ","2D","Surreal","Point & Click","Touch-Friendly"};
g.insert_game("Little Inferno", "Tomorrow Corporation", "Tomorrow Corporation", Little_Inferno_tags, 20);
cout << "271 insert" << endl;
//Inserting Card Hunter
string Card_Hunter_tags[18] = {"Free to Play","Card Game","Board Game","Strategy","RPG","Turn-Based","Multiplayer","Co-op","Fantasy","Singleplayer","Tactical RPG","Turn-Based Strategy","Dungeon Crawler","Comedy","Funny","Tactical","Indie","Trading Card Game"};
g.insert_game("Card Hunter", "Blue Manchu", "Blue Manchu", Card_Hunter_tags, 18);
cout << "272 insert" << endl;
//Inserting Thief Gold
string Thief_Gold_tags[20] = {"Stealth","Classic","First-Person","Atmospheric","Steampunk","Action","Horror","Fantasy","Singleplayer","Adventure","Medieval","Cult Classic","Dark Fantasy","Story Rich","Dark","Exploration","1990's","Moddable","FPS","Zombies"};
g.insert_game("Thief Gold", "Looking Glass Studios", "Square Enix", Thief_Gold_tags, 20);
cout << "273 insert" << endl;
//Inserting Gang Beasts
string Gang_Beasts_tags[20] = {"Early Access","Funny","Multiplayer","Fighting","Local Multiplayer","Physics","Comedy","Beat 'em up","Action","Co-op","4 Player Local","Colorful","Third Person","Indie","Casual","Adventure","Singleplayer","Great Soundtrack","Sandbox","Simulation"};
g.insert_game("Gang Beasts", "Boneloaf", "Double Fine Presents", Gang_Beasts_tags, 20);
cout << "274 insert" << endl;
//Inserting They Came From The Moon
string They_Came_From_The_Moon_tags[19] = {"Casual","Puzzle","Singleplayer","Difficult","Atmospheric","Indie","2D","Family Friendly","Platformer","Aliens","Cartoony","Puzzle-Platformer","Physics","Surreal","Replay Value","Simulation","Strategy","Colorful","3D Platformer"};
g.insert_game("They Came From The Moon", "Zonitron Productions", "GrabTheGames", They_Came_From_The_Moon_tags, 19);
cout << "275 insert" << endl;
//Inserting Shadowverse CCG
string Shadowverse_CCG_tags[8] = {"Free to Play","Card Game","Anime","Strategy","Trading Card Game","Fantasy","Multiplayer","Nudity"};
g.insert_game("Shadowverse CCG", "Cygames, Inc.", "Cygames, Inc.", Shadowverse_CCG_tags, 8);
cout << "276 insert" << endl;
//Inserting Hunger Dungeon
string Hunger_Dungeon_tags[16] = {"Free to Play","Multiplayer","Pixel Graphics","Action","Indie","RPG","MOBA","PvP","Fighting","Adventure","2D","Dungeon Crawler","Survival","Co-op","MMORPG","Rogue-like"};
g.insert_game("Hunger Dungeon", "Buka Game Studio", "PQube Limited", Hunger_Dungeon_tags, 16);
cout << "277 insert" << endl;
//Inserting Gun Monkeys
string Gun_Monkeys_tags[7] = {"Action","Indie","Casual","Platformer","Multiplayer","Local Multiplayer","Shooter"};
g.insert_game("Gun Monkeys", "Size Five Games", "Size Five Games", Gun_Monkeys_tags, 7);
cout << "278 insert" << endl;
//Inserting Watch_Dogs
string Watch_Dogs_tags[20] = {"Open World","Hacking","Action","Multiplayer","Third Person","Adventure","Stealth","Third-Person Shooter","Singleplayer","Atmospheric","Shooter","Parkour","Sandbox","Driving","Co-op","Strategy","Futuristic","RPG","Simulation","FPS"};
g.insert_game("Watch_Dogs", "Ubisoft", "Ubisoft", Watch_Dogs_tags, 20);
cout << "279 insert" << endl;
//Inserting La Tale
string La_Tale_tags[19] = {"Anime","Free to Play","RPG","Massively Multiplayer","2D","Adventure","MMORPG","Action","Side Scroller","Casual","Multiplayer","Open World","Cute","Platformer","Fantasy","Fighting","Indie","JRPG","Singleplayer"};
g.insert_game("La Tale", "Actoz Soft", "OGPlanet", La_Tale_tags, 19);
cout << "280 insert" << endl;
//Inserting SPORE Galactic Adventures
string SPORE_Galactic_Adventures_tags[17] = {"Simulation","Action","Space","Adventure","Exploration","Open World","Singleplayer","Strategy","Sandbox","Sci-fi","God Game","Multiplayer","Funny","RPG","Comedy","Crafting","Shooter"};
g.insert_game("SPORE Galactic Adventures", "EA - Maxis", "Electronic Arts", SPORE_Galactic_Adventures_tags, 17);
cout << "281 insert" << endl;
//Inserting Project Zomboid
string Project_Zomboid_tags[20] = {"Early Access","Survival","Zombies","Open World","Sandbox","Indie","Simulation","Multiplayer","RPG","Post-apocalyptic","Crafting","Co-op","Building","Survival Horror","Isometric","Singleplayer","2D","Realistic","Adventure","Real-Time with Pause"};
g.insert_game("Project Zomboid", "The Indie Stone", "The Indie Stone", Project_Zomboid_tags, 20);
cout << "282 insert" << endl;
//Inserting The Talos Principle
string The_Talos_Principle_tags[20] = {"Puzzle","First-Person","Sci-fi","Atmospheric","Story Rich","Singleplayer","Philisophical","Great Soundtrack","Adventure","Robots","Exploration","Open World","Indie","Third Person","Action","Simulation","Post-apocalyptic","Difficult","Multiple Endings","Multiplayer"};
g.insert_game("The Talos Principle", "Croteam", "Devolver Digital, Croteam", The_Talos_Principle_tags, 20);
cout << "283 insert" << endl;
//Inserting Royal Quest
string Royal_Quest_tags[12] = {"Free to Play","Massively Multiplayer","RPG","Adventure","MMORPG","Open World","Fantasy","Multiplayer","Action","Hack and Slash","Third Person","Singleplayer"};
g.insert_game("Royal Quest", "Katauri", "1C Online Games", Royal_Quest_tags, 12);
cout << "284 insert" << endl;
//Inserting Ultra Street Fighter IV
string Ultra_Street_Fighter_IV_tags[20] = {"Fighting","Arcade","Competitive","2D Fighter","Action","Local Multiplayer","Multiplayer","Controller","e-sports","Difficult","Classic","Anime","Singleplayer","Great Soundtrack","2D","Beat 'em up","2.5D","Local Co-Op","Adventure","3D Vision"};
g.insert_game("Ultra Street Fighter IV", "Capcom", "Capcom", Ultra_Street_Fighter_IV_tags, 20);
cout << "285 insert" << endl;
//Inserting Atlas Reactor
string Atlas_Reactor_tags[20] = {"Free to Play","Multiplayer","Strategy","Turn-Based Tactics","Turn-Based","PvP","Tactical","Online Co-Op","MOBA","Action","Sci-fi","Competitive","Turn-Based Combat","Funny","Shooter","Co-op","Turn-Based Strategy","Survival","Singleplayer","FPS"};
g.insert_game("Atlas Reactor", "Trion Worlds", "Trion Worlds", Atlas_Reactor_tags, 20);
cout << "286 insert" << endl;
//Inserting Stranded Deep
string Stranded_Deep_tags[20] = {"Early Access","Survival","Open World","Crafting","First-Person","Adventure","Realistic","Multiplayer","Exploration","Singleplayer","Building","Sandbox","Simulation","Underwater","Action","Atmospheric","Indie","Co-op","Strategy","Procedural Generation"};
g.insert_game("Stranded Deep", "Beam Team Games", "Beam Team Pty Ltd", Stranded_Deep_tags, 20);
cout << "287 insert" << endl;
//Inserting Spelunky
string Spelunky_tags[20] = {"Rogue-like","Platformer","Indie","Difficult","2D","Local Co-Op","Replay Value","Procedural Generation","Action","Perma Death","Adventure","Rogue-lite","Singleplayer","Controller","Co-op","Local Multiplayer","Great Soundtrack","Side Scroller","Multiplayer","Retro"};
g.insert_game("Spelunky", "", "Mossmouth", Spelunky_tags, 20);
cout << "288 insert" << endl;
//Inserting Dungeon Siege III
string Dungeon_Siege_III_tags[9] = {"RPG","Action","Fantasy","Action RPG","Co-op","Local Co-Op","Singleplayer","Dungeon Crawler","Female Protagonist"};
g.insert_game("Dungeon Siege III", "Obsidian Entertainment", "Square Enix", Dungeon_Siege_III_tags, 9);
cout << "289 insert" << endl;
//Inserting Universe Sandbox
string Universe_Sandbox_tags[13] = {"Simulation","Sandbox","Space","Physics","Indie","Science","Education","Casual","Singleplayer","God Game","Sci-fi","Free to Play","Atmospheric"};
g.insert_game("Universe Sandbox", "Giant Army", "Giant Army", Universe_Sandbox_tags, 13);
cout << "290 insert" << endl;
//Inserting Copa Petrobras de Marcas
string Copa_Petrobras_de_Marcas_tags[14] = {"Racing","Free to Play","Multiplayer","Simulation","Sports","Action","Co-op","Singleplayer","Controller","First-Person","Massively Multiplayer","FPS","Online Co-Op","Open World"};
g.insert_game("Copa Petrobras de Marcas", "Reiza Studios", "Reiza Studios", Copa_Petrobras_de_Marcas_tags, 14);
cout << "291 insert" << endl;
//Inserting Pinball Arcade
string Pinball_Arcade_tags[9] = {"Pinball","Simulation","Free to Play","Arcade","Classic","Singleplayer","Casual","Multiplayer","Retro"};
g.insert_game("Pinball Arcade", "FarSight Studios", "FarSight Studios", Pinball_Arcade_tags, 9);
cout << "292 insert" << endl;
//Inserting Tomb Raider I
string Tomb_Raider_I_tags[16] = {"Adventure","Action","Classic","Female Protagonist","Singleplayer","Lara Croft","Platformer","Puzzle","Third Person","Third-Person Shooter","Action-Adventure","Retro","3D Platformer","Shooter","1990's","Dinosaurs"};
g.insert_game("Tomb Raider I", "Core Design", "Square Enix", Tomb_Raider_I_tags, 16);
cout << "293 insert" << endl;
//Inserting Out There Somewhere
string Out_There_Somewhere_tags[20] = {"Platformer","Indie","Pixel Graphics","Adventure","Puzzle","Action","2D","Great Soundtrack","Retro","Sci-fi","Anime","Singleplayer","Puzzle-Platformer","Short","Difficult","Shoot 'Em Up","Metroidvania","Space","Shooter","Arcade"};
g.insert_game("Out There Somewhere", "MiniBoss", "MiniBoss, EQGAMES", Out_There_Somewhere_tags, 20);
cout << "294 insert" << endl;
//Inserting Renegade Ops
string Renegade_Ops_tags[12] = {"Action","Twin Stick Shooter","Top-Down","Local Co-Op","Arcade","Co-op","Online Co-Op","Shoot 'Em Up","Local Multiplayer","Split Screen","Racing","Controller"};
g.insert_game("Renegade Ops", "Avalanche Studios", "SEGA", Renegade_Ops_tags, 12);
cout << "295 insert" << endl;
//Inserting Tomb Raider II
string Tomb_Raider_II_tags[14] = {"Adventure","Action","Female Protagonist","Lara Croft","Classic","Singleplayer","Action-Adventure","Third Person","Puzzle","Platformer","Shooter","Third-Person Shooter","Atmospheric","3D Platformer"};
g.insert_game("Tomb Raider II", "Core Design", "Square Enix", Tomb_Raider_II_tags, 14);
cout << "296 insert" << endl;
//Inserting Fiends of Imprisonment
string Fiends_of_Imprisonment_tags[20] = {"Casual","Difficult","Indie","Top-Down","Atmospheric","Puzzle","Stealth","2D","Singleplayer","Cartoony","Side Scroller","Arcade","Perma Death","Great Soundtrack","Abstract","Third Person","Family Friendly","Puzzle-Platformer","Colorful","Cute"};
g.insert_game("Fiends of Imprisonment", "Zonitron Productions", "GrabTheGames", Fiends_of_Imprisonment_tags, 20);
cout << "297 insert" << endl;
//Inserting Shakes and Fidget
string Shakes_and_Fidget_tags[20] = {"Free to Play","RPG","Casual","Massively Multiplayer","Strategy","Adventure","Multiplayer","Indie","Fantasy","MMORPG","Character Customization","Comedy","Medieval","Classic","Story Rich","Funny","Cult Classic","Dark Humor","Clicker","Singleplayer"};
g.insert_game("Shakes and Fidget", "Playa Games GmbH", "Playa Games GmbH", Shakes_and_Fidget_tags, 20);
cout << "298 insert" << endl;
//Inserting Sonic Generations Collection
string Sonic_Generations_Collection_tags[20] = {"Platformer","Great Soundtrack","Action","Fast-Paced","3D Platformer","Singleplayer","Moddable","2D","Adventure","Retro","Colorful","Family Friendly","Time Travel","Classic","Third Person","Controller","3D Vision","Replay Value","Funny","Racing"};
g.insert_game("Sonic Generations Collection", "Devil's Details", "SEGA", Sonic_Generations_Collection_tags, 20);
cout << "299 insert" << endl;
//Inserting Machinarium
string Machinarium_tags[20] = {"Point & Click","Adventure","Puzzle","Indie","Great Soundtrack","Singleplayer","Steampunk","Atmospheric","Robots","2D","Hand-drawn","Casual","Stylized","Cute","Story Rich","Classic","Touch-Friendly","Hidden Object","Sci-fi","Difficult"};
g.insert_game("Machinarium", "Amanita Design", "Amanita Design", Machinarium_tags, 20);
cout << "300 insert" << endl;
//Inserting Worms Armageddon
string Worms_Armageddon_tags[17] = {"Strategy","Classic","Multiplayer","Turn-Based","Turn-Based Strategy","2D","Funny","Comedy","Physics","Local Multiplayer","Co-op","Action","Singleplayer","Platformer","Local Co-Op","Adventure","1990's"};
g.insert_game("Worms Armageddon", "Team17 Digital Ltd", "Team17 Digital Ltd", Worms_Armageddon_tags, 17);
cout << "301 insert" << endl;
//Inserting Woodle Tree Adventures
string Woodle_Tree_Adventures_tags[12] = {"Indie","Adventure","Platformer","Action","Family Friendly","Cute","3D Platformer","Casual","Local Co-Op","Short","Multiplayer","Singleplayer"};
g.insert_game("Woodle Tree Adventures", "Fabio Ferrara", "Chubby Pixel", Woodle_Tree_Adventures_tags, 12);
cout << "302 insert" << endl;
//Inserting Tomb Raider III
string Tomb_Raider_III_tags[12] = {"Adventure","Action","Female Protagonist","Classic","Lara Croft","Action-Adventure","Third Person","Singleplayer","Puzzle","Third-Person Shooter","Difficult","Shooter"};
g.insert_game("Tomb Raider III", "Core Design", "Square Enix", Tomb_Raider_III_tags, 12);
cout << "303 insert" << endl;
//Inserting Minion Masters
string Minion_Masters_tags[20] = {"Early Access","Strategy","Multiplayer","Indie","Card Game","PvP","Real-Time","Action","Real Time Tactics","Competitive","Blood","Fantasy","Top-Down","Controller","Trading Card Game","Gore","Violent","Singleplayer","Adventure","RPG"};
g.insert_game("Minion Masters", "BetaDwarf", "BetaDwarf", Minion_Masters_tags, 20);
cout << "304 insert" << endl;
//Inserting The Banner Saga
string The_Banner_Saga_tags[20] = {"RPG","Turn-Based","Strategy","Indie","Tactical","Turn-Based Strategy","Story Rich","Fantasy","Great Soundtrack","Kickstarter","Tactical RPG","Hand-drawn","Choices Matter","Atmospheric","Crowdfunded","2D","Singleplayer","Strategy RPG","Adventure","Touch-Friendly"};
g.insert_game("The Banner Saga", "Stoic", "Versus Evil", The_Banner_Saga_tags, 20);
cout << "305 insert" << endl;
//Inserting Teeworlds
string Teeworlds_tags[15] = {"Free to Play","Multiplayer","Action","2D","Platformer","Side Scroller","Shooter","Indie","Co-op","Arena Shooter","Funny","Massively Multiplayer","Level Editor","Adventure","Strategy"};
g.insert_game("Teeworlds", "Teeworlds Team", "Teeworlds Team", Teeworlds_tags, 15);
cout << "306 insert" << endl;
//Inserting Dungeon of the Endless
string Dungeon_of_the_Endless_tags[20] = {"Rogue-like","Strategy","Tower Defense","Indie","Pixel Graphics","RPG","Sci-fi","Perma Death","Dungeon Crawler","Adventure","Procedural Generation","Survival","Resource Management","Difficult","Replay Value","Co-op","Great Soundtrack","Singleplayer","Rogue-lite","2D"};
g.insert_game("Dungeon of the Endless", "AMPLITUDE Studios", "AMPLITUDE Studios", Dungeon_of_the_Endless_tags, 20);
cout << "307 insert" << endl;
//Inserting Bloodline Champions
string Bloodline_Champions_tags[9] = {"Free to Play","Action","MOBA","Multiplayer","Massively Multiplayer","PvP","RPG","Fast-Paced","Competitive"};
g.insert_game("Bloodline Champions", "Stunlock Studios", "Stunlock Studios", Bloodline_Champions_tags, 9);
cout << "308 insert" << endl;
//Inserting Dead Bits
string Dead_Bits_tags[14] = {"Indie","Action","Casual","FPS","Shooter","First-Person","Great Soundtrack","Zombies","Voxel","Singleplayer","Multiplayer","Horror","Pixel Graphics","Difficult"};
g.insert_game("Dead Bits", "Microblast Games", "Microblast Games", Dead_Bits_tags, 14);
cout << "309 insert" << endl;
//Inserting Gauntlet Slayer Edition
string Gauntlet_Slayer_Edition_tags[20] = {"Co-op","Dungeon Crawler","Action","RPG","Hack and Slash","Local Co-Op","Adventure","Multiplayer","Arcade","Remake","Classic","Fantasy","Top-Down","Online Co-Op","4 Player Local","Local Multiplayer","Action RPG","Isometric","Casual","Rogue-like"};
g.insert_game("Gauntlet Slayer Edition", "Arrowhead Game Studios", "WB Games", Gauntlet_Slayer_Edition_tags, 20);
cout << "310 insert" << endl;
//Inserting Remember Me
string Remember_Me_tags[20] = {"Cyberpunk","Action","Female Protagonist","Sci-fi","Third Person","Adventure","Story Rich","Singleplayer","Great Soundtrack","Atmospheric","Dystopian ","Linear","Beat 'em up","Parkour","Futuristic","Hack and Slash","Action-Adventure","Fighting","Platformer","3D Vision"};
g.insert_game("Remember Me", "DONTNOD Entertainment", "Capcom", Remember_Me_tags, 20);
cout << "311 insert" << endl;
//Inserting Break Into Zatwor
string Break_Into_Zatwor_tags[18] = {"Casual","Indie","Singleplayer","Crime","Atmospheric","Difficult","Adventure","Puzzle","Top-Down","2D","Stealth","Colorful","Cartoony","Great Soundtrack","Sandbox","Third Person","Family Friendly","Puzzle-Platformer"};
g.insert_game("Break Into Zatwor", "Zonitron Productions", "GrabTheGames", Break_Into_Zatwor_tags, 18);
cout << "312 insert" << endl;
//Inserting Absconding Zatwor
string Absconding_Zatwor_tags[20] = {"Casual","Action","Singleplayer","Indie","Difficult","Puzzle","Top-Down","Stealth","2D","Atmospheric","Cartoony","Third Person","Minimalist","Colorful","Replay Value","Family Friendly","Comedy","Relaxing","Simulation","Puzzle-Platformer"};
g.insert_game("Absconding Zatwor", "Zonitron Productions", "GrabTheGames", Absconding_Zatwor_tags, 20);
cout << "313 insert" << endl;
//Inserting Enter the Gungeon
string Enter_the_Gungeon_tags[20] = {"Bullet Hell","Pixel Graphics","Rogue-like","Difficult","Dungeon Crawler","Indie","Rogue-lite","Action","Local Co-Op","Loot","Shoot 'Em Up","Co-op","Great Soundtrack","Adventure","Top-Down Shooter","Multiplayer","Shooter","Funny","Twin Stick Shooter","Action-Adventure"};
g.insert_game("Enter the Gungeon", "Dodge Roll", "Devolver Digital", Enter_the_Gungeon_tags, 20);
cout << "314 insert" << endl;
//Inserting Frozen Synapse
string Frozen_Synapse_tags[18] = {"Strategy","Turn-Based","Tactical","Indie","Asynchronous Multiplayer","Great Soundtrack","Cyberpunk","Multiplayer","Turn-Based Strategy","Sci-fi","Top-Down","Competitive","Singleplayer","Chess","Difficult","Replay Value","2D","Action"};
g.insert_game("Frozen Synapse", "Mode 7", "Mode 7", Frozen_Synapse_tags, 18);
cout << "315 insert" << endl;
//Inserting Pixel Piracy
string Pixel_Piracy_tags[20] = {"Pirates","Indie","Pixel Graphics","RPG","Sandbox","2D","Rogue-like","Open World","Simulation","Adventure","Singleplayer","Action","Side Scroller","Building","Strategy","Rogue-lite","Survival","Crafting","Multiplayer","Free to Play"};
g.insert_game("Pixel Piracy", "Quadro Delta, Vitali Kirpu", "Re-Logic", Pixel_Piracy_tags, 20);
cout << "316 insert" << endl;
//Inserting Crypt of the NecroDancer
string Crypt_of_the_NecroDancer_tags[20] = {"Rhythm","Rogue-like","Great Soundtrack","Pixel Graphics","Female Protagonist","Indie","Dungeon Crawler","Music","Difficult","RPG","Local Co-Op","Action","Rogue-lite","2D","Procedural Generation","Adventure","Singleplayer","Co-op","Fantasy","Retro"};
g.insert_game("Crypt of the NecroDancer", "Brace Yourself Games", "Brace Yourself Games, Klei Entertainment", Crypt_of_the_NecroDancer_tags, 20);
cout << "317 insert" << endl;
//Inserting Binary Domain
string Binary_Domain_tags[18] = {"Action","Third-Person Shooter","Sci-fi","Cyberpunk","Robots","Third Person","Shooter","Transhumanism","Story Rich","Singleplayer","Adventure","Futuristic","Co-op","Multiplayer","Controller","Dystopian ","Atmospheric","RPG"};
g.insert_game("Binary Domain", "Devil's Details", "SEGA", Binary_Domain_tags, 18);
cout << "318 insert" << endl;
//Inserting Planet Coaster
string Planet_Coaster_tags[20] = {"Simulation","Building","Management","Sandbox","Singleplayer","Strategy","Family Friendly","Great Soundtrack","Funny","Realistic","Atmospheric","Casual","Open World","Colorful","Base-Building","Multiplayer","Adventure","Economy","Action","First-Person"};
g.insert_game("Planet Coaster", "Frontier Developments", "Frontier Developments", Planet_Coaster_tags, 20);
cout << "319 insert" << endl;
//Inserting FINAL FANTASY XIII
string FINAL_FANTASY_XIII_tags[20] = {"JRPG","Linear","RPG","Female Protagonist","Great Soundtrack","Singleplayer","Fantasy","Story Rich","Adventure","Cinematic","Sci-fi","Action","Third Person","Atmospheric","Turn-Based Combat","Action RPG","Futuristic","Turn-Based","Strategy","Difficult"};
g.insert_game("FINAL FANTASY XIII", "SQUARE ENIX", "SQUARE ENIX", FINAL_FANTASY_XIII_tags, 20);
cout << "320 insert" << endl;
//Inserting BEEP
string BEEP_tags[20] = {"Indie","Platformer","Adventure","Puzzle","Singleplayer","Physics","2D","Action","Strategy","Shoot 'Em Up","Anime","Great Soundtrack","Shooter","Difficult","Multiplayer","Survival","First-Person","Horror","Casual","Gore"};
g.insert_game("BEEP", "Big Fat Alien", "Big Fat Alien, Sunken Treasure Games", BEEP_tags, 20);
cout << "321 insert" << endl;
//Inserting DRAGON BALL XENOVERSE
string DRAGON_BALL_XENOVERSE_tags[20] = {"Anime","Fighting","Action","Multiplayer","Character Customization","Co-op","Adventure","Singleplayer","Online Co-Op","RPG","Third Person","Fantasy","Dragons","Beat 'em up","Controller","Open World","Action RPG","Funny","Fast-Paced","Local Co-Op"};
g.insert_game("DRAGON BALL XENOVERSE", "DIMPS", "BANDAI NAMCO Entertainment", DRAGON_BALL_XENOVERSE_tags, 20);
cout << "322 insert" << endl;
//Inserting Run and Fire
string Run_and_Fire_tags[20] = {"Free to Play","Multiplayer","FPS","Action","Zombies","Shooter","First-Person","Survival","Open World","Massively Multiplayer","Horror","Singleplayer","Co-op","Adventure","Crafting","Sandbox","War","Nudity","Futuristic","Controller"};
g.insert_game("Run and Fire", "Galaxy Gate", "NIKITA ONLINE", Run_and_Fire_tags, 20);
cout << "323 insert" << endl;
//Inserting Gone Home
string Gone_Home_tags[20] = {"Walking Simulator","Short","Indie","Exploration","Atmospheric","First-Person","Story Rich","Female Protagonist","Adventure","Singleplayer","Great Soundtrack","Interactive Fiction","1990's","Mystery","Romance","Narration","Point & Click","Realistic","Relaxing","Psychological Horror"};
g.insert_game("Gone Home", "The Fullbright Company", "The Fullbright Company", Gone_Home_tags, 20);
cout << "324 insert" << endl;
//Inserting Villagers and Heroes
string Villagers_and_Heroes_tags[20] = {"Free to Play","Massively Multiplayer","RPG","Multiplayer","Indie","Open World","Adventure","Crafting","Sandbox","MMORPG","Fantasy","Medieval","Action","Survival","Co-op","Magic","Funny","Casual","FPS","Shooter"};
g.insert_game("Villagers and Heroes", "Mad Otter Games", "Mad Otter Games", Villagers_and_Heroes_tags, 20);
cout << "325 insert" << endl;
//Inserting Velvet Sundown
string Velvet_Sundown_tags[19] = {"Free to Play","Multiplayer","RPG","Adventure","Indie","Nudity","Casual","Co-op","Open World","Funny","Massively Multiplayer","Walking Simulator","Simulation","Realistic","Mystery","Survival","Action","FPS","Singleplayer"};
g.insert_game("Velvet Sundown", "Tribe Studios", "Tribe Studios", Velvet_Sundown_tags, 19);
cout << "326 insert" << endl;
//Inserting Worms Ultimate Mayhem
string Worms_Ultimate_Mayhem_tags[14] = {"Strategy","Multiplayer","Funny","Turn-Based","Third Person","Comedy","Action","Turn-Based Strategy","Destruction","Local Co-Op","3D Vision","Singleplayer","Local Multiplayer","FPS"};
g.insert_game("Worms Ultimate Mayhem", "Team17 Digital Ltd", "Team17 Digital Ltd", Worms_Ultimate_Mayhem_tags, 14);
cout << "327 insert" << endl;
//Inserting Cthulhu Saves the World
string Cthulhu_Saves_the_World_tags[18] = {"RPG","Indie","Comedy","Lovecraftian","Retro","JRPG","Turn-Based","Fantasy","Funny","Singleplayer","Adventure","Pixel Graphics","Parody ","2D","Great Soundtrack","RPGMaker","Action","Memes"};
g.insert_game("Cthulhu Saves the World", "Zeboyd Games", "Zeboyd Games", Cthulhu_Saves_the_World_tags, 18);
cout << "328 insert" << endl;
//Inserting Depth
string Depth_tags[20] = {"Action","Multiplayer","Gore","Team-Based","Underwater","Survival","Horror","PvP","Co-op","FPS","Shooter","Hunting","First-Person","Survival Horror","Atmospheric","Simulation","Indie","Exploration","Adventure","Singleplayer"};
g.insert_game("Depth", "Digital Confectioners", "Digital Confectioners", Depth_tags, 20);
cout << "329 insert" << endl;
//Inserting ASTRONEER
string ASTRONEER_tags[20] = {"Early Access","Space","Open World","Exploration","Multiplayer","Survival","Sandbox","Adventure","Base-Building","Co-op","Building","Crafting","Sci-fi","Third Person","Atmospheric","Singleplayer","Colorful","Great Soundtrack","Indie","Voxel"};
g.insert_game("ASTRONEER", "System Era Softworks", "System Era Softworks", ASTRONEER_tags, 20);
cout << "330 insert" << endl;
//Inserting Nidhogg
string Nidhogg_tags[20] = {"Local Multiplayer","Indie","Action","Fighting","Swordplay","Multiplayer","2D Fighter","Pixel Graphics","PvP","2D","Sports","Fast-Paced","Competitive","Controller","Funny","Local Co-Op","Co-op","GameMaker","Platformer","Great Soundtrack"};
g.insert_game("Nidhogg", "Messhof", "Messhof", Nidhogg_tags, 20);
cout << "331 insert" << endl;
//Inserting Mount Your Friends
string Mount_Your_Friends_tags[20] = {"Comedy","Funny","Physics","Multiplayer","Sports","Indie","Local Multiplayer","Competitive","Simulation","Co-op","Casual","2D","Local Co-Op","4 Player Local","Mature","Online Co-Op","Singleplayer","Action","Psychological Horror","NSFW"};
g.insert_game("Mount Your Friends", "Stegersaurus Software Inc.", "Stegersaurus Software Inc.", Mount_Your_Friends_tags, 20);
cout << "332 insert" << endl;
//Inserting Batla
string Batla_tags[20] = {"Free to Play","FPS","Multiplayer","Robots","Shooter","Action","Psychological Horror","Mature","Violent","Gore","Horror","First-Person","Funny","Fast-Paced","Story Rich","Crime","Survival","Atmospheric","Adventure","Open World"};
g.insert_game("Batla", "[geim].pro", "Abyss Lights Studio LLP", Batla_tags, 20);
cout << "333 insert" << endl;
//Inserting Child of Light
string Child_of_Light_tags[20] = {"RPG","Fantasy","Great Soundtrack","Female Protagonist","Turn-Based","Platformer","Adventure","2D","Atmospheric","Story Rich","Hand-drawn","Singleplayer","Local Co-Op","Side Scroller","Cute","Turn-Based Strategy","Indie","Casual","Action","Metroidvania"};
g.insert_game("Child of Light", "Ubisoft Montréal", "Ubisoft", Child_of_Light_tags, 20);
cout << "334 insert" << endl;
//Inserting Deus Ex  Mankind Divided
string Deus_Ex_Mankind_Divided_tags[20] = {"Cyberpunk","Stealth","Action","Sci-fi","Story Rich","RPG","Atmospheric","Illuminati","Futuristic","Great Soundtrack","Singleplayer","First-Person","FPS","Shooter","Conspiracy","Open World","Dystopian ","Transhumanism","Adventure","Third Person"};
g.insert_game("Deus Ex  Mankind Divided", "Eidos Montreal, Feral Interactive (Linux)", "Square Enix, Feral Interactive (Linux)", Deus_Ex_Mankind_Divided_tags, 20);
cout << "335 insert" << endl;
//Inserting Dragon Nest
string Dragon_Nest_tags[11] = {"Free to Play","Action","RPG","Anime","Massively Multiplayer","MMORPG","Fantasy","Hack and Slash","Dragons","Multiplayer","Adventure"};
g.insert_game("Dragon Nest", "Eyedentity Games Inc.", "Eyedentity Games Inc.", Dragon_Nest_tags, 11);
cout << "336 insert" << endl;
//Inserting Pressure
string Pressure_tags[19] = {"Racing","Action","Indie","Casual","Arcade","Steampunk","Local Co-Op","Co-op","Multiplayer","Controller","Fantasy","Shooter","Funny","Singleplayer","Comedy","Great Soundtrack","Atmospheric","Crafting","Shoot 'Em Up"};
g.insert_game("Pressure", "Chasing Carrots", "Chasing Carrots", Pressure_tags, 19);
cout << "337 insert" << endl;
//Inserting Homeworld Remastered Collection
string Homeworld_Remastered_Collection_tags[20] = {"Space","Strategy","RTS","Sci-fi","Classic","Great Soundtrack","Story Rich","Remake","Atmospheric","Multiplayer","Simulation","Tactical","Singleplayer","Moddable","Action","4X","Female Protagonist","Adventure","Futuristic","Survival"};
g.insert_game("Homeworld Remastered Collection", "Gearbox Software, Aspyr (Mac)", "Gearbox Software, Aspyr (Mac)", Homeworld_Remastered_Collection_tags, 20);
cout << "338 insert" << endl;
//Inserting High Octane Drift
string High_Octane_Drift_tags[12] = {"Early Access","Racing","Free to Play","Multiplayer","Simulation","Sports","Driving","Massively Multiplayer","Action","Open World","Controller","Singleplayer"};
g.insert_game("High Octane Drift", "Cruderocks", "Cruderocks", High_Octane_Drift_tags, 12);
cout << "339 insert" << endl;
//Inserting Tales from the Borderlands
string Tales_from_the_Borderlands_tags[20] = {"Comedy","Adventure","Story Rich","Choices Matter","Episodic","Singleplayer","Point & Click","Funny","Sci-fi","Choose Your Own Adventure","Action","Atmospheric","Quick-Time Events","Great Soundtrack","Memes","Dark Humor","Female Protagonist","Casual","Visual Novel","RPG"};
g.insert_game("Tales from the Borderlands", "Telltale Games", "Telltale Games", Tales_from_the_Borderlands_tags, 20);
cout << "340 insert" << endl;
//Inserting FINAL FANTASY VIII
string FINAL_FANTASY_VIII_tags[18] = {"JRPG","RPG","Classic","Singleplayer","Great Soundtrack","Turn-Based","Story Rich","Fantasy","Card Game","Sci-fi","Adventure","Open World","Retro","Atmospheric","Romance","Action","1990's","Controller"};
g.insert_game("FINAL FANTASY VIII", "SQUARE ENIX", "Square Enix", FINAL_FANTASY_VIII_tags, 18);
cout << "341 insert" << endl;
//Inserting Euro Truck Simulator
string Euro_Truck_Simulator_tags[13] = {"Simulation","Driving","Open World","Multiplayer","Singleplayer","Indie","Realistic","Relaxing","First-Person","TrackIR","Moddable","Adventure","Third Person"};
g.insert_game("Euro Truck Simulator", "SCS Software", "SCS Software", Euro_Truck_Simulator_tags, 13);
cout << "342 insert" << endl;
//Inserting Continent of the Ninth Seal
string Continent_of_the_Ninth_Seal_tags[11] = {"Free to Play","RPG","Massively Multiplayer","Action","MMORPG","Hack and Slash","Adventure","Open World","Multiplayer","PvP","Character Customization"};
g.insert_game("Continent of the Ninth Seal", "Cloud 9 Studio", "Webzen", Continent_of_the_Ninth_Seal_tags, 11);
cout << "343 insert" << endl;
//Inserting Anarchy Arcade
string Anarchy_Arcade_tags[20] = {"Early Access","Free to Play","Sandbox","Multiplayer","Indie","Simulation","Casual","Arcade","Funny","Adventure","VR","Singleplayer","Co-op","Action","Open World","First-Person","3D Vision","Comedy","Building","Survival"};
g.insert_game("Anarchy Arcade", "Elijah Newman-Gomez", "Elijah Newman-Gomez", Anarchy_Arcade_tags, 20);
cout << "344 insert" << endl;
//Inserting Streamline
string Streamline_tags[6] = {"Early Access","Action","Indie","Sports","Parkour","Multiplayer"};
g.insert_game("Streamline", "Proletariat Inc.", "Proletariat Inc.", Streamline_tags, 6);
cout << "345 insert" << endl;
//Inserting Lucius
string Lucius_tags[20] = {"Horror","Adventure","Indie","Villain Protagonist","Nudity","Action","Gore","Puzzle","Singleplayer","Third Person","Stealth","Dark","Psychological Horror","Atmospheric","Mature","Point & Click","Difficult","Funny","Open World","Story Rich"};
g.insert_game("Lucius", "Shiver Games", "Shiver Games", Lucius_tags, 20);
cout << "346 insert" << endl;
//Inserting Beat Hazard
string Beat_Hazard_tags[20] = {"Music","Indie","Shoot 'Em Up","Action","Music-Based Procedural Generation","Twin Stick Shooter","Rhythm","Casual","Colorful","Co-op","Shooter","Multiplayer","Bullet Hell","Singleplayer","Arcade","Local Co-Op","Replay Value","Space","Great Soundtrack","2D"};
g.insert_game("Beat Hazard", "Cold Beam Games", "Cold Beam Games", Beat_Hazard_tags, 20);
cout << "347 insert" << endl;
//Inserting Firewatch
string Firewatch_tags[20] = {"Adventure","Atmospheric","Walking Simulator","Story Rich","Mystery","First-Person","Exploration","Singleplayer","Open World","Indie","Great Soundtrack","Short","Comedy","Funny","Drama","Colorful","Mature","Horror","Thriller","Casual"};
g.insert_game("Firewatch", "Campo Santo", "Panic Inc., Campo Santo", Firewatch_tags, 20);
cout << "348 insert" << endl;
//Inserting Grim Fandango Remastered
string Grim_Fandango_Remastered_tags[18] = {"Adventure","Classic","Point & Click","Comedy","Story Rich","Noir","Cult Classic","Great Soundtrack","Remake","Singleplayer","Atmospheric","Puzzle","Retro","Funny","1990's","Dark Humor","Indie","Third Person"};
g.insert_game("Grim Fandango Remastered", "Double Fine Productions", "Double Fine Productions", Grim_Fandango_Remastered_tags, 18);
cout << "349 insert" << endl;
//Inserting Lords Of The Fallen
string Lords_Of_The_Fallen_tags[18] = {"RPG","Action","Action RPG","Dark Fantasy","Singleplayer","Third Person","Adventure","Difficult","Fantasy","Open World","Atmospheric","Hack and Slash","Medieval","Story Rich","Great Soundtrack","Casual","Horror","Magic"};
g.insert_game("Lords Of The Fallen", "CI Games, Deck 13", "CI Games", Lords_Of_The_Fallen_tags, 18);
cout << "350 insert" << endl;
//Inserting Breath of Death VII
string Breath_of_Death_VII_tags[16] = {"RPG","Indie","Comedy","JRPG","Retro","Pixel Graphics","Singleplayer","Turn-Based","Funny","Parody ","Short","Adventure","Fantasy","2D","RPGMaker","Horror"};
g.insert_game("Breath of Death VII", "Zeboyd Games", "Zeboyd Games", Breath_of_Death_VII_tags, 16);
cout << "351 insert" << endl;
//Inserting Age of Wonders III
string Age_of_Wonders_III_tags[20] = {"Strategy","Turn-Based Strategy","Fantasy","RPG","4X","Turn-Based","Multiplayer","Singleplayer","Tactical","Co-op","Adventure","Hex Grid","Great Soundtrack","Grand Strategy","Classic","Atmospheric","Action","Moddable","Female Protagonist","Indie"};
g.insert_game("Age of Wonders III", "Triumph Studios", "Triumph Studios", Age_of_Wonders_III_tags, 20);
cout << "352 insert" << endl;
//Inserting Space Pirates and Zombies
string Space_Pirates_and_Zombies_tags[17] = {"Space","Action","Indie","Strategy","Sci-fi","Top-Down","RPG","Zombies","Procedural Generation","Singleplayer","Open World","2D","Pirates","Exploration","Shooter","Sandbox","Adventure"};
g.insert_game("Space Pirates and Zombies", "MinMax Games Ltd.", "MinMax Games Ltd.", Space_Pirates_and_Zombies_tags, 17);
cout << "353 insert" << endl;
//Inserting Viridi
string Viridi_tags[11] = {"Free to Play","Relaxing","Simulation","Casual","Indie","Singleplayer","Atmospheric","Sandbox","Great Soundtrack","Family Friendly","Cute"};
g.insert_game("Viridi", "Ice Water Games", "Ice Water Games", Viridi_tags, 11);
cout << "354 insert" << endl;
//Inserting The Plan
string The_Plan_tags[20] = {"Free to Play","Indie","Atmospheric","Short","Casual","Simulation","Singleplayer","Exploration","Great Soundtrack","Music","Adventure","Experimental","Flight","Relaxing","2D","Horror","Funny","Walking Simulator","Survival","Platformer"};
g.insert_game("The Plan", "Krillbite Studio", "Krillbite Studio", The_Plan_tags, 20);
cout << "355 insert" << endl;
//Inserting Yet Another Zombie Defense
string Yet_Another_Zombie_Defense_tags[20] = {"Zombies","Survival","Multiplayer","Indie","Action","Co-op","Strategy","Tower Defense","Shooter","Casual","Online Co-Op","Top-Down","Horror","Isometric","Singleplayer","Arcade","Difficult","Funny","Walking Simulator","Local Co-Op"};
g.insert_game("Yet Another Zombie Defense", "Awesome Games Studio", "Awesome Games Studio", Yet_Another_Zombie_Defense_tags, 20);
cout << "356 insert" << endl;
//Inserting Pid
string Pid_tags[13] = {"Indie","Platformer","Adventure","Puzzle","Difficult","Singleplayer","Local Co-Op","Co-op","Great Soundtrack","Atmospheric","2D","Side Scroller","Local Multiplayer"};
g.insert_game("Pid", "Might and Delight", "Might and Delight", Pid_tags, 13);
cout << "357 insert" << endl;
//Inserting BRINK
string BRINK_tags[20] = {"FPS","Action","Parkour","Multiplayer","Character Customization","Shooter","Class-Based","Gun Customization","First-Person","Co-op","Singleplayer","Sci-fi","Team-Based","Online Co-Op","Tactical","Adventure","Open World","Casual","Atmospheric","Post-apocalyptic"};
g.insert_game("BRINK", "Splash Damage", "Bethesda Softworks", BRINK_tags, 20);
cout << "358 insert" << endl;
//Inserting HITMAN
string HITMAN_tags[20] = {"Stealth","Action","Assassin","Third Person","Singleplayer","Tactical","Shooter","Atmospheric","Open World","Crime","Sandbox","Strategy","Episodic","Story Rich","Third-Person Shooter","Great Soundtrack","Adventure","Heist","Illuminati","Nudity"};
g.insert_game("HITMAN", "Io-Interactive, Feral Interactive (Linux)", "Square Enix, Feral Interactive (Linux)", HITMAN_tags, 20);
cout << "359 insert" << endl;
//Inserting You Have to Win the Game
string You_Have_to_Win_the_Game_tags[19] = {"Free to Play","Retro","Platformer","Indie","2D","Difficult","Pixel Graphics","Singleplayer","Metroidvania","Action","Adventure","Exploration","Arcade","Great Soundtrack","Classic","Side Scroller","Open World","Controller","Funny"};
g.insert_game("You Have to Win the Game", "Minor Key Games", "Minor Key Games", You_Have_to_Win_the_Game_tags, 19);
cout << "360 insert" << endl;
//Inserting Serena
string Serena_tags[15] = {"Horror","Indie","Free to Play","Point & Click","Adventure","Story Rich","Psychological Horror","Short","Dark","First-Person","Atmospheric","Mystery","Singleplayer","Puzzle","Walking Simulator"};
g.insert_game("Serena", "Senscape", "Senscape", Serena_tags, 15);
cout << "361 insert" << endl;
//Inserting Geometry Dash
string Geometry_Dash_tags[20] = {"Difficult","Music","Great Soundtrack","Level Editor","2D","Rhythm","Colorful","Singleplayer","Platformer","Character Customization","Arcade","Indie","Action","Funny","Side Scroller","Family Friendly","Casual","Strategy","Adventure","Multiplayer"};
g.insert_game("Geometry Dash", "RobTop Games", "RobTop Games", Geometry_Dash_tags, 20);
cout << "362 insert" << endl;
//Inserting Verdun
string Verdun_tags[20] = {"World War I","FPS","Multiplayer","Historical","War","Realistic","Action","Shooter","First-Person","Military","Tactical","Simulation","Strategy","Team-Based","Indie","Co-op","Atmospheric","Singleplayer","Adventure","Gore"};
g.insert_game("Verdun", "M2H, Blackmill Games", "Blackmill Games, M2H", Verdun_tags, 20);
cout << "363 insert" << endl;
//Inserting Jamestown
string Jamestown_tags[20] = {"Shoot 'Em Up","Bullet Hell","Local Co-Op","Indie","Steampunk","Arcade","Action","4 Player Local","Difficult","Local Multiplayer","2D","Retro","Co-op","Great Soundtrack","Pixel Graphics","Mars","Alternate History","Shooter","Singleplayer","Sci-fi"};
g.insert_game("Jamestown", "Final Form Games", "Final Form Games", Jamestown_tags, 20);
cout << "364 insert" << endl;
//Inserting Cogs
string Cogs_tags[7] = {"Puzzle","Indie","Casual","Singleplayer","Steampunk","Family Friendly","Difficult"};
g.insert_game("Cogs", "Lazy 8 Studios", "", Cogs_tags, 7);
cout << "365 insert" << endl;
//Inserting Mortal Online
string Mortal_Online_tags[20] = {"Free to Play","Massively Multiplayer","Open World","Sandbox","RPG","First-Person","Action","Survival","PvP","MMORPG","Medieval","Multiplayer","Indie","Nudity","Adventure","Crafting","FPS","Co-op","Zombies","Horror"};
g.insert_game("Mortal Online", "Star Vault AB", "Star Vault AB", Mortal_Online_tags, 20);
cout << "366 insert" << endl;
//Inserting The Culling Of The Cows
string The_Culling_Of_The_Cows_tags[11] = {"Indie","Casual","Action","Strategy","Tower Defense","Zombies","Gore","Violent","Shooter","2D","Side Scroller"};
g.insert_game("The Culling Of The Cows", "Decaying Logic", "KISS ltd", The_Culling_Of_The_Cows_tags, 11);
cout << "367 insert" << endl;
//Inserting Polarity
string Polarity_tags[20] = {"Puzzle","Indie","First-Person","Local Co-Op","Adventure","Strategy","Singleplayer","Action","Platformer","Sci-fi","Great Soundtrack","FPS","Open World","Space","Shooter","Sandbox","Horror","Multiplayer","2D","Retro"};
g.insert_game("Polarity", "Bluebutton Games", "Bluebutton Games", Polarity_tags, 20);
cout << "368 insert" << endl;
//Inserting Prime World
string Prime_World_tags[20] = {"Free to Play","MOBA","Strategy","Multiplayer","RPG","Massively Multiplayer","Action","Fantasy","Team-Based","MMORPG","Co-op","PvP","Online Co-Op","Competitive","Action RPG","Replay Value","Character Customization","e-sports","RTS","Steampunk"};
g.insert_game("Prime World", "Nival", "Nival", Prime_World_tags, 20);
cout << "369 insert" << endl;
//Inserting Amazing World
string Amazing_World_tags[20] = {"Free to Play","Massively Multiplayer","Cute","Family Friendly","Open World","Illuminati","Action","Adventure","RPG","Multiplayer","Perma Death","Realistic","Parkour","Dating Sim","Stealth","Casual","Sandbox","MMORPG","Funny","Co-op"};
g.insert_game("Amazing World", "Ganz", "Ganz", Amazing_World_tags, 20);
cout << "370 insert" << endl;
//Inserting Slime Rancher
string Slime_Rancher_tags[20] = {"Early Access","Cute","Exploration","First-Person","Colorful","Adventure","Singleplayer","Open World","Funny","Simulation","Fantasy","Sandbox","Management","Casual","Indie","Great Soundtrack","Action","Female Protagonist","FPS","Anime"};
g.insert_game("Slime Rancher", "Monomi Park", "Monomi Park", Slime_Rancher_tags, 20);
cout << "371 insert" << endl;
//Inserting American Truck Simulator
string American_Truck_Simulator_tags[20] = {"Simulation","Driving","Open World","America","Realistic","Multiplayer","Singleplayer","Relaxing","Moddable","First-Person","Exploration","Atmospheric","Economy","Adventure","Indie","Casual","Family Friendly","Third Person","Management","Action"};
g.insert_game("American Truck Simulator", "SCS Software", "SCS Software", American_Truck_Simulator_tags, 20);
cout << "372 insert" << endl;
//Inserting One Finger Death Punch
string One_Finger_Death_Punch_tags[17] = {"Action","Fast-Paced","Indie","Beat 'em up","Fighting","Singleplayer","Casual","2D","Martial Arts","Difficult","Arcade","Great Soundtrack","Rhythm","Mouse only","Blood","Gore","Funny"};
g.insert_game("One Finger Death Punch", "Silver Dollar Games", "Silver Dollar Games", One_Finger_Death_Punch_tags, 17);
cout << "373 insert" << endl;
//Inserting Dungeons of Dredmor
string Dungeons_of_Dredmor_tags[20] = {"Rogue-like","Turn-Based","RPG","Indie","Dungeon Crawler","Comedy","Perma Death","Replay Value","Fantasy","Singleplayer","Funny","Casual","Rogue-lite","Crafting","Procedural Generation","Moddable","2D","Difficult","Adventure","Top-Down"};
g.insert_game("Dungeons of Dredmor", "Gaslamp Games, Inc.", "Gaslamp Games, Inc.", Dungeons_of_Dredmor_tags, 20);
cout << "374 insert" << endl;
//Inserting Waveform
string Waveform_tags[20] = {"Indie","Strategy","Puzzle","Great Soundtrack","Casual","Singleplayer","Anime","Action","Arcade","Adventure","Shoot 'Em Up","Difficult","Space","Sci-fi","2D","Atmospheric","Shooter","First-Person","Zombies","Gore"};
g.insert_game("Waveform", "Eden Industries", "Eden Industries", Waveform_tags, 20);
cout << "375 insert" << endl;
//Inserting The Culling
string The_Culling_tags[20] = {"Early Access","Survival","Multiplayer","Action","First-Person","Crafting","Open World","PvP","Co-op","Gore","FPS","Indie","Violent","Blood","Strategy","Competitive","Atmospheric","Adventure","Shooter","Massively Multiplayer"};
g.insert_game("The Culling", "Xaviant", "Xaviant Games", The_Culling_tags, 20);
cout << "376 insert" << endl;
//Inserting EasyAntiCheat eSports
string EasyAntiCheat_eSports_tags[2] = {"Utilities","Free to Play"};
g.insert_game("EasyAntiCheat eSports", "EasyAntiCheat Ltd", "EasyAntiCheat Ltd", EasyAntiCheat_eSports_tags, 2);
cout << "377 insert" << endl;
//Inserting Crayon Physics Deluxe
string Crayon_Physics_Deluxe_tags[9] = {"Indie","Casual","Puzzle","Physics","Family Friendly","Touch-Friendly","Singleplayer","2D","Cute"};
g.insert_game("Crayon Physics Deluxe", "Kloonigames", "Kloonigames", Crayon_Physics_Deluxe_tags, 9);
cout << "378 insert" << endl;
//Inserting The Lab
string The_Lab_tags[9] = {"Free to Play","VR","Action","First-Person","Singleplayer","Adventure","Funny","Casual","VR Only"};
g.insert_game("The Lab", "Valve", "Valve", The_Lab_tags, 9);
cout << "379 insert" << endl;
//Inserting RimWorld
string RimWorld_tags[20] = {"Early Access","Base-Building","Survival","Strategy","Sandbox","Simulation","Building","Management","Singleplayer","Sci-fi","Crafting","Open World","Indie","2D","Moddable","Pixel Graphics","Action","Atmospheric","Space","Great Soundtrack"};
g.insert_game("RimWorld", "Ludeon Studios", "Ludeon Studios", RimWorld_tags, 20);
cout << "380 insert" << endl;
//Inserting Sid Meiers Ace Patrol
string Sid_Meiers_Ace_Patrol_tags[8] = {"Strategy","Casual","Turn-Based","Turn-Based Strategy","World War I","Singleplayer","Historical","Touch-Friendly"};
g.insert_game("Sid Meiers Ace Patrol", "Firaxis Games", "2K Games", Sid_Meiers_Ace_Patrol_tags, 8);
cout << "381 insert" << endl;
//Inserting DiRT Rally
string DiRT_Rally_tags[20] = {"Racing","Simulation","Offroad","Realistic","Driving","Multiplayer","Singleplayer","Difficult","Sports","VR","First-Person","Action","TrackIR","Atmospheric","3D Vision","Fast-Paced","Family Friendly","Open World","Co-op","Indie"};
g.insert_game("DiRT Rally", "Codemasters Racing Studio, Feral Interactive (Linux)", "Codemasters, Feral Interactive (Linux)", DiRT_Rally_tags, 20);
cout << "382 insert" << endl;
//Inserting Mabinogi
string Mabinogi_tags[15] = {"Anime","Free to Play","Massively Multiplayer","RPG","MMORPG","Action","Casual","Simulation","Adventure","Open World","Fantasy","Sandbox","Multiplayer","Nudity","Action RPG"};
g.insert_game("Mabinogi", "NEXON Korea Corp.", "Nexon America Inc.", Mabinogi_tags, 15);
cout << "383 insert" << endl;
//Inserting LEGO The Lord of the Rings
string LEGO_The_Lord_of_the_Rings_tags[20] = {"LEGO","Adventure","Action","Local Co-Op","Comedy","Fantasy","Open World","Family Friendly","Singleplayer","Co-op","Funny","Casual","Platformer","Local Multiplayer","Third Person","Puzzle","Split Screen","Controller","Multiplayer","3D Vision"};
g.insert_game("LEGO The Lord of the Rings", "Traveller's Tales", "Warner Bros. Interactive Entertainment", LEGO_The_Lord_of_the_Rings_tags, 20);
cout << "384 insert" << endl;
//Inserting The Vanishing of Ethan Carter
string The_Vanishing_of_Ethan_Carter_tags[20] = {"Detective","Mystery","Atmospheric","Walking Simulator","First-Person","Exploration","Adventure","Horror","Singleplayer","Supernatural","Story Rich","Lovecraftian","Indie","Puzzle","Open World","Great Soundtrack","Short","Psychological Horror","Gore","Point & Click"};
g.insert_game("The Vanishing of Ethan Carter", "The Astronauts", "The Astronauts", The_Vanishing_of_Ethan_Carter_tags, 20);
cout << "385 insert" << endl;
//Inserting LEGO Worlds
string LEGO_Worlds_tags[20] = {"LEGO","Open World","Building","Sandbox","Adventure","Multiplayer","Exploration","Family Friendly","Singleplayer","Third Person","Funny","Destruction","Action","Simulation","Comedy","Co-op","Casual","Walking Simulator","Voxel","Survival"};
g.insert_game("LEGO Worlds", "TT Games, Traveller's Tales", "Warner Bros. Interactive Entertainment", LEGO_Worlds_tags, 20);
cout << "386 insert" << endl;
//Inserting RPG Maker VX Ace
string RPG_Maker_VX_Ace_tags[17] = {"Game Development","RPG","RPGMaker","Design & Illustration","Software","Anime","GameMaker","Web Publishing","Fantasy","Adventure","Sandbox","2D","Programming","JRPG","Pixel Graphics","Education","Action"};
g.insert_game("RPG Maker VX Ace", "KADOKAWA", "Degica", RPG_Maker_VX_Ace_tags, 17);
cout << "387 insert" << endl;
//Inserting Miscreated
string Miscreated_tags[20] = {"Early Access","Survival","Open World","Multiplayer","Zombies","Post-apocalyptic","Crafting","Massively Multiplayer","PvP","Action","Sandbox","Co-op","Simulation","FPS","First-Person","Indie","Horror","Walking Simulator","Singleplayer","MMORPG"};
g.insert_game("Miscreated", "Entrada Interactive LLC", "Entrada Interactive LLC", Miscreated_tags, 20);
cout << "388 insert" << endl;
//Inserting Grand Theft Auto
string Grand_Theft_Auto_tags[7] = {"Action","Classic","Open World","Singleplayer","2D","Adventure","Top-Down"};
g.insert_game("Grand Theft Auto", "Rockstar North", "Rockstar Games", Grand_Theft_Auto_tags, 7);
cout << "389 insert" << endl;
//Inserting Piercing Blow
string Piercing_Blow_tags[14] = {"Free to Play","Action","Shooter","FPS","Multiplayer","Massively Multiplayer","First-Person","Singleplayer","Open World","Co-op","Team-Based","Controller","Adventure","Great Soundtrack"};
g.insert_game("Piercing Blow", "Zepetto Co.", "Zepetto U.S.A. Inc.", Piercing_Blow_tags, 14);
cout << "390 insert" << endl;
//Inserting Really Big Sky
string Really_Big_Sky_tags[14] = {"Indie","Action","Shoot 'Em Up","Space","Twin Stick Shooter","Shooter","Bullet Hell","Arcade","Side Scroller","Local Co-Op","Singleplayer","Great Soundtrack","Retro","2D"};
g.insert_game("Really Big Sky", "Boss Baddie", "Ripstone", Really_Big_Sky_tags, 14);
cout << "391 insert" << endl;
//Inserting Kingdom Wars
string Kingdom_Wars_tags[17] = {"Strategy","Free to Play","RTS","Massively Multiplayer","RPG","Indie","Building","Medieval","Fantasy","Multiplayer","Simulation","Co-op","MMORPG","Singleplayer","City Builder","Action","War"};
g.insert_game("Kingdom Wars", "Reverie World Studios, INC", "Reverie World Studios, INC", Kingdom_Wars_tags, 17);
cout << "392 insert" << endl;
//Inserting Battlerite
string Battlerite_tags[20] = {"Early Access","PvP","Multiplayer","Competitive","MOBA","Action","Arena Shooter","Fast-Paced","Fighting","Team-Based","Top-Down","Strategy","Great Soundtrack","Difficult","e-sports","Hack and Slash","Beat 'em up","Top-Down Shooter","Free to Play","Atmospheric"};
g.insert_game("Battlerite", "Stunlock Studios", "Stunlock Studios", Battlerite_tags, 20);
cout << "393 insert" << endl;
//Inserting The Forgotten Ones
string The_Forgotten_Ones_tags[20] = {"Horror","Free to Play","Adventure","Multiplayer","Survival","Action","FPS","Survival Horror","Indie","Shooter","Singleplayer","First-Person","Co-op","Zombies","World War II","Walking Simulator","Open World","Mod","Psychological Horror","Family Friendly"};
g.insert_game("The Forgotten Ones", "Bernt Andreas Eide", "Bernt Andreas Eide", The_Forgotten_Ones_tags, 20);
cout << "394 insert" << endl;
//Inserting Revolution Ace
string Revolution_Ace_tags[20] = {"Shoot 'Em Up","Action","Indie","Bullet Hell","Anime","Arcade","Shooter","Local Co-Op","Adventure","Multiplayer","Singleplayer","Top-Down","Retro","2D","Space","Sci-fi","Horror","Zombies","Gore","Platformer"};
g.insert_game("Revolution Ace", "Laser Guided Games", "Laser Guided Games", Revolution_Ace_tags, 20);
cout << "395 insert" << endl;
//Inserting Time of Dragons
string Time_of_Dragons_tags[18] = {"Dragons","Free to Play","Flight","Massively Multiplayer","Action","Shooter","Multiplayer","Simulation","Indie","Open World","PvP","Adventure","Sci-fi","MMORPG","FPS","Co-op","Singleplayer","MOBA"};
g.insert_game("Time of Dragons", "4 I Lab", "4 I Lab", Time_of_Dragons_tags, 18);
cout << "396 insert" << endl;
//Inserting Broken Age
string Broken_Age_tags[20] = {"Point & Click","Adventure","Indie","Kickstarter","Comedy","Story Rich","Casual","Female Protagonist","Funny","Crowdfunded","Episodic","Great Soundtrack","Sci-fi","Singleplayer","Short","Puzzle","Hand-drawn","Fantasy","2D","Touch-Friendly"};
g.insert_game("Broken Age", "Double Fine Productions", "Double Fine Productions", Broken_Age_tags, 20);
cout << "397 insert" << endl;
//Inserting Red Faction
string Red_Faction_tags[10] = {"Action","FPS","Sci-fi","Destruction","Classic","Mars","Shooter","Singleplayer","First-Person","Multiplayer"};
g.insert_game("Red Faction", "Volition, Inc.", "THQ Nordic", Red_Faction_tags, 10);
cout << "398 insert" << endl;
//Inserting Osmos
string Osmos_tags[11] = {"Indie","Casual","Puzzle","Singleplayer","Relaxing","Physics","Great Soundtrack","Strategy","Difficult","2D","Atmospheric"};
g.insert_game("Osmos", "Hemisphere Games", "Hemisphere Games", Osmos_tags, 11);
cout << "399 insert" << endl;
//Inserting Hearts of Iron IV
string Hearts_of_Iron_IV_tags[20] = {"Strategy","World War II","Grand Strategy","Historical","Military","War","Alternate History","Multiplayer","Real-Time with Pause","Simulation","Singleplayer","RTS","Tactical","Diplomacy","Sandbox","Co-op","Open World","Great Soundtrack","Action","Casual"};
g.insert_game("Hearts of Iron IV", "Paradox Development Studio", "Paradox Interactive", Hearts_of_Iron_IV_tags, 20);
cout << "400 insert" << endl;
//Inserting Duelyst
string Duelyst_tags[13] = {"Free to Play","Card Game","Strategy","Pixel Graphics","Turn-Based Tactics","Turn-Based Strategy","Turn-Based Combat","Multiplayer","Indie","Tactical","Trading Card Game","Turn-Based","Anime"};
g.insert_game("Duelyst", "Counterplay Games Inc.", "Counterplay Games Inc.", Duelyst_tags, 13);
cout << "401 insert" << endl;
//Inserting GRID Autosport
string GRID_Autosport_tags[19] = {"Racing","Sports","Simulation","Driving","Multiplayer","Arcade","Split Screen","Singleplayer","Controller","Action","Realistic","Co-op","VR","Touch-Friendly","Adventure","Great Soundtrack","Atmospheric","Open World","Local Multiplayer"};
g.insert_game("GRID Autosport", "Codemasters Racing, Feral Interactive (Mac), Feral Interactive (Linux)", "Codemasters, Feral Interactive (Mac), Feral Interactive (Linux)", GRID_Autosport_tags, 19);
cout << "402 insert" << endl;
//Inserting Pool Nation FX Lite
string Pool_Nation_FX_Lite_tags[13] = {"Free to Play","Sports","Simulation","Multiplayer","Casual","Strategy","Indie","Pool","Singleplayer","Massively Multiplayer","Local Multiplayer","Relaxing","Physics"};
g.insert_game("Pool Nation FX Lite", "Cherry Pop Games", "Cherry Pop Games", Pool_Nation_FX_Lite_tags, 13);
cout << "403 insert" << endl;
//Inserting Space Hack
string Space_Hack_tags[8] = {"Action","RPG","Indie","Sci-fi","Action RPG","Hack and Slash","Singleplayer","Space"};
g.insert_game("Space Hack", "Rebelmind", "Meridian4", Space_Hack_tags, 8);
cout << "404 insert" << endl;
//Inserting Conan Exiles
string Conan_Exiles_tags[20] = {"Early Access","Survival","Open World","Nudity","Crafting","Building","Multiplayer","RPG","Massively Multiplayer","Violent","Action","Gore","Sandbox","PvP","Adventure","Exploration","Co-op","Online Co-Op","Singleplayer","Fantasy"};
g.insert_game("Conan Exiles", "Funcom", "Funcom", Conan_Exiles_tags, 20);
cout << "405 insert" << endl;
//Inserting The Evil Within
string The_Evil_Within_tags[20] = {"Horror","Survival Horror","Gore","Psychological Horror","Atmospheric","Action","Singleplayer","Third Person","Survival","Zombies","Dark","Stealth","Adventure","Third-Person Shooter","Difficult","Cinematic","Shooter","Story Rich","Walking Simulator","Open World"};
g.insert_game("The Evil Within", "Tango Gameworks", "Bethesda Softworks", The_Evil_Within_tags, 20);
cout << "406 insert" << endl;
//Inserting TOXIKK
string TOXIKK_tags[16] = {"Action","FPS","Multiplayer","Arena Shooter","Shooter","Free to Play","Indie","Fast-Paced","First-Person","Competitive","Singleplayer","Sci-fi","Classic","Open World","Massively Multiplayer","Co-op"};
g.insert_game("TOXIKK", "Reakktor Studios", "Reakktor Studios", TOXIKK_tags, 16);
cout << "407 insert" << endl;
//Inserting Eets Munchies
string Eets_Munchies_tags[10] = {"Indie","Casual","Puzzle","Strategy","Simulation","Platformer","Touch-Friendly","2D","Singleplayer","Family Friendly"};
g.insert_game("Eets Munchies", "Klei Entertainment", "Klei Entertainment", Eets_Munchies_tags, 10);
cout << "408 insert" << endl;
//Inserting Capsized
string Capsized_tags[14] = {"Action","Platformer","Indie","Sci-fi","Local Co-Op","2D","Shooter","Physics","Great Soundtrack","Local Multiplayer","Singleplayer","Space","Adventure","Metroidvania"};
g.insert_game("Capsized", "Alientrap", "Alientrap", Capsized_tags, 14);
cout << "409 insert" << endl;
//Inserting Gratuitous Space Battles
string Gratuitous_Space_Battles_tags[11] = {"Strategy","Indie","Simulation","Sci-fi","Space","2D","Sandbox","Singleplayer","Building","Moddable","Multiplayer"};
g.insert_game("Gratuitous Space Battles", "Positech Games", "Positech Games", Gratuitous_Space_Battles_tags, 11);
cout << "410 insert" << endl;
//Inserting Battle Islands
string Battle_Islands_tags[13] = {"Strategy","Free to Play","Multiplayer","World War II","Action","Casual","Singleplayer","Tower Defense","Co-op","War","Online Co-Op","Building","FPS"};
g.insert_game("Battle Islands", "DR Studios", "505 Games", Battle_Islands_tags, 13);
cout << "411 insert" << endl;

g.clean_games();

g.get_game("PAYDAY 2")->dijkstra( g.get_game("Age of Empires II HD"), g.get_size() );
cout << "===== Dijkstra =====" << endl;
Game *ggg = g.get_game("Age of Empires II HD");
while(ggg != NULL){
    cout << ggg->name << endl;
    ggg = ggg->pi;
}

g.get_game("PAYDAY 2")->print_adj();

}
