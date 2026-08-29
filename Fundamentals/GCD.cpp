/*
ALG
 1. read two values a, b = (12, 18)
    -> make sure that b != 0
 2. assign as  temp 
     temp = b  
     b = a%b
     a = temp
      
     loop litrates the untill b=0 



 3. return a value ;

*/


#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a;
    cin>>b;

    while(b !=0 )
    {
        int temp = b;
        b = (a%b);
        a =temp;
    }
    cout<<a;
    return 0;
}