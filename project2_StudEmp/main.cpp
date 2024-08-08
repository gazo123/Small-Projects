/*Write C++ menu driven program to get student details, display student details and to get employee details, display employee details,and 
display monthly salary details of employee.

g++ main.cpp employee.cpp student.cpp  
*/

#include<iostream>
#include<string>
#include<windows.h>
#include "student.cpp"
#include "employee.h"
using namespace std;

int main(){
     bool on1=true;
     while(on1){
          system("cls");
          cout << "1.Show student details"<<endl;
          cout << "2.Show employee details"<<endl;
          cout << "3.Quit"<<endl;
          cout << "Choose:";
          int choice;
          cin >> choice;
          system("cls");
          switch (choice)
          {    
               case 1:{
                    Student s;
                    s.Takedata();
                    system("cls");
                    s.Showdata();
                    Sleep(5000);
                    break;
               }

               case 2:
               {
                    string eid,ename;
                    int workHours,rate;
                    bool on2=true;
                    Employee e;

                    while(on2){     
                         system("cls");          
                         cout << "1.Set Employee Details" <<endl;
                         cout << "2.Display Employee Details " <<endl;
                         cout << "3.Display Salary" <<endl;
                         cout << "4.Go Back"<<endl;
                         cout << "Enter the choice: ";
                         int choice2;
                         cin>>choice2;
                         system("cls");
                         switch(choice2)
                         {    
                              case 1:{
                                   cout << "Enter the employee id:";
                                   cin.ignore();
                                   cin>>eid;
                                   e.set_EmployeeId(eid);

                                   cout << "Enter the employee name:";
                                   cin.ignore();
                                   getline(cin,ename);
                                   e.set_EmployeeName(ename);

                                   cout << "Enter the number of hours of work:";
                                   cin>> workHours;
                                   e.set_NoOfHoursOfWork(workHours);

                                   cout << "Enter the rate per hour:";
                                   cin.ignore();
                                   cin>> rate;
                                   e.set_RatePerHour(rate);                                                  
                                   break;
                              }
                              case 2:{
                                   cout << "****************************"<<endl;
                                   cout << "\tID: "<< e.get_EmployeeId()<<endl;
                                   cout <<"\tName: "<< e.get_EmployeeName()<<endl;
                                   cout<<"\tHours of work: "<<e.get_NoOfHoursOfWork()<<endl;
                                   cout << "\tRate per hour: "<<e.get_RatePerHour()<<endl;
                                   cout << "****************************";
                                   Sleep(4000);
                                   break;
                              }
                              case 3:{
                                   cout << "\t*****************\n";
                                   cout << "\tRate per hour: "<<e.get_RatePerHour()<<endl;
                                   cout << "\tNumber of hours of work: "<<e.get_NoOfHoursOfWork()<<endl;
                                   cout << "\tTotal Salary: "<<e.get_TotalMonthlySalary()<<endl;
                                   cout << "\t*****************";
                                   Sleep(4000);
                                   break;
                              }
                              default:
                                   on2=false;
                                   break;
                         }
                    }
                    break;
               }

               case 3:{
                    cout << "Thankyou for visiting....";
                    on1=false;
                    Sleep(2000);
                    break;
               }
               default:
                    cout<<"invalid key"<<endl;
                    break;
          }
     }
     return 0;
}

