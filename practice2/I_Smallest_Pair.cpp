#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
            int minsum=INT_MAX;

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int v=a[i]+a[j]+j-i;
                minsum=min(minsum,v);
            }
        }
        cout<<minsum<<endl;

    }
  
    return 0;
}