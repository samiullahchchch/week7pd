#include<iostream>
using namespace std;

int main()
{
   float number,count2 =0 ,count3 =0,count4 =0 ;
   float  p2=0,p3=0,p4=0;
   // here number is varible which take total number from the user as a input
   //  count2 is counter for the wich is divisble by 2
   //  count3 is counter for the wich is divisble by 3
   //  count4 is counter for the wich is divisble by 4
   // p2 is the varible which save the result of percentage calculation for those number which divide
   // by 2
   // p3 is the varible which save the result of percentage calculation for those number which divide
   // by 3
   // p4 is the varible which save the result of percentage calculation for those number which divide
   // by 4
   
   cout<<"Enter the number on which you applied operation "<<endl;
   cin>>number;


   for(int x=1; x<=number ; x++ )
   {
    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;

    if(num % 2 == 0)
    {
        count2 = count2 + 1;

    }

     if(num % 3 == 0)
    {
        count3 = count3 + 1;

    }


     if(num % 4 == 0)
    {
        count4 = count4 + 1;

    }

     

   }

      
      p2 = (count2/number)*100.00;
      p3 = (count3/number)*100.00;
      p4 = (count4/number)*100.00;
    
      
      cout<<"THE percentage is ;"<<p2<<"%"<<endl;
      cout<<"THE percentage is ;"<<p3<<"%"<<endl;
      cout<<"THE percentage is ;"<<p4<<"%"<<endl;
      
    
    
    
    
    
    
    
    return 0;
}



