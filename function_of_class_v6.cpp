#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "Total mark of " << name << " = " << math + english << endl;
    }
    void hello()
    {
        cout << "Hello from " << name << endl;
    }
};
int main()
{
    Student rohim("Rohim Khan", 44, 50, 40);
    // rohim.hello();
    rohim.total();
    Student sakib("Sakib Khan", 44, 50, 40);
    sakib.hello();
    return 0;
}