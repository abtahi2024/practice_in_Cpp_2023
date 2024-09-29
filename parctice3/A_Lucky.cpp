#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        string s;
        cin>>s;
        int digit1=s[0],digit2=s[1],digit3=s[2],digit4=s[3],digit5=s[4],digit6=s[5];
        if(digit1+digit2+digit3==digit4+digit5+digit6)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }



   return 0;
}