#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // define variables
    string operation;
    double number1, number2;


        // get user input
        cout <<"Enter First Number : "<<endl;
        cin >>number1;
        cout <<"Enter Operation (+, -, *, /) : "<<endl;
        cin >>operation;
        cout <<"Enter Second Number : "<<endl;
        cin >>number2;

        // if else setatment checking entered operation
        if (operation == "+"){
            cout<<number1 + number2<<endl;
        } 
        else if (operation == "-") {
            cout<<number1 - number2<<endl;
        }
        else if (operation == "*") {
            cout<<number1 * number2<<endl;
        }
        else if (operation == "/") {
            cout<<number1 / number2<<endl;
        }
        else {
            cout<<"Not a recognize operation"<<endl;
        }



    return 0;
}