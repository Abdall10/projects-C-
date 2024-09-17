#include <iostream>
using namespace std;

int main()
{

    int a=100;
    int b=200;
    bool c=true;
    char d='m';

        if(a==100 || c==false || d=='m')  //nested if
        {
            if(b==201)
            {
                cout<<"value of a is 100 and b is 200 \n";
            }
            else if(b==100){
                cout<<"Erorrs"<<endl;
            }
            else{
                cout<<" Erorrs value"<<endl;
            }
        }

    
   



    return 0;


}