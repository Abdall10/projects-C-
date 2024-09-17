// while Repeat

#include <iostream>
using namespace std;

// program to find the sum of positive numbers
// if user enters a nagative number the loop ends
// the negative number entered is not added to the sum  

int main()
{

       int number=0;
       int sum =0;
       cout<<"enter the number"<<endl;
       cin>>number;

       while (number>=0)
       {
                sum=sum+number;
                cout<<"Enter a number"<<endl;
                cin>>number;   
       }
       cout<<"The sum of the number"<<sum<<endl;
    return 0;
}