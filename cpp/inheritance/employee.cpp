#include <iostream>

using namespace std;

class worker
{
private:
    int id;
    string name;
    string designation;
    float hours;
    float wage;
    float overtime;

public:
    worker(int id, string name, string designation, float hours, float wage, float overtime);
    void display();
};

worker::worker(int id, string name, string designation, float hours, float wage, float overtime)
{
    this->id = id;
    this->name = name;
    this->designation = designation;
    this->hours = hours;
    this->wage = wage;
    this->overtime = overtime;
}

void worker::display()
{
    cout << "Id: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Designation: " << designation << endl;
    cout << "Hours: " << hours << endl;
    cout << "Wage: " << wage << endl;
    cout << "Overtime: " << overtime << endl;
}

class manager
{
private:
    int id;
    string name;
    string designation;
    int days;
    float salary;
    float incentive;

public:
    manager(int id, string name, string designation, int days, float salary, float incentive);
    void display();
};

manager::manager(int id, string name, string designation, int days, float salary, float incentive)
{
    this->id = id;
    this->name = name;
    this->designation = designation;
    this->days = days;
    this->salary = salary;
    this->incentive = incentive;
}

void manager::display()
{
    cout << "Id: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Designation: " << designation << endl;
    cout << "Days: " << days << endl;
    cout << "Salary: " << salary << endl;
    cout << "Incentive: " << incentive << endl;
}

int main(void)
{
    worker w(1, "Ratan Lal", "Foreman", 36.0F, 3600.0F, 0.0F);
    manager m(5, "Rakesh Kumar", "Asst. Sales Manager", 23, 15000.0F, 2000.0F);
    cout << "WORKDER DETAILS: " << endl;
    w.display();
    cout << endl << "MANAGER DETAILS: " << endl;
    m.display();
    return 0;
}