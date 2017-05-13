#include <iostream>
#include <string>

#include "graph.h"
#include "game.h"
#include "queue.h"
#include "tags.h"

using namespace std;

void interface(Graph &graph){
    cout << endl;

    cout << "______________________" << endl;
    cout << " Welcome to GIT GUD " << endl;
    cout << "----------------------" << endl;
    cout << "   \\  ^__^" << endl;
    cout << "    \\ (oo)\\_______ " << endl;
    cout << "      (__)\\       )\\/\\" << endl;
    cout << "	  ||----w |" << endl;
    cout << "	  ||     ||" << endl;

    cout << "Andres Barro\tA00226225" << endl;
    cout << "Arturo Fornes\tA01227071" << endl;
    cout << "Gerardo Juarez\tA00226860" << endl;
    string in = "";
    bool running = true;
    while(running){
        cout << endl;
        cout << "Options:" << endl;
        cout << "\t1.- Select" << endl;
        cout << "\t2.- Path between games" << endl;
        cout << "\t3.- Reccomendations" << endl;
        cout << "\t4.- Exit" << endl;
        cout << endl;
        cout << "Select an option: ";
        getline(cin, in);
        cin.ignore();
        cout << endl;

        switch(in[0]){
        case '1':
        {
            bool select = true;
            while(select){
                cout << endl;
                cout << "Options:" << endl;
                cout << "\t1.- Names" << endl;
                cout << "\t2.- Tags" << endl;
                cout << "\t3.- Developers" << endl;
                cout << "\t4.- Publishers" << endl;
                cout << "\t5.- Top Connected" << endl;
                cout << "\t6.- Cancel";
                cout << endl;
                cout << "Select an option: ";
                getline(cin, in);
                cin.ignore();
                cout << endl;
                switch(in[0]){
                    case '1':
                    {
                        cout << "Game 1: ";
                        getline(cin, in);
                        cin.ignore();
                        cout << endl;
                        Game *g = graph.get_game(in);
                        if(g == NULL){
                            cout << endl << "WARNING: Name not valid." << endl;
                            break;
                        }

                        cout << "Use OR [y/n]: ";
                        getline(cin, in);
                        cin.ignore();
                        cout << endl;

                        Game *h = NULL;
                        bool OR = in[0] == 'y' || in[0] == 'Y';
                        if(OR){
                            cout << "Game 2: ";
                            getline(cin, in);
                            cin.ignore();
                            cout << endl;
                            h = graph.get_game(in);
                            if(h == NULL){
                                cout << endl << "WARNING: Name not valid." << endl;
                                break;
                            }
                        }
                        graph.query_name(OR, g->name, h == NULL ? "" : h->name);
                    }
                    break;
                    case '2':
                    {
                        string t1, t2 = "";
                        cout << "Tag 1: ";
                        getline(cin, t1);
                        cin.ignore();
                        cout << endl;

                        cout << "Use OR [y/n]: ";
                        getline(cin, in);
                        cin.ignore();
                        cout << endl;

                        bool OR = in[0] == 'y' || in[0] == 'Y', AND;
                        if(OR){
                            cout << "Tag 2: ";
                            getline(cin, t2);
                            cin.ignore();
                            cout << endl;
                        }
                        else{
                            cout << "Use AND [y/n]: ";
                            getline(cin, in);
                            cin.ignore();
                            cout << endl;

                            AND = in[0] == 'y' || in[0] == 'Y';

                            if(AND){
                                cout << "Tag 2: ";
                                getline(cin, t2);
                                cin.ignore();
                                cout << endl;
                            }
                        }
                        graph.query_tags(OR, AND, t1, t2);
                    }
                    break;
                    case '3':
                    {
                        string t1, t2 = "";
                        cout << "Developer 1: ";
                        getline(cin, t1);
                        cin.ignore();
                        cout << endl;

                        cout << "Use OR [y/n]: ";
                        getline(cin, in);
                        cin.ignore();
                        cout << endl;

                        bool OR = in[0] == 'y' || in[0] == 'Y', AND;
                        if(OR){
                            cout << "Developer 2: ";
                            getline(cin, t2);
                            cin.ignore();
                            cout << endl;
                        }
                        graph.query_developer(OR, t1, t2);
                    }
                    break;
                    case '4':
                    {
                        string t1, t2 = "";
                        cout << "Publisher 1: ";
                        getline(cin, t1);
                        cin.ignore();
                        cout << endl;

                        cout << "Use OR [y/n]: ";
                        getline(cin, in);
                        cin.ignore();
                        cout << endl;

                        bool OR = in[0] == 'y' || in[0] == 'Y', AND;
                        if(OR){
                            cout << "Publisher 2: ";
                            getline(cin, t2);
                            cin.ignore();
                            cout << endl;
                        }
                        graph.query_publisher(OR, t1, t2);
                    }
                    break;
                    case '5':
                    {
                        cout << "Game: ";
                        getline(cin, in);
                        cin.ignore();
                        cout << endl;
                        Game *g = graph.get_game(in);
                        if(g == NULL){
                            cout << endl << "WARNING: Name not valid." << endl;
                            break;
                        }

                        g->print_adj();
                    }
                    break;
                    case '6':
                    {
                        select = false;
                    }
                    break;
                    default:
                    {
                        cout << "WARNING: Invalid Option" << endl;
                    }
                    break;
                }
            }
        }
        break;
        case '2':
        {
            cout << "Where do you want to start? ";
            getline(cin, in);
            cin.ignore();
            cout << endl;
            Game *g = graph.get_game(in);
            if(g == NULL){
                cout << endl << "WARNING: Name not valid." << endl;
                break;
            }
            cout << "Where do you want to end? ";
            getline(cin, in);
            cin.ignore();
            cout << endl;
            Game *h = graph.get_game(in);
            if(h == NULL){
                cout << endl << "WARNING: Name not valid." << endl;
                break;
            }

            graph.clean_games();

            h->dijkstra(g, graph.get_size());
            cout << "===== Path to take =====" << endl;
            Game *gg = g;
            while(gg != NULL){
                cout << gg->name << endl;
                gg = gg->pi;
            }
        }
        break;
        case '3':
        {
            cout << "Where do you want to start? ";
            getline(cin, in);
            cin.ignore();
            cout << endl;
            Game *g = graph.get_game(in);
            if(g == NULL){
                cout << endl << "WARNING: Name not valid." << endl;
                break;
            }
            cout << "How far do tou want to go? ";
            int i;
            cin >> i;
            cout << endl;
            if(i < 0){
                cout << endl << "WARNING: Number not valid." << endl;
                break;
            }
            graph.clean_games();

            Queue<Game> *Q = g->recommend(i);

            while(!Q->is_empty()){
                Game *gg = Q->dequeue();
                cout << gg->name << endl;
            }

            delete Q;

        }
        break;
        case '4':
        {
            running = false;
        }
        break;
        default:
        {
            cout << "WARNING: Invalid Option" << endl;
        }
        break;
        }
    }
}

