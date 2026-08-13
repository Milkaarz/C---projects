#include <iostream>
#include <string>

int main(){

  //integer (whole number)
  int age = 21;
  int year = 2023;
  int days = 7;

  //double (number including decimal)
  double price = 10.99;
  double gpa = 2.5;

  //single character
  char grade = 'A';
  char symbol = '@';

  //boolean (true or false)
  bool student = true;
  bool human = false;   

  //string (sequences of texts)
  std::string name = "Kara";
  std::string day = "Monday";
  std::string food = "Pizza";
  
  std::cout << "Hello " << name << '\n';
  std::cout << "I am " << age << " years old.\n";
  std::cout << "Today is " << day << ".\n";
  std::cout << "My favorite food is " << food << ".\n";

  //const (One variable who cant be changed/read only)
  const double PI = 3.14159;
  const int Light_speed = 299792458;

return 0;


}