// postfix & prefix !


#include <iostream>
using namespace std;

int main()
{

    int x =4;
    int y =10;

    cout<<"We have two values    : "<<endl<<" value x = 4 \n value y = 10"<<endl<<endl;

    cout << " The result of mathematical operations using postfix & prefix : "<<endl;
    cout <<" x+3  : "<<x+3<<endl;        //4+3=7
    cout <<" x    : "<< x<<endl;             //4
    cout <<" y++  : "<< y++<<endl;           //10 //11
    cout <<" ++y  : "<<++y<<endl;            //12
    cout <<" ++x  : "<<++x<<endl;             //5
    cout <<" x    : "<<x<<endl;                  //5
    cout <<" x++  : "<<x++<<endl;                //5 +1 x=6
    cout <<" y+x  : "<<y+x<<endl;                    //12+6=18
    cout <<" y    : "<<y<<endl;                          //12
    cout <<" x    : "<<x<<endl;                      //6


        return 0;
}

//increment x++
// decrement x--
//postfix x++
//prefix ++x

// x = 5 f++ , f=6
// x = 5 f-- , f=4


// x++ postfix
// ++x prefix

// x-- postfix
// --x prefix
