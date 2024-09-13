#include<iostream>
using namespace std;

int fibb(int n){
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    return fibb(n-2) + fibb(n-1);
}

int main(int argc, char const *argv[])
{
    int x = fibb(7);

    cout<<x<<endl;
    return 0;
}
