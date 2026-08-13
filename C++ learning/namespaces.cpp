#include <iostream>
#include <vector>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){

    int x = 0;

    std::cout << second::x;

    using namespace first;

    std::cout << x;

    return 0;
}
