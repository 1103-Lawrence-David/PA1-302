#ifndef BOOK_H
#define BOOK_H
#include "Resource.h"

class Book: public Resource{
    int pages;
    string author;
    
    public:
        Book();
        Book(int, string, int, string);
        Book(const Book&);

        string getAuthor() const;
        int getPages() const;

        double usageCost() const override;
        void display() const override;
};
#endif