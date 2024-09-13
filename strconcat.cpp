#include<iostream>
using namespace std;

void func(){
    cout<<"This is function"<<endl;
    func();
}

int main(int argc, char const *argv[])
{
    func();
    return 0;
}
