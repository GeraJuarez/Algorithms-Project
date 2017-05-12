#include <iostream>
#include <string>
#include "graph.h"
#include "game.h"
#include "queue.h"
#include "tags.h"

using namespace std;

void interface(Graph &graph){
    string in;
    bool running = true;
    while(running){
        cout << endl;
        cout << "Welcome!" << endl;
        cout << "Andres Barro\tA00226225" << endl;
        cout << "Arturo Fornez\tA01227071" << endl;
        cout << "Gerardo Juarez\tA00226860" << endl;
        cout << endl;
        cout << "Options:" << endl;
        cout << "\t1.- Select" << endl;
        cout << "\t2.- Path between games" << endl;
        cout << "\t3.- Reccomendations" << endl;
        cout << "\t4.- Exit" << endl;
        cout << endl;
        cout << "Select an option: ";
        cin >> in;
        cout << endl;

        switch(in[0]){
        case '1':
        {

        }
        break;
        case '2':
        {

        }
        break;
        case '3':
        {
            cout << "Where do you want to start? ";
            cin >> in;
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

int main(){
    Graph graph;
    interface(graph);
}
