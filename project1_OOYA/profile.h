#ifndef PROFILE_H
#define PROFILE_H

#include<vector>
#include<string>
using namespace std;

class Profile{
     private:
          string name,city,country,pronouns;
          int age;
          vector<string> hobbies;
     public:
          Profile(string name,int age, string city,string country,string pronouns);
          
          void add_hobby(string hobbyName);
          void view_profile() const;
};
#endif
