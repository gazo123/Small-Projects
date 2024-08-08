#include "profile.h"
#include<iostream>
using namespace std;

int main(){
       Profile p1("Pushan Karmakar",22,"Siliguri","India","He/Him");
       p1.add_hobby("Coding");
       p1.add_hobby("Swimming");

       p1.view_profile();
       return 0;
}