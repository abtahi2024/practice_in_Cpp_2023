#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char s;
    cin>>a>>s>>b;
    int ral;
    
        if(s=='<')
        {
            ral=(a<b);
        }
        else if(s=='>')
        {
            ral=(a>b);
        }
        else if(s=='=')
        {
            ral=(a==b);
        }
        
    
    if(ral)
    {
        cout<<"Right"<<endl;
    }
    else
    {
        cout<<"Wrong"<<endl;
    }
  
    return 0;
}