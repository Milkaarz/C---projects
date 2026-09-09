#include <iostream>
#include <string>

int main(){

    // break = break out of a loop
    // continue = skip current iteration

    //the loop stops when the number 13 comes in the sequence
    //for(int i = 1; i <= 20; i++){
    //    if(i == 13){
    //        break;
    //    } 
        
        // Skips the 13 in the sequence 
        for(int i = 1; i <= 20; i++){
        if(i == 13){
            continue;
        }
        std::cout << i << '\n';   
    }



}