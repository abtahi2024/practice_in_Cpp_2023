#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int v=max({a,b,c});
    int u=min({a,b,c});
    cout<<u<<" "<<v;
    return 0;
}