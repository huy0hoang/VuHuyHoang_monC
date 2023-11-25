#include <iostream>
#include <string>

using namespace std;

class PersonalInformation {
private:
    string name;
    string address;
    int age;
    string phoneNumber;

public:
    PersonalInformation(string n, string addr, int a, string phone) {
        name = n;
        address = addr;
        age = a;
        phoneNumber = phone;
    }

    string getName() const {
        return name;
    }

    void setName(string n) {
        name = n;
    }

    string getAddress() const {
        return address;
    }

    void setAddress(string addr) {
        address = addr;
    }

    int getAge() const {
        return age;
    }

    void setAge(int a) {
        age = a;
    }

    string getPhoneNumber() const {
        return phoneNumber;
    }

    void setPhoneNumber(string phone) {
        phoneNumber = phone;
    }
};

int main() {
    PersonalInformation person1("John Doe", "123 Main St", 30, "123-456-7890");
    PersonalInformation person2("Jane Smith", "456 Elm St", 25, "987-654-3210");
    PersonalInformation person3("Bob Johnson", "789 Oak St", 35, "456-789-1230");

    cout << "Person 1:" << endl;
    cout << "Name: " << person1.getName() << endl;
    cout << "Address: " << person1.getAddress() << endl;
    cout << "Age: " << person1.getAge() << endl;
    cout << "Phone Number: " << person1.getPhoneNumber() << endl;

    cout << endl;

    cout << "Person 2:" << endl;
    cout << "Name: " << person2.getName() << endl;
    cout << "Address: " << person2.getAddress() << endl;
    cout << "Age: " << person2.getAge() << endl;
    cout << "Phone Number: " << person2.getPhoneNumber() << endl;

    cout << endl;

    cout << "Person 3:" << endl;
    cout << "Name: " << person3.getName() << endl;
    cout << "Address: " << person3.getAddress() << endl;
    cout << "Age: " << person3.getAge() << endl;
    cout << "Phone Number: " << person3.getPhoneNumber() << endl;

    return 0;
}