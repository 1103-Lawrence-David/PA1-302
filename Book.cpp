#include"Book.h"

Book::Book():Resource(){
    pages = -1;
    author = "Lebron James";
}

Book::Book(int p, string a, int i, string n):Resource(i , n){
    pages = p;
    author = a;
}

Book::Book(const Book& rhs):Resource(rhs){
    pages = rhs.pages;
    author = rhs.author;
}


double Book::usageCost() const{
    return pages * 0.01;
}

void Book::display() const{
    
}