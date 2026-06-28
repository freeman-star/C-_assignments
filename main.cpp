#include <iostream>
#include "car.h"

int main() {
    Car car1("Toyota", 4, 150);//Create a Car object with sales mark "Toyota", 4 cylinders, and 150 power
    Car car2("Honda", 4, 130);//Create a Car object with sales mark "Honda", 4 cylinders, and 130 power
    lorry lorry1("Volvo", 6, 300, 5000);//Create a lorry object with sales mark "Volvo", 6 cylinders, 300 power, and 5000 load capacity

    cout << car1 << endl;
    cout << car2 << endl;
    cout << lorry1 << endl;

    Car car3 = car1; // Using copy constructor
    cout << "Copied Car: " << car3 << endl;

    Car car4;
    cin >> car4; // Input for car4
    cout << "Input Car: " << car4 << endl;

    lorry lorry2 = lorry("Scania", 6, 300, 5000);// Using parameterized constructor
    cout << "Input Lorry: " << lorry2 << endl;
    std::cout << "Cars and Lorries Information:" << std::endl;
    std::cout << car1 << std::endl;
    std::cout << car2 << std::endl;
    std::cout << lorry1 << std::endl;
    std::cout << "Number of cars: " << countCars(&car1, 2) << std::endl;
    return 0;
}