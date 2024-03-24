#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    student()
    {
        cout << "Default Constructor" << endl;
    } // Default Constructor

    student(string s, int a, int g)
    {
        cout << "Parameterised Constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } // Parameterised Constructor

    student(student &a)
    {
        cout << "Copy Constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    } // Copy Constructor

    ~student()
    {
        cout << "Destructor Called" << endl;
    }

    void setName(string s)
    {
        name = s;
    }
    void getName()
    {
        cout << "Name: " << name << endl;
    }
    void printInfo()
    {
        cout << "Name: " << name << endl
             << "Age: " << age << endl
             << "Gender: " << gender << endl;
    }
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cin >> s >> arr[i].age >> arr[i].gender;
    //     arr[i].setName(s);
    // }

    // arr[1].getName();
    // arr[1].printInfo();

    student a("Darsh", 18, 0);
    // a.printInfo();
    student b("NotDarsh", 19, 1);
    student c = a;
    if (b == a)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }
    return 0;
}