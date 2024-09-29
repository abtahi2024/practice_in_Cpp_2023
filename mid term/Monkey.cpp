#include<bits/stdc++.h>
using namespace std;
int main()
{
  char s[100001];

  while(cin.getline(s,100001))
//   while(cin>>s)
  {
//   getchar();
    int v=strlen(s);
  sort(s,s+v);
  for(int i=0;i<v;i++)
  {
    if(s[i]!=' ')
    {
        cout<<s[i];
    }
    // else
    // {
    //     cout<<s[i];
    // }
  }
  cout<<endl;
  }
    return 0;
}


