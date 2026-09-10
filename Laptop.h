#ifndef LAPTOP_H
#define LAPTOP_H
#include "Resource.h"

class Laptop: public Resource{
    double hourlyRate;
    int hoursUsed;

    public:
        Laptop();
        Laptop(double, int, int, string);
        Laptop(const Laptop&);

        double usageCost() const override;
        void display() const override;
};
#endif