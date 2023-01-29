#include<iostream>
using namespace std;

int main()
{

int num;
cout<<"Enter the  number "<<endl;
cin>>num;
        for(int a =0; a<=num; a++)
        {
                for(int b=num; b>a; b--)
                {
                 
                        cout<<"*";
                }
                cout<<endl;
        }       




}