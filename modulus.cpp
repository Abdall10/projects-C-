// A small project about modulus

#include <iostream>
using namespace std;

int main()
{
            cout<<"\t A small project about modulus : "<<endl;

        cout<<"modulus 5%5  is : "<<5%5<<endl;                           // 1- number % same number
        cout<<"modulus 4%5 is : "<<4%5<<endl;                          // 2- small % big
        cout<<"modulus 10%5 is : "<<10%5<<endl;                   //3- big % small = 5 , = 0 

        cout<<"modulus 11%5 is : "<<11%5<<endl;           // 6 1
        cout<<"modulus 20%3 is : "<<20%3<<endl;           // 3=17 ,3=14 ,3=11 ,3=8 ,3=5  ,2    


    return 0;
}

// modulus % :

// 1- number % same number = 0 ( 5%5=0 , 6%6=0 , 7%7=0 , 8%8=0)
// 2- small % big = small ( 4%5=4, 5%6=5, 6%7=6 )
// 3- big % small =        14%7=7-7=0   , 15%7=8-7=1  16%8=8-8=0 