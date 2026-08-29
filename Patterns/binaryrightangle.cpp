#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        int bd= (i%2==1)?1:0;
        for(int j=1;j<=i;j++)
        {
            cout<<bd;
            bd=1-bd;

        }
        cout<<endl;
    }
}

/*
1
01
101
0101
10101
*/