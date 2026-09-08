#ifndef BOOK_H
#define BOOK_H
#include "Resource.h"

class Book: public Resource{
    string author;
    int pages;
    
    public:
        Book();
        Book(int, string, int, string);
        Book(const Book&);

        double usageCost() const override;
        void display() const override;
};
#endif