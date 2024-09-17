//nested for

#include <iostream>
using namespace std;

int main()
{

    int week = 72;
    int day = 7;

    for(int i =1;i<=week;i++)
    {
        cout<<"week : "<<i<<endl;
        for(int j = 1;j<=7;j++)
        {
            cout<<"     day : "<<j<<endl;
        }

    }
  

  return 0;

}