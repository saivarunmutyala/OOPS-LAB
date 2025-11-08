#include<iostream>
using namespace std;
class laptop
{
    string brand;
    string processor;
    int ram;
    public:
    laptop(string b, string p, int r)
    {
        brand = b;
        processor = p;
        ram = r;
    }
    void display()
    {
        cout << brand << " | " << processor << " | " << "Gb\n";
    } 
};
int main()
{
    laptop l1("Apple", "m4 chip" , 16);
    laptop l2("Asus", "amd ryzen 7" , 32);
    laptop l3("Dell", "intel i7" , 32);
    cout << " laptop details:\n";
    l1.display();
    l2.display();
    l3.display();
    return 0;
}