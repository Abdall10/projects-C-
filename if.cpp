// Logical operations

// and ( value && value ) , Both conditions must be met

// or ( value || value ) One condition is sufficient to true

// not equal  ( value != value )

// If , esle

#include <iostream>
using namespace std;

int main()
{
        int a=11;
        int z=12;

        if(a==10)                                   // The compiler prints the first condition that is met and leaves the rest
        {
            cout<<"a is less than 20 \n";
        }
        else if(a==0){                                              // else if () It can be written more than once
            cout<<"value of a is 11"<<endl;
        }
        else if(z==0)
        {
             cout<<"value of z is 12 \n";
        }
        else{
            cout<<"Undefined value"<<endl;                  // else write once
        }
    return 0;
}