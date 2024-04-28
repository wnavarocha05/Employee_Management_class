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

// Allows user/Manager to display everyone in the company
void Employee_Management::display_employee() {
    for (const auto& employee : employee) {
        std::cout << "Name: " << employee._empNames << std::endl;
        std::cout << "ID Number: " << employee._empId << std::endl;
        std::cout << "Department:" << employee._empDepartment << std::endl;
        std::cout << "Pay: " << employee._empPay << std::endl;
        std::cout << "-----------------------------------" << std::endl;
    }
}
;


