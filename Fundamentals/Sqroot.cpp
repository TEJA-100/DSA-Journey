/*

ALG:

1. read n value 
2.  int res =1;
3. check res*res is less than (<=n)
4. if yes, res + 1
5. if no, return res-1

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res;

    for(res =1;res*res <= n; res++)
    {
       
    }


    /*
    while(res*res<=n)
    {
    res++}
    
    */
    cout<<res-1;
    return 0;
}