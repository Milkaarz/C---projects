#include <iostream>
#include <string>

using namespace std;


int main(){


    string questions[] = {"1. What year was C++ invented?: ",
                        "2. Who inveted C++?: ",
                        "3. Who is the predecessor of C++?: ",
                        "4. Is the Earth flat?: ",};

    string options[][4] = {{"A. 1983", "B. 1985", "C. 1989", "D. 1990"},
                    {"A. Bjarne Stroustrup", "B. James Gosling", "C. Dennis Ritchie", "D. Guido van Rossum"},
                    {"A. C", "B. Java", "C. Python", "D. Ruby"},
                    {"A. Yes", "B. No", "C. Maybe", "D. I don't know"}};


    char answers[] = {'B', 'A', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        cout << "-------------------------" << endl;
        cout << questions[i] << endl;
        cout << "-------------------------" << endl;

        for(int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++){
            cout << options[i][j] << endl;
        }

        cin >> guess;
        guess = toupper(guess);

        if(guess == answers[i]){
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Incorrect!" << endl;
            cout << "Answer: " << answers[i] << endl;
        }
    
    }

    cout << "-------------------------" << endl;
    cout << "Your score is: " << score << "/" << size << endl;
    cout << "-------------------------" << endl;

    cout << "Correct Guesses: " << score << endl;
    cout << "# of Questions: " << size << endl;
    cout << "Incorrect Guesses: " << size - score << endl;
    cout << "SCORE: " << (score / (double)size) * 100 << "%" << endl;

    return 0;

}