#include "employee.h"
using namespace std;

double Employee::get_TotalMonthlySalary()
{
     double daily_wages = this->get_NoOfHoursOfWork() * this->get_RatePerHour();
     return 30*daily_wages;  
}