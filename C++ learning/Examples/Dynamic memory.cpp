#include <iostream>
#include <string>

using namespace std;

// dynamic memory = Memory that is allocated after the program 
//                  is already compiled & running.
//                  Use the 'new' operator to allocate memory
//                  memory in the heap than the stack 

//                  Useful when we dont know how much memory we
//                  will need. Makes our programs more flexible
//                  especially when accepting user input.


int main(){


    int *pNum = NULL;
    int size;
    int *pGrades = NULL;

    pNum = new int;
    *pNum = 100;


    cout << "Address: " << pNum << endl;
    cout << "Value: " << *pNum << endl;
    cout << "How many grades to enter in? ";
    cin >> size;

    pGrades = new int[size];

    for(int i = 0; i < size; i++){
        cout << "Enter grade " << (i + 1) << ": ";
        cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        cout << "Grade " << (i + 1) << ": " << pGrades[i] << endl;
    }

    delete pNum; // free memory
    delete[] pGrades; // free memory
    return 0;
}