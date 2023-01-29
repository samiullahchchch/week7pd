#include<iostream>
using namespace std;

int main()
{
int num;
cout<<"Enter the number of rows"<<endl;
cin>>num;


for (int a=1; a<=num; a++)
{
   for(int b=1; b<=a; b++ )
   {
   cout<<"*";

   }
         for(int space=num; space>a; space-- )
   {
   cout<<" ";

   }
         for(int space=num; space>a; space-- )
   {
   cout<<" ";

   }

    for(int b=1; b<=a; b++ )
   {
   cout<<"*";

}
   
   cout<<endl;
}

   



}