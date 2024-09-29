#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    int result;
    if(s=='+')
    {
        result=(a+b);
    }
    else if(s=='-')
    {
       result=(a-b); 
    }
    else if(s=='*')
    {
        result=(a*b);
    }
    else if(q=='=')
    {
        result=(a=b);
    }

    if(result==c)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<result;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int a, b, c;
//     char s, q;

//     // Read input
//     cin >> a >> s >> b >> q >> c;

//     // Initialize result variable
//     int result;

//     // Check the operator and perform the operation
//     if (s == '+') {
//         result = a + b;
//     } else if (s == '-') {
//         result = a - b;
//     } else if (s == '*') {
//         result = a * b;
//     }

//     // Check if the result matches C
//     if (result == c) {
//         cout << "Yes";
//     } else {
//         cout << result;
//     }

//     return 0;
// }
