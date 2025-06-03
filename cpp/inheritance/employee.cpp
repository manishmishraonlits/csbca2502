#include <iostream>

using namespace std;
class employee // base class
{
protected:
    int id;
    string name;
    string designation;

public:
    virtual void display() = 0;     // pure virtual function
};

class worker : public employee // derived class
{
private:
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

class manager : public employee // derived class
{
private:
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
    employee *e = NULL; // base class pointer
    e = new worker(1, "Ratan Lal", "Foreman", 36.0F, 3600.0F, 0.0F);

    cout << "WORKER DETAILS: " << endl;
    e->display();

    e = new manager(5, "Rakesh Kumar", "Asst. Sales Manager", 23, 15000.0F, 2000.0F);
    cout << endl
         << "MANAGER DETAILS: " << endl;
    e->display();

    delete e;
    return 0;
}