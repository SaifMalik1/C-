#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int id;
    string dateOfBirth;

public:
    void setNameAndDOB(string N, string date)
    {
        name = N;
        dateOfBirth = date;
    }

    void display()
    {
        cout << "Date of Birth of " << name << " is " << dateOfBirth << endl;
    }
};

int main()
{
    Student s1;
    Student s2;
    Student s3;
    Student s4;
    s1.setNameAndDOB("Saif", "19-Jan-2004");
    s2.setNameAndDOB("Aliyan", "20-March-2004");
    s3.setNameAndDOB("Saqib", "15-April-2004");
    s4.setNameAndDOB("Essa", "18-Dec-2004");
    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}
