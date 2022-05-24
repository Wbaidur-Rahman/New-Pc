#include<bits/stdc++.h>
using namespace std;

void show(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
        cout << v[i] << "   ";
    cout<<endl;
}
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        bool ok = true;
        int n,m,k;
        cin >> n;
        vector<int> a(n),b(n);
        vector<pair<int,int> > v1,v2;

        for(int i=0;i<n;i++)
            cin >> a[i];
        for(int i=0;i<n;i++)
            cin >> b[i];

        for(int i=0;i<n;i++)
            v1.push_back(make_pair(a[i],b[i]));

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(v1[j] == make_pair(a[i],b[i])){
                    swap(v1[i],v1[j]);
                    if(i!=j)
                        v2.push_back(make_pair(i,j));
                    break;
                }
            }
            if(v1[i] != make_pair(a[i],b[i]))
            {
                ok=false;
                break;
            }
        }

        if(ok){
            cout<<v2.size()<<endl;

            for(int i=0;i<v2.size();i++)
                cout<<v2[i].first +1 << "  " << v2[i].second +1<<endl;
        }
        else
            cout << -1 <<endl;

    }
}
