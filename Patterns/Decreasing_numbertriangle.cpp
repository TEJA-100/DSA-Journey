#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int num= n*(n+1)/2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }
}

/*
15 
14 13 
12 11 10 
9 8 7 6 
5 4 3 2 1 

*/