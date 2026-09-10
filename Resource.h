#ifndef RESOURCE_H
#define RESOURCE_H

#include <iostream>
using namespace std;

class Resource {
    protected:
        int id;
        string name;
    
    public:
        Resource();
        Resource(int, string);
        Resource(const Resource&);

        void setId (int);
        void setName (string);

        virtual ~Resource();
        virtual void display()const = 0;
        virtual double usageCost() const = 0;
};
#endif