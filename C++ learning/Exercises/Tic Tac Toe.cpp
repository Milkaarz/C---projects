#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <limits>

using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main(){

    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';

    srand(time(0));   

    drawBoard(spaces);

    while(true){

        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            break;
        }
        if(checkTie(spaces)){
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            break;
        }
        if(checkTie(spaces)){
            break;
        }
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}

void drawBoard(char *spaces){
    cout << endl;
    cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << endl;
    cout << "---|---|---" << endl;
    cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << endl;
    cout << endl;
}

void playerMove(char *spaces, char player){
    int number;

    while(true){
        cout << "Enter a spot to place a marker (1-9): ";
        cin >> number;

        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a number." << endl;
            continue;
        }

        number--;

        if(number >= 0 && number <= 8 && spaces[number] == ' '){
            spaces[number] = player;
            break;
        }

        cout << "Invalid spot, try again." << endl;
    }
}

void computerMove(char *spaces, char computer){
    int number;

    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer){

    int wins[8][3] = {
        {0,1,2}, {3,4,5}, {6,7,8},
        {0,3,6}, {1,4,7}, {2,5,8},
        {0,4,8}, {2,4,6}
    };

    for(int i = 0; i < 8; i++){
        int a = wins[i][0];
        int b = wins[i][1];
        int c = wins[i][2];

        if(spaces[a] != ' ' && spaces[a] == spaces[b] && spaces[b] == spaces[c]){
            if(spaces[a] == player){
                cout << "You Win!!" << endl;
            } else {
                cout << "You Lose!!" << endl;
            }
            return true;
        }
    }

    return false;
}

bool checkTie(char *spaces){

    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;   
        }
    }

    cout << "It's a tie!" << endl;
    return true;
}