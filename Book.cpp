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

string Book::getAuthor() const{
    return author;
}

int Book::getPages() const{
    return pages;
}

void Book::setPages(int p){
    pages = p;
}

void Book::setAuthor(string a){
    author = a;
}

double Book::usageCost() const{
    return pages * 0.01;
}

void Book::display() const{
    cout << "ID:"<< id << endl;
    cout << "Name: " << name << endl;
    cout << "Author: " << author << endl;
    cout << "Pages: " << pages << endl;
    cout << "Cost: " << usageCost() << endl;
}