#ifndef STUDYROOM_H
#define STUDYROOM_H
#include "Resource.h"

class StudyRoom: public Resource{
    int occupancy;
    double reservationFee;

    public:
        StudyRoom();
        StudyRoom(int, double, int, string);
        StudyRoom(const StudyRoom&);

        double usageCost() const override;
        void display() const override;

};
#endif