#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:

    string getName() const { return name; }
    int getAge() const { return age; }

    void setName(const string& n) { name = n; }
    void setAge(int a) { age = a; }

    virtual void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    virtual ~Person() {}
};


class Employee : public Person {
private:
    int employeeID;

public:
    
    void setEmployeeID(int id) { employeeID = id; }

    
    void displayInfo() const override {
        cout << "Employee - ";
        Person::displayInfo(); 
        cout << "Employee ID: " << employeeID << endl;
    }
};


class Student : public Person {
private:
    int studentID;

public:
    
    void setStudentID(int id) { studentID = id; }

    
    void displayInfo() const override {
        cout << "Student - ";
        Person::displayInfo(); 
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    
    Person person;
    Employee employee;
    Student student;

    
    person.setName("FAHAD");
    person.setAge(45);

    
    employee.setName("SAAD");
    employee.setAge(30);
    employee.setEmployeeID(1234);

    
    student.setName("SUBHAN");
    student.setAge(20);
    student.setStudentID(5678);

    
    cout << "Displaying Person Info:" << endl;
    person.displayInfo();

    cout << "\nDisplaying Employee Info:" << endl;
    employee.displayInfo();

    cout << "\nDisplaying Student Info:" << endl;
    student.displayInfo();

    return 0;
}
