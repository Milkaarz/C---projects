#include <iostream>

using namespace std;

int main(){

    //Fill() = Fills a range of elements with a specified alue
    //         fill(begin, end, value);

    const int size = 99;
    string foods[size];

    fill(foods, foods + (size/3), "Pizza");
    fill(foods + (size/3), foods + (2 * size/3), "Burger");
    fill(foods + (2 * size/3), foods + size, "Ice Cream");

    for(const string food : foods){
        cout << food << " ";
    }



    return 0;

}