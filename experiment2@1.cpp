#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;  

    (a = 5, b = 3); 

    cout << (a & b)<<(a | b)<<(a ^ b);

    return 0;  
}
