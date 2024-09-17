// Check Whether Number is Even or odd using if else

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number : " << endl;
    cin >> num;
    if (num != 0) // The number not equal to zero
    {
        if (num % 2 == 0)
        {
            cout << num << " is even . " << endl;
        }
        else
        {
            cout << num << " is odd . " << endl;
        }
    }
    else
    {
        cout<<"The number is 0 "<<endl;
    }

    return 0;
}