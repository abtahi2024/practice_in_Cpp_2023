#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int id;
    string nam;
    char sce;
    int totalMarks;
    Student(int id,string nam,char sce,int totalMarks)
    {
        this->id=id;
        this->nam=nam;
        this->sce=sce;
        this->totalMarks = totalMarks;
    }
};
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        // int id;
        // char name;
        // char sce;
        // cin>>id>>name>>sce;
    Student sakib(0,"",' ',0),rakib(0,"",' ',0),akib(0,"",' ',0);
    // Student sakib(int id,string nam,char sce,int totalMarks),rakib(0,"",' ',0),akib(0,"",' ',0);
    cin>>sakib.id>>sakib.nam>>sakib.sce>>sakib.totalMarks;
    cin>>rakib.id>>rakib.nam>>rakib.sce>>rakib.totalMarks;
    cin>>akib.id>>akib.nam>>akib.sce>>akib.totalMarks;
    Student high=sakib; 
    if(rakib.totalMarks>high.totalMarks||(rakib.totalMarks==high.totalMarks&&rakib.id<high.id))
    {
        high=rakib;
    }
    if(akib.totalMarks>high.totalMarks||(akib.totalMarks==high.totalMarks&&akib.id<high.id))
    {
        high=akib;
    }
    cout<<high.id<<" "<<high.nam<<" "<<high.sce<<" "<<high.totalMarks<<endl;
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int id;
    string nam;
    char sce;
    int totalmarks;
};
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
    student sakib,rakib,akib;
    cin>>sakib.id>>sakib.nam>>sakib.sce>>sakib.totalmarks;
    cin>>rakib.id>>rakib.nam>>rakib.sce>>rakib.totalmarks;
    cin>>akib.id>>akib.nam>>akib.sce>>akib.totalmarks;
    // if(rakib.totalmarks>sakib.totalmarks)
    if(sakib.totalmarks>=rakib.totalmarks&&sakib.totalmarks>=akib.totalmarks)
    {
        cout<<sakib.id<<" "<<sakib.nam<<" "<<sakib.sce<<" "<<sakib.totalmarks<<endl;
    }
    else if(rakib.totalmarks>=sakib.totalmarks&&rakib.totalmarks>=akib.totalmarks)
    {
        cout<<rakib.id<<" "<<rakib.nam<<" "<<rakib.sce<<" "<<rakib.totalmarks<<endl;
    }
    else
    {
        cout<<akib.id<<" "<<akib.nam<<" "<<akib.sce<<" "<<akib.totalmarks<<endl;
    }
    }
   

    return 0;
}










// #include<bits/stdc++.h>
// using namespace std;

// class student
// {
// public:
//     int id;
//     string nam;
//     char sce;
//     int totalmarks;
// };

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         student sakib, rakib, akib;

//         // Input for student sakib
//         cin >> sakib.id >> sakib.nam >> sakib.sce >> sakib.totalmarks;

//         // Input for student rakib
//         cin >> rakib.id >> rakib.nam >> rakib.sce >> rakib.totalmarks;

//         // Input for student akib
//         cin >> akib.id >> akib.nam >> akib.sce >> akib.totalmarks;

//         // Compare total marks
//         if (sakib.totalmarks >= rakib.totalmarks && sakib.totalmarks >= akib.totalmarks)
//         {
//             cout << sakib.id << " " << sakib.nam << " " << sakib.sce << " " << sakib.totalmarks << endl;
//         }
//         else if (rakib.totalmarks >= sakib.totalmarks && rakib.totalmarks >= akib.totalmarks)
//         {
//             cout << rakib.id << " " << rakib.nam << " " << rakib.sce << " " << rakib.totalmarks << endl;
//         }
//         else
//         {
//             cout << akib.id << " " << akib.nam << " " << akib.sce << " " << akib.totalmarks << endl;
//         }
//     }

//     return 0;
// }










// #include<bits/stdc++.h>
// using namespace std;

// class Student {
// public:
//     int id;
//     string nam; // Change char to string
//     char sce;
//     int totalMarks;

//     Student(int id, string nam, char sce, int totalMarks) {
//         this->id = id;
//         this->nam = nam;
//         this->sce = sce;
//         this->totalMarks = totalMarks;
//     }
// };

// int main() {
//     int T;
//     cin >> T;

//     for (int t = 0; t < T; t++) {
//         Student sakib(0, "", ' ', 0), rakib(0, "", ' ', 0), akib(0, "", ' ', 0);
//         cin >> sakib.id >> sakib.nam >> sakib.sce >> sakib.totalMarks;
//         cin >> rakib.id >> rakib.nam >> rakib.sce >> rakib.totalMarks;
//         cin >> akib.id >> akib.nam >> akib.sce >> akib.totalMarks;

//         Student high = sakib;
//         if (rakib.totalMarks > high.totalMarks || (rakib.totalMarks == high.totalMarks && rakib.id < high.id)) {
//             high = rakib;
//         }
//         if (akib.totalMarks > high.totalMarks || (akib.totalMarks == high.totalMarks && akib.id < high.id)) {
//             high = akib;
//         }
//         cout << high.id << " " << high.nam << " " << high.sce << " " << high.totalMarks << endl;
//     }

//     return 0;
// }

