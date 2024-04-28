// File - Employee_Management.cpp
// Author - Wyatt Nava-Rocha
// Des - Definitions of Employee_Management class
//----------------------------------------------------------------

#include "Employee_Managment.h"
Employee_Management::Employee_Management() {

}


Employee_Management::Employee_Management(std::string name, int id, std::string department, float Pay) {
    this->_empNames = name;
    this->_empId = id;
    this->_empDepartment = department;
    this->_empPay= Pay;

}

// Allows user/Manager to add employees

void Employee_Management::add_employee(std::string name,int id,std::string department, float Pay) {
    employee.push_back(Employee_Management(name, id, department, Pay));
}

// Allows user/Manager to remove employees

void Employee_Management::remove_employee(std::string name) {
    for (auto it = employee.begin(); it != employee.end(); ++it) {
        if (it->_empNames == name) {
            employee.erase(it);
            break;
        }
    }

}
;


