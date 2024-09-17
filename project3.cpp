//A project to enter student grades into the grade identifier by the user

#include <iostream>
using namespace std;

int main()
{

    int gr;
    cout<<"enter your grade : "<<endl;                  //Message to the user to write the grade
    cin>>gr;   

    if ( gr>49 && gr !=0)                                                   //First condition
{                                         
    if(gr>=50 && gr<=60)                                
    {
        cout<<"your grade is : D "<<endl;
    }
     else if (gr>=60 && gr<=70)    
     {
        cout<<"your grade is : C "<<endl;
     }
     else if (gr>70 && gr<=80) 
     {
         cout<<"your grade is : B "<<endl;
     }
     else if (gr>80 && gr<=90) 
     {
         cout<<"your grade is : B+ "<<endl;
     }
     else if (gr>90 && gr<=100) 
     {
         cout<<"your grade is : A "<<endl;
     }
     else{
        cout<<"your grade is above 100 "<<endl;
     }
}
else
{
    cout<<"your grade is under 50 or equal 0"<<endl;   //If the user writes a number less than 50 or equals zero, it will show
}  



    return 0;
}