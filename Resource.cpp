#include "Resource.h"
Resource::Resource(){
    id = -1;
    name = "lebron james";
}

Resource::Resource(int i, string n){
    id = i;
    name = n;
}

Resource::Resource(const Resource& rhs){
    id = rhs.id;
    name = rhs.name;
}

void Resource::setId (int i){
    id = i;
}

void Resource::setName (string n){
    name = n;
}

Resource::~Resource(){

}