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
      string s;
      cin>>s;
      int a[26]={0};
      int cnt=0;
      // for(int i=0;i<n;i++)
      // {
      //   cin>>a[i];
      // }
      for(int i=0;i<n;i++)
      {
        int p=s[i]-'A';
      if(a[p]==0)
      {
        cnt+=2;
      }
      else
      {
        cnt++;
      }
      a[p]++;
      }
      cout<<cnt<<endl;
    }
  return 0;
}