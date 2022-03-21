#ifdef
#define

#include <iostream>
#include <string>

using namespace std;


// Class Property
class Car {

private: // Private Functions
    int year;
    string model;
    double weight;

public: // Public Functions
  // Default Constructor
    Car();

  // Deconstructor
    ~Car();

  // Non-Default Constructor
    Car(int year, string model, double weight);

    int getYear();
    string getModel();
    double getWeight();
    
    void setYear();
    void setModel();
    void setWeight();

};

#endif
