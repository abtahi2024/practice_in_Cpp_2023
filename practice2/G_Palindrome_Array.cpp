#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0,j=n-1;
    // for(int i=0;i<n;i++)
    int flag=1;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            flag=0;
            break;
        }
        i++;
        j--;
    }
    if(flag==1)
    {
        cout<<("YES");
    }
    else
    {
        cout<<("NO");
    }
    return 0;
}









// #include <iostream>
// #include <vector>

// int main() {
//     // Read input
//     int N;
//     std::cin >> N;

//     // Read the array
//     std::vector<int> A(N);
//     for (int i = 0; i < N; ++i) {
//         std::cin >> A[i];
//     }

//     // Initialize pointers
//     int left = 0;
//     int right = N - 1;

//     // Check if the array is a palindrome
//     while (left < right) {
//         if (A[left] != A[right]) {
//             // If the elements at the current positions are not equal, it's not a palindrome
//             std::cout << "NO";
//             return 0;
//         }
//         // Move the pointers towards each other
//         ++left;
//         --right;
//     }

//     // If the loop completes without breaking, the array is a palindrome
//     std::cout << "YES";

//     return 0;
// }
