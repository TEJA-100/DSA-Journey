/*
alg 

1. read array size (N)
2. read array elements 
3. if array is 0 return false

4. assign gcd value gcd = arr[1 or 0]
5. for i = 1 ----> n:
    while(a[i] != 0)  will runs 
6. rem = gcd % a[i] and 
         gcd = a[i] 
         a[i]= rem
7. gcd value 


*/


#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    int gcd = arr[0];
    for(int i=1;i<N;i++)
    {
        while(arr[i] != 0)
        {
            int r = gcd % arr[i];
            gcd = arr[i];
            arr[i]=r;


        }
    }

    cout<<gcd;
}