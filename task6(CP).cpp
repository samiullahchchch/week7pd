#include <iostream>
using namespace std;

int main()
{
    int days,untreated=0,treated =0;
    cout << " Enter the number of days" << endl;
    cin>>days;

    for(int x=1; x<=days;x++)
    {
     int patients;
     cout<<"Enter the number of patients"<<endl;
     cin>>patients;
    // takes numbre of patients as a input;
    // total number of doctors are seven before and after the "third day"

    if (patients > 7 && x != 3)
    {
        untreated = (patients - 7) + untreated;
        treated = (patients - (patients - 7)) + treated;
    }
     
    if (patients <= 7 && x != 3)
    {
        treated = (patients ) + treated;
    }
    // every third day ....one doctor is include in previos doctors
    // so  availble doctrs on thirds day  are eight.....

    if( x == 3 && patients>8 )
    {
        
        untreated = (patients - 8) + untreated;
        treated = (patients - (patients - 8)) + treated ;
    }


    if( x == 3 && patients<=8 )
    {
        treated = patients  + treated;
    }

    }


    cout<<"treated patients :"<< " "<< treated<<endl;
    cout<<"untreated patients :"<< " "<< untreated<<endl;
    
}