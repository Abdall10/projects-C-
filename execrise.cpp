// Program to build a simple calculator using switch Statement

#include <iostream>
using namespace std;

int main()
{
    char oper ;
    double num1;
    double num2;
    cout<<"Enter an operation (+,-,*,/) : ";
    cin>>oper;
    
    cout<<"Enter two number"<<endl;
    cin>>num1;
    cin>>num2;

    switch(oper)
    {
        case '+':
        cout<<num1 << "+" << num2 <<"="<<num1+num2<<endl;
        break;
        case '-':
        cout<<num1 << "-" << num2 <<"="<<num1-num2<<endl;
        break;
        case '*':
        cout<<num1 << "*" << num2 <<"="<<num1*num2<<endl;
        break;
        case '/':
        cout<<num1 << "/" << num2 <<"="<<num1/num2<<endl;
        break;
        default:
        cout<<"Invalid Operator";
        
    }



            

           
    return 0;

}