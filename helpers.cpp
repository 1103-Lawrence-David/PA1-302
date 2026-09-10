#include "helpers.h"

int mainMenu(){ //Working
    int uChoice;
    bool valid = false;

    cout << "++++ Resource Manager ++++" << endl;
    cout << "Please select which option you would like. When you are finished, please select 7." << endl << endl;
    while(valid == false){
        cout << "1. Add Book" << endl << "2. Add Laptop" << endl << "3. Add Study Room" << endl;
        cout << "4. Display Resources" << endl << "5. Display Total Cost" << endl << "6. Template Demo" << endl;
        cout << "7. EXIT" << endl;
        cout << "Please enter you choice: ";

        cin >> uChoice;
        if(uChoice > 7 || uChoice < 1){
            cout << "Please enter a valid number 1-7." << endl << endl;
        }
        else if(uChoice < 8 && uChoice > 0){
            valid = true;
        }
    }
    return uChoice;
}