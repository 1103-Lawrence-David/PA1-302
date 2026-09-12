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

void setBooks(int& p, string& a, string& n){
    bool run = true;
    string inCheck;
    while(run == true){
        cout << "Please input the name of the course." << endl;

        cin >> n;

        cout << "please input the author of the book" << endl;

        cin >> a;

        cout << "please input the amount of pages." << endl;

        cin >> p;

        cout << "if this is correct, please input the word yes. if it is incorrect, type anything else." << endl;

        cin >> inCheck;
        if(inCheck == "yes" || inCheck == "Yes" || inCheck == "YES"){
            run = false;
        }
    }
}

void setLaptops(int& hu, double& hr, string& n){
    bool run = true;
    string inCheck;
    while(run == true){
        cout << "Please input the name of the laptop." << endl;

        cin >> n;

        cout << "please input the hours the laptop was used" << endl;

        cin >> hu;

        cout << "please input the hourly rate." << endl;

        cin >> hr;

        cout << "if this is correct, please input the word yes. if it is incorrect, type anything else." << endl;

        cin >> inCheck;
        if(inCheck == "yes" || inCheck == "Yes" || inCheck == "YES"){
            run = false;
        }
    }
}

void setStudyRoom(int& o, double& r, string& n){
    bool run = true;
    string inCheck;
    while(run == true){
        cout << "Please input the name of the Study Room." << endl;

        cin >> n;

        cout << "please input the occupancy" << endl;

        cin >> o;

        cout << "please input the reservation fee." << endl;

        cin >> r;

        cout << "if this is correct, please input the word yes. if it is incorrect, type anything else." << endl;

        cin >> inCheck;
        if(inCheck == "yes" || inCheck == "Yes" || inCheck == "YES"){
            run = false;
        }
    }
}