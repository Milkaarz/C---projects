#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Null value = a special value that means something has no value.
    //              When a pointer is holding a null value that pointer is
    //              not poiting at anything (null pointer)

    // nullptr = keyword that represents a null pointer literal

    //  nullptrs are helpgul when determining if an adderess was
    //  successfully assigned to a pointer or not

    int *pointer = nullptr; // pointer is not pointing at anything
    int x = 123;

    pointer = &x; 

    if(pointer == nullptr){
        cout << "address was not assigned" << endl;
    } else {
        cout << "address was assigned" << endl;

    }


    return 0;
}