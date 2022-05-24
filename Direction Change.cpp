#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a,b;
        cin >> a >> b;
        if(a==1 && b > 2 || b == 1 && a>2)
        {cout << -1 << endl; continue;}
        if(a==b) {cout << 2*a-2<<endl; continue;}
        if(b > a) swap(a,b);
        int s = 2*a - 2 ;
        if(a%2==1 && b%2==0 || a%2==0 && b%2==1) s--;
        cout << s << endl;
    }
}
