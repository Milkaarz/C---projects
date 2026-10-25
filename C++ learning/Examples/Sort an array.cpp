#include <iostream>
#include <string>


void sort(int array[], int size);
using namespace std;

int main(){

    int array [] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element : array){
        cout << element << " ";
    }


    return 0;
}   


void sort(int array[], int size){

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){
                swap(array[j], array[j + 1]);
            }
        }
    }

}