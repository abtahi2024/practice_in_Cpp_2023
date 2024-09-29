#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int max=INT_MIN;
 int a[n]; 
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
    if(a[i]>max)
    {
        max=a[i];
    }
 }
  cout<<max;

    return 0;
}