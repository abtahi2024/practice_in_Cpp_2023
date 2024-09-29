#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    bool x=0;
    while (ss>>word)
    {
        if(x==1)
        {
            cout<<" ";
        }
        x=1;
        int i=0,j=word.length()-1;
        while (i<j)
        {
            swap(word[i],word[j]);
            i++;
            j--;
        }
        cout<<word;
        
        // for(int i=word.length()-1;i>=0;--i)
        // {
        //     cout<<word[i];   
        // }
        // cout<<" ";
    }

    

   return 0;
}