#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int i;
    int len = s.size();
    for (i=len-1; i>=0; i=i-3)
    {
        cout<<s<<","<<s<<endl;
    }

}
