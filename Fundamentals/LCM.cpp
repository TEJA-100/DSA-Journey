#include<iostream>
using namespace std;

int main()
{
int a, b;
cin >> a;
cin >> b;


// Save original values
int x = a;
int y = b;

// Find GCD
while(b != 0)
{
    int temp = b;
    b = a % b;
    a = temp;
}

int ans = a;

// Find LCM
int res = (x / ans) * y;

cout << "GCD = " << ans << endl;
cout << "LCM = " << res << endl;

return 0;

}
