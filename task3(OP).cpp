#include<iostream>
using namespace std;

int main()
{
    
   int num;
   cout<<"Enter the number of rows"<<endl;
   cin>>num;
    system("cls");
   for(int a=1; a<=num; a++)
   {
        for(int space=num; space>a;space--)
        {
            cout<<" ";

        }
        for(int star=1; star<=a; star++)
        {

            cout<<"*";
        }
        cout<<endl;

   }
   
   for(int a=1; a<=num; a++)
   {

       for(int space=0; space<a;space++)
        {
            cout<<" ";

        }
        for(int star=num; star>a; star--)
        {

            cout<<"*";
        }
        cout<<endl;


   }

















}