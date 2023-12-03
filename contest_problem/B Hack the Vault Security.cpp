#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.size();
    cout<<n<<endl;
    if(n<3)
    {
        cout<<"No"<<'\n';
        return 0;
    }

    for(int i=0; i<n-2; i++)
    {
        if(s[i] == 'A' && (s[i+1]=='A' || s[i+1]=='B') && (s[i+2]=='A'|| s[i+2]=='B' || s[i+2]=='C'))
        {
            cout<<"Yes"<<'\n';
            return 0;
        }
    }
    cout<<"No"<<'\n';
}


