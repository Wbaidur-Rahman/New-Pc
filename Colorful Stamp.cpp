#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,i,j,k,c=0;
        cin >> n;
        string s;
        cin >> s;
        s+='W';
        j=0,k=0;
        for(i=0;i<=n;i++)
        {
            if(s[i]=='R') j++;
            else if(s[i]=='B') k++;
            else{
                if(j==0 && k!=0 || j!=0 && k==0) {cout<<"NO\n"; break;}
                j=0,k=0;
            }
        }

        if(i>n)
            cout << "YES\n";
    }
}
