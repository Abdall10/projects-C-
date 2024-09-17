// Program to check whether an integer is positive ,negative or zero

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter an interger"<<endl;
    cin>>number;


    if(number>0)
    {
        cout<<"your entered a positive integer "<<endl;
    }
    else if (number<0)
    {
        cout<<"your entered a negative integer "<<endl;
    }
    else
    {
        cout<<"you entered 0\n";
    }

 
    
   



    return 0;


}