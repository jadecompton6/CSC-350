#include "ClassCar.h"
#include <iostream>
#include <string>

using namespace std;

Car

year = 0;
model = "";
weight = 0;
}
//Deconstrctor
Car :: ~Car (){
cout << "Finally" << endl;
}

Car :: Car(int y, string m, double w) {
year = y;
model = m;
weight = w;
}

//Accessors - Getter Methods

 int Car::getYear() {
     return this -> year;
 }

string Car::getModel() {
    return this -> model;
}

 double Car::getWeight() {
     return this -> weight;
 }

// Mutators - Setter Methods

void Car::setYear() {
    this -> year;
}
void Car::setModel() {
     this -> model;
}

void Car::setWeight() {
     this -> weight;
    }
