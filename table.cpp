#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number you want to see the table of: ";
    cin >> n;
    for (int i = 1;i<= 10; i++)
    {
        cout << n << "*" << i <<"=" << n * i << endl;
    }
}    