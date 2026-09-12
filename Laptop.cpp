#include "Laptop.h"

Laptop::Laptop():Resource(){
    hourlyRate = -3.8;
    hoursUsed -3;
}

Laptop::Laptop(double hr, int hu, int i, string n):Resource(i, n){
    hourlyRate = hr;
    hoursUsed = hu;
}

Laptop::Laptop(const Laptop& rhs):Resource(rhs){
    hourlyRate = rhs.hourlyRate;
    hoursUsed= rhs.hoursUsed;
}

double Laptop::usageCost() const{
    return hourlyRate * hoursUsed;
}

void Laptop::display() const{
    cout << "ID:"<< id << endl;
    cout << "Name: " << name << endl;
    cout << "Hours Used: " << hoursUsed << endl;
    cout << "Hourly Rate: " << hourlyRate << endl;
    cout << "Cost: " << usageCost() << endl;
}