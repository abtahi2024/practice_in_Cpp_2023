#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        string s,x;
        cin>>s>>x;
        int v=x.size();
        while(s.find(x)!=-1)
        {
          s.replace(s.find(x),v,"#");
        }
        cout<<s<<endl;

    }


 
   return 0;
}