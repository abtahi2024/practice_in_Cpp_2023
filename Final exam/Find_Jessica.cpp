#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    // int f=false;
    while(ss>>word)
    {
      if(word=="Jessica")
      {
        cout<<"YES";
        return 0;
      }
    }
    //   if(f)
    //     {
    //         cout<<"YES";
    //     }
        // else
        // {
            cout<<"NO";
        // }
    
    

   return 0;
}