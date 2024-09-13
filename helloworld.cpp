#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0;
    int sum = 0;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    while (i < 10)
    {
        if(i % 2 == 0)
        {
            sum += arr[i];
            cout<<arr[i]<<" ";
        }
        i++;
    }

    cout <<endl<< "sum: " << sum << endl;

    return 0;
}
