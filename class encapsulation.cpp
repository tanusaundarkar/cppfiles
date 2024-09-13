#include<iostream>
using namespace std;

class Encapsulation
{
    int a = 20;

    public :
    void print()
    {
        cout<<a<<endl;
    }
};

int main()
{
    Encapsulation obj;
    obj.print();
}