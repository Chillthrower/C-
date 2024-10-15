#include<bits/stdc++.h>
using namespace std;

class Employee
{
    private:
        string name;
        string emp_num;
        float basic_salary;
        float da;
        float it;
        float netSalary;
    
    public:
        Employee(string na, string num, float salary)
        {
            name = na;
            emp_num = num;
            basic_salary = salary;
            da = 0;
            it = 0;
            netSalary = 0;
        }


        void calculate()
        {
            da = basic_salary * 0.2;
            it = basic_salary * 0.1;
            netSalary = basic_salary + da - it;
        }

        float getNetSalary()
        {
            return basic_salary + da;
        }

        void displayDetails() 
        {
            cout << "Employee Name: " << name << endl;
            cout << "Employee Number: " << emp_num << endl;
            cout << "Basic Salary: $" << basic_salary << endl;
            cout << "Dearness Allowance (DA): $" << da << endl;
            cout << "Income Tax (IT): $" << it << endl;
            cout << "Net Salary: $" << netSalary << endl;
            cout << "Gross Salary: $" << getNetSalary() << endl;
        }
};

int main()
{
    string name, num;
    float basic_salary;
    cout    <<  "enter name :   "   <<  endl;
    getline(cin, name);

    cout    <<  "enter emp num  :   "   <<  endl;
    cin >>  num;

    cout    <<  "salary :   "   <<  endl;
    cin >>  basic_salary;

    Employee emp(name, num, basic_salary);

    emp.calculate();
    emp.displayDetails();

    return 0;
}