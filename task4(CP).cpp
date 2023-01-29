#include <iostream>
using namespace std;
void checking(int num1);
int main()
{

int num;
cout<<"Enter the number"<<endl;
cin>>num;
 checking(num);


}

void checking(int num1)
{
for(int a = 1; a<=num1; a++)
{
 int a1=1,b=0,c=1;
 
 b = b + a;
 

 if (b%4 == 0  )
 {
    int c=1;
    c = b*10;
    cout<<c<<" ";

 }
 if (b%4 != 0  )
 {
    cout<<b<<" ";
 }
 

 }
}






