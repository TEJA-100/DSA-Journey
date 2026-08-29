/*
 ALG

 prime no ->  1. itself or one no 
 eg :
   ->29 /1 = prime 
     29 /2 = not a prime 
   ->29 /29 = prime 

 1. Read N value 
 2. if n less than & equal to (<=) 1 -> not a prime 
 3. if n (n%i==0) n ->  is not a prime 
 4. else i value increment until (i=n) ->
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n<=1)
    {
        cout<<"Not a prime";
        return 0;
    }

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not a prime"<<endl;
            return 0;
        }
        
    }

    cout<<"Prime";
    return 0;


}


*/



#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n<=1)
  {
   cout<<"Not Prime";
   return 0;

  }
   for(int i=2;i*i<n;i++)
   {
    if(n%i==0)
    {
     cout<<"Not Prime";
    }
    
   }
    cout<<"Prime";
    return 0;
}






/* 
ap-1
* is for where n<i 
 ->  it checks the entire from starting to ending 
 ->  like 29 is div 1,29 only 
 -> if i given a lagre no is 1326 is prime or not , it consume a alot of time to complete program 

ap-2
* it is for where i*i<n
  -> it checks the pairs like (1,2) like factors of the number 
 */