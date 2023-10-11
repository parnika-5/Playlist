#include <iostream>
//#include <fstream>


using namespace std;

#include "Playlist.h"

void PrintMenu(string playlist);


int main() {
    string titleofPlaylist;
    string idNum1;
    string nameOfTheSong;
    string nameOfTheArtist;
    int lengthOfTheSong;

    string idk;

    int current;
    int newer;

    //PlaylistNode *head = nullptr;
    //PlaylistNode *tail = nullptr;

    PlaylistNode nodulePL;
    //bool input = true;

    char userInput;

    cout << "Enter playlist's title:" << endl;
    
    getline(cin, titleofPlaylist);
    //cin.ignore();
    cout << endl;
    PrintMenu(titleofPlaylist);

    //PrintMenu(titleofPlaylist);

    cin >> userInput;
    //cin.ignore();
    

    while(userInput != 'q'){

        if(userInput == 'a'){
            cout << "ADD SONG" << endl;
            cout << "Enter song's unique ID:" << endl;
            cin >> idNum1;
            //cout << idNum1 << endl;
            cin.ignore();
            cout << "Enter song's name:" << endl;
            getline(cin, nameOfTheSong);
            //cin.ignore();
            //cout << nameOfTheSong << endl;
            cout << "Enter artist's name:" << endl;
            getline(cin, nameOfTheArtist);
            //cout << nameOfTheArtist << endl;
            cout << "Enter song's length (in seconds):" << endl;
            cin >> lengthOfTheSong;
            //cin.ignore();
            //cout << lengthOfTheSong << endl;
            cout << endl;

            //PlaylistNode *needTOAdd = new PlaylistNode(idNum1, nameOfTheSong, nameOfTheArtist, lengthOfTheSong);
            //head = needTOAdd;
            //cout << head->GetArtistName();



            //AddSong(head, tail, idNum1, nameOfTheSong, nameOfTheArtist, lengthOfTheSong);
            nodulePL.AddSong(idNum1, nameOfTheSong, nameOfTheArtist, lengthOfTheSong);
            


        }

        else if(userInput == 'd'){
            cout << "REMOVE SONG" << endl;
            cout << "Enter song's unique ID:" << endl;
            cin >> idNum1;
        //cout << idNum1 << endl;

        nodulePL.RemoveSong(idNum1, idk);

        cout << "\"" << idk << "\"" << " removed." << endl;
        cout << endl;

    }

    

     else if(userInput == 'c'){
        cout << "CHANGE POSITION OF SONG" << endl;
        cout << "Enter song's current position:" << endl;
        cin >> current;
        //cout << current << endl;

        cout << "Enter new position for song:" << endl;
        cin >> newer;
        //cout << newer << endl;



        nodulePL.ChangePositionOfSong(current, newer);

        }


        else if(userInput == 's'){
            cout << "OUTPUT SONGS BY SPECIFIC ARTIST" << endl;
            cout << "Enter artist's name:" << endl;
            cout << endl;
            cin.ignore();
            getline(cin, nameOfTheArtist);
            //cout << nameOfTheArtist << endl;

        
        nodulePL.OutputSongsBySpecificArtist(nameOfTheArtist);

    }

    else if(userInput == 't'){
        cout << "OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << endl;
       
        nodulePL.OutputTotalTimeOfPlaylist();

    }

    else if(userInput == 'o'){
        //cout << "OUTPUT FULL PLAYLIST" << endl;
        
        
        nodulePL.OutputFullPlaylist(titleofPlaylist);

    }

    else{
        cout << "Invalid" << endl;

    }

        PrintMenu(titleofPlaylist);
        //cin.ignore();
        cin >> userInput;
        //cout << userInput;
        //OutputFullPlaylist(head, tail, titleofPlaylist);
        //cin.ignore();

    }

    return 0;
    
}

void PrintMenu(string playlist){
//cout << endl;
    cout << playlist << " PLAYLIST MENU" << endl;
    cout << "a - Add song" << endl;
    cout << "d - Remove song" << endl;
    cout << "c - Change position of song" << endl;
    cout << "s - Output songs by specific artist" << endl;
    cout << "t - Output total time of playlist (in seconds)" << endl;
    cout << "o - Output full playlist" << endl;
    cout << "q - Quit" << endl;
    cout << endl;
    cout << "Choose an option:" << endl;


}


