#include<bits/stdc++.h>
using namespace std;
int *sort_it(int n)
{
    int* a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    return a;
}
int main()
{
    int n;
    cin>>n;
    // int a[n];
    // int* a=new int[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    int *v=sort_it(n);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    // delete[] a;

    return 0;
}