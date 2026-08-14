#include <iostream>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;
    float basicSalary;
    float *monthlyEarnings;
    int months;

public:

    // Constructor
    Employee()
    {
        monthlyEarnings = nullptr;
    }

    // Accept employee details
    void acceptDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Number of Months: ";
        cin >> months;
    }

    // Dynamically allocate memory
    void allocateMemory()
    {
        monthlyEarnings = new float[months];
    }

    // Accept monthly earnings
    void acceptEarnings()
    {
        cout << "\nEnter monthly earnings:\n";

        for (int i = 0; i < months; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> monthlyEarnings[i];
        }
    }

    // Calculate total earnings
    float calculateTotal()
    {
        float total = 0;

        for (int i = 0; i < months; i++)
        {
            total = total + monthlyEarnings[i];
        }

        return total;
    }

    // Find highest earning month
    int highestMonth()
    {
        int highest = 0;

        for (int i = 1; i < months; i++)
        {
            if (monthlyEarnings[i] > monthlyEarnings[highest])
            {
                highest = i;
            }
        }

        return highest;
    }

    // Display complete analysis
    void display()
    {
        float total = calculateTotal();
        float average = total / months;
        int highest = highestMonth();

        cout << "\n===== Employee Salary Analysis =====\n";

        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;

        cout << "\nMonthly Earnings:\n";

        for (int i = 0; i < months; i++)
        {
            cout << "Month " << i + 1 << ": "
                 << monthlyEarnings[i] << endl;
        }

        cout << "\nTotal Earnings: " << total << endl;
        cout << "Average Monthly Earning: " << average << endl;

        cout << "Highest Earning: "
             << monthlyEarnings[highest] << endl;

        cout << "Highest Earning Month: Month "
             << highest + 1 << endl;
    }

    // Destructor
    ~Employee()
    {
        delete[] monthlyEarnings;
    }
};

int main()
{
    Employee e;

    e.acceptDetails();

    e.allocateMemory();

    e.acceptEarnings();

    e.display();

    return 0;
}