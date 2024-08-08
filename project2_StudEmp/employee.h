#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
using namespace std;
class Employee
{
private:
     string EmployeeId,EmployeeName;
     int NoOfHoursOfWork,RatePerHour;
public:
     void set_EmployeeId(string EmployeeId){
          this->EmployeeId=EmployeeId;
     }
     void set_EmployeeName(string EmployeeName){
          this->EmployeeName=EmployeeName;
     }
     void set_NoOfHoursOfWork(int NoOfHoursOfWork){
          this->NoOfHoursOfWork=NoOfHoursOfWork;
     }
     void set_RatePerHour(int RatePerHour){
          this->RatePerHour=RatePerHour;
     }

     string get_EmployeeId(){
          return this->EmployeeId;
     }
     string get_EmployeeName(){
          return this->EmployeeName;
     }

     int get_NoOfHoursOfWork(){
          return this->NoOfHoursOfWork;
     }
     int get_RatePerHour(){
          return this->RatePerHour;
     }

     double get_TotalMonthlySalary();
};

#endif 