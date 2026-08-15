#include <iostream>

// ternary operator ?: = replacement to an if/else statement
// condition ? expression1 : expression2;

//Example with If and Else
//int main(){

 //   int grade;

  //  std::cout << "Enter you grade: ";
  //  std::cin >> grade;  

  //  if(grade >= 6){
  //      std::cout << "You passed!!"; // first condition = condition for pass -> be higher than 6
  //  }
  //  else{
 //       std::cout << "You failed!!";// second condition = condition for fail -> be lower than 6

  //  }


 //   return 0;

//}


int main(){

    int number = 2;
    number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN"; 
    // in this case "?" represents IF and ":" represents ELSE

    bool hungry = true;
    hungry ? std::cout << "You are Hungry" : std::cout << "You are not Hungry";
    // in this case "?" represents IF and ":" represents ELSE


 return 0;
}