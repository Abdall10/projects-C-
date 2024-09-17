

#include <iostream>
using namespace std;

int main()
{

            int x =3;
            

            switch (x)
            {
                 case 3: 
                    cout << "x is equal 3" <<endl;
                 break;   // The situation is over  For that matter            

                case 2: 
                    cout << "x is equal 2" <<endl;
                 break; 
                 case 10: 
                    cout << "x is equal 10" <<endl;
                 break;
                 default:  //else
                 cout<< "x is not equal to any number"<<endl;   
                 //break is An optional condition because it is the last condition
            }

    return 0;

}