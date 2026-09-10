#include "StudyRoom.h"

StudyRoom::StudyRoom():Resource(){
    occupancy = -1;
    reservationFee = -1.4;
}

StudyRoom::StudyRoom(int o, double r, int i, string n):Resource(i, n){
    occupancy = o;
    reservationFee = r;
}

StudyRoom::StudyRoom(const StudyRoom& rhs):Resource(rhs){
    occupancy = rhs.occupancy;
    reservationFee = rhs.reservationFee;
}

double StudyRoom::usageCost() const{

    return reservationFee * occupancy;
}

void StudyRoom::display() const{
    cout << "Occupancy: " << occupancy << endl;
    cout << "Reservation Fee: " << reservationFee << endl;
    cout << "Cost: " << usageCost() << endl;
}