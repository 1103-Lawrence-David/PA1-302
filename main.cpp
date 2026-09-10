//V0.1.0: Adding infrastructure.
#include "Inventory.h" 
#include"Book.h" 
#include "Laptop.h" 
#include "StudyRoom.h"
#include "helpers.h"

int main(){
    int uChocie;
    bool run = true;
    
    Resource* resources[20]; //declaration fucked, need to make it better
    resources[0] = new Book();
    
    while(run == true){
        uChocie = mainMenu();

        if(uChocie == 7){
            run = false;
        }
    }
    
    delete [] resources;
    return 0;
}