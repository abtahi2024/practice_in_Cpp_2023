#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // string s;
    // cin>>s;
    // sort(s.begin(),s.end());
    int n;
    cin>>n;
//    char s[n];
//    cin>>s[n];
    char a;
   int cnt[26]={0};
   for(int i=0;i<n;i++)
   {
    cin>>a;

    int v=a-'a';
    cnt[v]++;
   }
   for(int i=0;i<26;i++)
   {
    int k=0;
    while(k<cnt[i])
    {
        char g =i+'a';
        cout<<g;
        k++;
    }
   }
    // cout<<s<<endl;
    return 0;
}
