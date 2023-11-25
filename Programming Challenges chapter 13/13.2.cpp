#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    // Constructor 1
    Employee(string empName, int empId, string empDept, string empPosition) {
        name = empName;
        idNumber = empId;
        department = empDept;
        position = empPosition;
    }

    // Constructor 2
    Employee(string empName, int empId) {
        name = empName;
        idNumber = empId;
        department = "";
        position = "";
    }

    // Default constructor
    Employee() {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }

    // Mutator functions
    void setName(string empName) {
        name = empName;
    }

    void setIdNumber(int empId) {
        idNumber = empId;
    }

    void setDepartment(string empDept) {
        department = empDept;
    }

    void setPosition(string empPosition) {
        position = empPosition;
    }

    // Accessor functions
    string getName() const {
        return name;
    }

    int getIdNumber() const {
        return idNumber;
    }

    string getDepartment() const {
        return department;
    }

    string getPosition() const {
        return position;
    }
};

int main() {
    // Create three Employee objects
    Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee emp2("Mark Jones", 39119, "IT", "Programmer");
    Employee emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    // Display employee data
    cout << "Employee 1:" << endl;
    cout << "Name: " << emp1.getName() << endl;
    cout << "ID Number: " << emp1.getIdNumber() << endl;
    cout << "Department: " << emp1.getDepartment() << endl;
    cout << "Position: " << emp1.getPosition() << endl;

    cout << endl;

    cout << "Employee 2:" << endl;
    cout << "Name: " << emp2.getName() << endl;
    cout << "ID Number: " << emp2.getIdNumber() << endl;
    cout << "Department: " << emp2.getDepartment() << endl;
    cout << "Position: " << emp2.getPosition() << endl;

    cout << endl;

    cout << "Employee 3:" << endl;
    cout << "Name: " << emp3.getName() << endl;
    cout << "ID Number: " << emp3.getIdNumber() << endl;
    cout << "Department: " << emp3.getDepartment() << endl;
    cout << "Position: " << emp3.getPosition() << endl;

    return 0;
}