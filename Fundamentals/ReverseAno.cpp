/*
ALG:
1. read n value   
   -> n=123 (n>0)
2. remove the last element ny (n%i==0) it give 12.3
3. after rev=0 initial 
4. rev = rev *10 + last dig (remove)
5. remove the dec part (n/10)


*/


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rev=0;
    while(n>0)
    {
         int dig = n%10;
         rev = rev*10+dig;
         n= n/10;

        }
        cout<<rev;
}


/* 
ALG

1. initial rev = 0
2. n>0 after 
    -> n%10 to get last digit 
    -> revsering it 
    -> removeing last digit and again continues 
3. res taken 
*/