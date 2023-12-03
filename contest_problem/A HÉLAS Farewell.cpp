#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,k;
    s = "DIUSEDULOUS";
    int n = s.size();
    for(int i=0; i<n-1; i++)
    {
        if(s[i] != s[i+1])
            k+=s[i];
        else
        {
            k += s[i];
            i++;
        }
    }
    if(s[n-1] != s[n-2])k+=  s[n-1];
    //cout<<k<<'\n';
    int flag=0;
    for(int i=0; i<k.size(); i++)
    {
        flag++;
        for(int j=i+1; j<k.size(); j++)
        {
            if(k[i] == k[j] )k.erase(k.begin()+j);
        }
    }

    // cout<<"."<<'\n';
    cout<<flag<<endl;
}


