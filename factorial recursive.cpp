#include<iostream>
using namespace std;

int func(int n)
{
    if(n <= 0)
    {
        return 1;
    }
    return n * func(n-1);
}

int main()
{
    int ans = func(5);
    cout<<ans;
}