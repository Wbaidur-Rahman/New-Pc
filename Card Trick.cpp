#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,m,b;
        long long s=0;
        cin >> n;
        vector<int> a(n+2);
        for(int i=0;i<n;i++)
            cin >> a[i];

        cin >> m;
        for(int i=0;i<m;i++)
            {
                cin >> b;
                s+=b;
            }

        cout << a[s%n] <<endl;
    }
}
