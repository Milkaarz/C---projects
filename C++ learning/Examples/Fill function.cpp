#include <iostream>

using namespace std;

int main(){

    //Fill() = Fills a range of elements with a specified calue
    //         fill(begin, end, value);

    const int size = 100;
    string foods[size];

    fill(foods, foods + size, "Pizza");
    
    for(const string food : foods){
        cout << food << " ";
    }



    return 0;

}