//V0.2.0: Added major functionality, laid ground work for case 2 and 3 by completing 1. case 4 functionally works for case 1 and theoretically works for the rest. case 7 works fully. Deallocates memory properly.
#include "Inventory.h" 
#include"Book.h" 
#include "Laptop.h" 
#include "StudyRoom.h"
#include "helpers.h"

int main(){
    int size = 0, uChoice, tempNum;
    string tempstring1, tempstring2;
    bool run = true;
    Resource* resources[20];
    
    while(run == true){
        uChoice = mainMenu();
        switch (uChoice) {
            case 1: //add book (IMPLEMENTED)
                setBooks(tempNum, tempstring1, tempstring2);
                resources[size] = new Book(tempNum, tempstring1, size, tempstring2);
                size++;
                break;

            case 2: //add laptop

                size++;
                break;

            case 3: //add studyroom

                size++;
                break;

            case 4: //display resourcees (working for books, check other types.)
                resourceOut(* resources, size);
                break;

            case 5: //display total cost (?)
                break;

            case 6: //template demo (?????)
                break;

            case 7: //exit //IMPLEMENTED
                 run = false;
                 break;

            default:
                cout << "something went wrong. Program will terminate." << endl;
                run = false;
        }
    }

    for(int i = 0; i < size; i++){
        delete resources[i];
    }
    return 0;
}