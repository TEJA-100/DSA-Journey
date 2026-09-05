/*
alg 


1. read n number 
2. check n ! = 0 
  -> for i to n
  -> if N% i ==0
     -> i value       //  divisor of n

without pairs

with pairs :  i *i < = n

  */


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for( int i =1; i*i <= n;i++)
    {
        if(n%i == 0)
        {
            cout<<i<<" ";
            if(i != n/i)
            {
                cout<<n/i<<" ";
            }
            
        }
    }
}