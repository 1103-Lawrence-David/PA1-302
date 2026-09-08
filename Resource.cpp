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

Resource::~Resource(){

}