#include <iostream>
#include <string>

using namespace std;

struct Car {
    string model;
    int year;
    string color;
};

void printCar(const Car &car);
void paintCar(Car &car, string newColor);

int main() {

    Car car1;
    Car car2;

    car1.model = "Toyota";
    car1.year = 2020;
    car1.color = "Red";

    car2.model = "Honda";
    car2.year = 2021;
    car2.color = "Blue";

    cout << &car1 << endl;   
    printCar(car1);
    printCar(car2);

    paintCar(car1, "Green");
    paintCar(car2, "Yellow");

    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(const Car &car) {

    cout << &car << endl;
    cout << car.model << endl;
    cout << car.year << endl;
    cout << car.color << endl;

}

void paintCar(Car &car, string newColor) {

    car.color = newColor;

}