#include <iostream>

using namespace std;

int main()
{
        string f1 ;
        string s1 ;
        string f2 ;
        string s2 ;
        cin>>f1>>s1>>f2>>s2;
        if ((s1 == s2 && f1 == f2) || (s1 == s2 && f1 != f2)) {
            cout<<"ARE Brothers"<<endl;
        } else {
            cout<<"NOT"<<endl;
        }

    }

