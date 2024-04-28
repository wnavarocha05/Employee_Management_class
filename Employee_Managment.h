//
// Created by Wyatt on 4/28/24.
//

#ifndef EMPLOYEE_MANAGEMENT_CLASS_EMPLOYEE_MANAGMENT_H
#define EMPLOYEE_MANAGEMENT_CLASS_EMPLOYEE_MANAGMENT_H
#include <iostream>
#include <vector>


class Employee_Management {


private:

    std::string _empNames;
    int _empId;
    std::string _empDepartment;
    float _empPay;
    std::vector<Employee_Management>employee;
    //-----------------------------------------------

public:

    // Constructors
    //------------------------------------------------
    Employee_Management();
    Employee_Management(std::string name, int id, std::string department, float pay);


    // Accessors getters and setters
    //-------------------------------------------------
    std::string getName() {return _empNames; }
    void setName(std::string name) { _empNames = name; }

    int getId() {return _empId; }
    void setId(int id) { _empId = id; }

    std::string getDepartment() {return _empDepartment; }
    void setDepartment(std::string department) { _empDepartment = department; }

    float getPay() {return _empPay;}
    void setPay(float pay) { _empPay = pay; }


    // Methods
    //----------------------------------------------
    void add_employee(std::string name, int id, std::string department, float pay);
    void remove_employee(std::string name);
    void display_employee();

};


#endif //EMPLOYEE_MANAGEMENT_CLASS_EMPLOYEE_MANAGMENT_H
