#include <iostream>

using namespace std;
main()
{
int number;
cout<<"enter the number"<<endl;
cin>>number;;


 for(int i =1 ;i<=number;i++) 
{
         for(int j=1;j<=i; j++  )
         {
             cout<<"*";
         }
        cout<<endl;

}
}