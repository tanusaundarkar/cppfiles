#include<iostream>
using namespace std;

class Test {
    public:

    int a = 10;
    int b = 20;
};

int main(int argc, char const *argv[])
{
    Test obj;

    cout<<obj.a<< " " <<obj.b;
    return 0;
}
