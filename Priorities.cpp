//Priorities
// ()
// * / %
// + - 
// =

#include <iostream>
using namespace std;

int main()
{
    cout<<1+2-3+4<<endl;  // 3-3=0 = 4
     cout<<1+2-(3+4)<<endl;   // 3 = -4
     cout<<1*2+3-4/2<<endl; // 2 +3 -2 =3
     cout<<2+2/2*(3-4)%5<<endl;
     //    2+2/2 * -1
     //    2+ 1*-1 % 5 
     //    2+ (-1) &5
     //        2 -1 = 1
    
    cout<<endl<<(3+1-3)*1/2%2<<endl;
    //                1 * 1 / 2%2
    //                    0  % 2 
    //                     0
    


   cout<<endl<<3*2/6+5%5<<endl;

                //6 /6 +5%5
                // 1 + 5%5 = 1


                int x =1; 
                x = x=5;


    cout<<endl<<3*2/6+5%5<<endl;
             //6 /6 +5%5
            // 1 + 5%5 = 1





    return 0;
}