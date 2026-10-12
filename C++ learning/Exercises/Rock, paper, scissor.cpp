#include <iostream>
#include <string>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

using namespace std;

int main(){

    srand(time(0));

    char player;
    char computer;

    player = getUserChoice();
    cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){

    char player;
    cout << "Choose one of the following\n";
    cout << "Rock-Paper-Scissors Game!\n";
    do{
        cout << "--------------------------\n";
        cout << "'r' for rock\n";
        cout << "'p' for paper\n";
        cout << "'s' for scissors\n";
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's' &&
             player != 'R' && player != 'P' && player != 'S');


    return player;
}

char getComputerChoice(){
    
    int num = rand() % 3 + 1;

   switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
     
    return 0;
}

void showChoice(char choice){

    switch(choice){
        case 'r': 
        case 'R': cout << "Rock\n";
            break;
        case 'p': 
        case 'P': cout << "Paper\n";
            break;
        case 's': 
        case 'S': cout << "Scissor\n";
            break;

    }


}

void chooseWinner(char player, char computer){
    
    switch(player){ 
        case 'r':
        case 'R': if(computer == 'r'){
            cout << "It's a tie!\n";
        } else if (computer == 'p'){
            cout << "You lose!\n";
        } else {
            cout << "You win!\n";
        }
            break;

        case 'p':
        case 'P': if(computer == 'p'){
            cout << "It's a tie!\n";
        } else if (computer == 's'){
            cout << "You lose!\n";
        } else {
            cout << "You win!\n";
        }
            break;

        case 's':
        case 'S': if(computer == 's'){
            cout << "It's a tie!\n";
        } else if (computer == 'r'){
            cout << "You lose!\n";
        } else {
            cout << "You win!\n";
        }
            break;
    }


}