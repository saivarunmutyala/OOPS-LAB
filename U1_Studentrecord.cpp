#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int rollno;
    float marks;
    public:
    void setdetails(string n, int r, float m)
    {
        name=n;
        rollno=r;
        marks=m;
    }
    void display()
    {
        cout << "name:" << name << endl;
        cout << "rollno:" << rollno << endl;
        cout << "marks:" << marks << endl;
    }
};
int main()
{
    student s1("suresh", 67 , 67);
    student s2("ravi", 78 , 78);
    student s3("varun", 87 , 86);
    cout<<"student record:\n";
    s1.display();
    s2.display();
    s3.display();
    return 0;
}