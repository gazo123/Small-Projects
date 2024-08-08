#include<iostream>
using namespace std;

class Student
{
private:
     string Student_ID,Student_Name;
     double OOP2_Score,Maths_Score,English_Score,Total_Score;

     double ctotal(){
          return OOP2_Score+Maths_Score+English_Score;
     }
public:
     void Takedata(){
          
          cout << "Enter Student id:";
          cin.ignore();
          getline(cin,this->Student_ID);
          
          cout << "Enter the student name:";
          getline(cin,this->Student_Name);
          
          cout << "Enter English Marks:";
          cin >> English_Score;
          
          cout << "Enter Maths Marks:";
          
          cin>> Maths_Score;
          
          cout << "Enter OOP2 Marks:";
          cin >> OOP2_Score;
          cin.ignore();

          cout << "Total Marks: " << this->ctotal()<<endl; 
     }
     void Showdata(){
          cout << "\t******************\n";
          cout << "\tStudent id:" << this->Student_ID;
          cout << "\n\tStudent name:"<<this->Student_Name;
          cout << "\n\tEnglish Marks:"<<this->English_Score;
          cout << "\n\tMaths Marks:"<<this->Maths_Score;
          cout << "\n\tOOP2 Marks:"<<this->OOP2_Score;  
          cout << "\n\t******************\n";

     }
};

