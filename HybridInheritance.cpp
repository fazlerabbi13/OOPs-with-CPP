#include <bits/stdc++.h>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle"<< endl;
    }
};

class Fare {
public:
    Fare() {
        cout << "Fare of Vehicle"<< endl;
    }
};

class Car : public Vehicle {
  public:
  Car() {
      cout << "This Vehical is a Car"<< endl;
  }
};

class Bus : public Vehicle, public Fare {
  public:
  Bus() {
      cout << "This Vehicle is a Bus with Fare";
  }
};

int main() {
    
    // Creating object of sub class will
    // invoke the constructor of base class.
    // Bus obj2;
    return 0;
}