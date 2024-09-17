// Logical operations

// and ( value && value ) , Both conditions must be met

// or ( value || value ) One condition is sufficient to true

// not equal  ( value != value )

#include <iostream>
using namespace std;

int main()
{

        int x=10;
        int y=6;
        int z=11;
        

        cout<<(x>y &&  x>z)<<endl;   //and //Both conditions must be met to true   //true=1 and false=0
        cout<< (x>y || x>z)<<endl;   //or //One condition is sufficient to true   //true=1 and false=0

        cout<<endl<<(10>6 || 11>10)<<endl;  // In or, one condition must be met
        cout<<(10>60 && 11>10)<<endl;       // In and, both conditions must be met


        cout << (x != y)<<endl; //not equal //The output will be 1 because

        cout <<endl<<(!(x<3 && x < 10))<<endl; // ! is not // if x : true = 0 if false = 1 ! It's Reverse process

    return 0;
}