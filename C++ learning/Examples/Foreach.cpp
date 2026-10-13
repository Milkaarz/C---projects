#include <iostream>
#include <string>

using namespace std;

int main(){

        // foreach loop = loop that eases the traversal over an
        //               iterable data set

        //string students[] = {"Spongebob", "Patrick", "Squidward"};

        int grades[] = {65, 72, 81, 93};

        for(int grade : grades){
            cout << grade << '\n';
        }

        return 0;

}