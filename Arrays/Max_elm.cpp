/*
ALG: 


1. the array size N  and take array elements acc to size
2. read values 
3. main part 
   -> for i to n
    -> check if arr[i] < max arr element 
      -> if true max elem is equal to arr[i]
      
4. return max elem


Dry Run:


n=3
arr[3]={1,2,3};

for = 0 -> n
--> i = 0
  arr[0]=max
   1 > 0 (t)
   max = 1
--> i = 1
  arr[1]=max
   2 > 1 (t)
   max = 2;
--> i = 2
  arr[2]=max
   3 > 2 (t)
   max = 3;
   
   */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    int m=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        
        cin>>arr[i];
    }

    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    cout<<max;
}


/*

Note:

------------------------------------------------------------
here for second or third max elem is 
-> inital the sec_max=arr[0]
   ->( (arr[i]>sec_max)  &&  (arr[i] != max) )

   get sec_max elem is arr[i]

-------------------------------------------------------

to find out min .
 just replace 
 
        if(arr[i]< max)   //  replace the logic >(max) to <(min)
        {
            max=arr[i];
        }
   
   
*/