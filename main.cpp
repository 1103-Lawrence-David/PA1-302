//V0.3.0: Added major functionality, implemented case 2-5 and reworked case 4 to function properly with more than one element. Cases 1-5 and 7 finished, need to finish case 6 (templates).
#include "Inventory.h" 
#include"Book.h" 
#include "Laptop.h" 
#include "StudyRoom.h"
#include "helpers.h"

int main(){
    int size = 0, uChoice, tempNum;
    double tempDouble;
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

            case 2: //add laptop (IMPLEMENTED)
                setLaptops(tempNum, tempDouble, tempstring1);
                resources[size] = new Laptop(tempDouble, tempNum, size, tempstring1);
                size++;
                break;

            case 3: //add studyroom (IMPLEMENTED)
                setStudyRoom(tempNum, tempDouble, tempstring1);
                resources[size] = new StudyRoom(tempNum, tempDouble, size, tempstring1);
                size++;
                break;

            case 4: //display resourcees (IMPLEMENTED)
                cout << endl;
                for(int i = 0; i < size; i++){
                    resources[i]->display();
                    cout << endl;
                }
                break;

            case 5: //display total cost (IMPLEMENTED)
            tempDouble = 0;
                for(int i = 0; i < size; i++){
                    tempDouble += resources[i]->usageCost();
                }
                
                cout << endl << "The total cost is: $" << tempDouble << endl;
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