#include<iostream>
using namespace std;

class Test 
{
    public:
    int a = 10;

    void method()
    {
        //cout<<"This is method";
        cout<<"value of a is : "<<a<<endl;
    }
};

int main()
{
    Test obj;
    //cout<<obj.a<<endl;
    obj.method();
    cin>>obj.a;
    obj.method();
}
