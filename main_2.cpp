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
/*
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

*/
}
