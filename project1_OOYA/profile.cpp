#include "profile.h"
#include<iostream>
Profile::Profile(string name,int age, string city,string country,string pronouns){
       this->name=name;
       this->age=age;
       this->city = city;
       this->country = country;
       this->pronouns = pronouns;
}

void Profile::add_hobby(string hobbyName){
       (this->hobbies).push_back(hobbyName);
}

void Profile::view_profile() const{
       cout<< "Name: " << this->name <<endl;
       cout<< "Age: " << this->age <<endl;
       cout<< "City: " << this->city <<endl;
       cout<< "Country: " << this->country  <<endl;
       cout<< "Pronouns: " << this->pronouns <<endl;
    
       cout << "Hobbies: ";
       for(string hobbyName: this->hobbies){
              cout << hobbyName << ",";
       }
}