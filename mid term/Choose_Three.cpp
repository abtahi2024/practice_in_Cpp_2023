#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int n,s;
        cin>>n>>s;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(a[i]+a[j]+a[k]==s)
                    {
                        if(flag==0)
                        {
                        flag=1;
                        break;
                        }
                    }
                }
            }
        }
         if(flag)
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

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     for (int t = 0; t < T; t++) {
//         int n, s;
//         cin >> n >> s;
//         int a[n];

//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         int flag = 0;
//         for (int i = 0; i < n && flag == 0; i++) {
//             for (int j = i + 1; j < n && flag == 0; j++) {
//                 for (int k = j + 1; k < n; k++) {
//                     if (a[i] + a[j] + a[k] == s) {
//                         flag = 1;
//                         break;
//                     }
//                 }
//             }
//         }

//         if (flag) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }

