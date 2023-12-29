#include <bits/stdc++.h>
using namespace std;
void solve()
{

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        while(n--)
        {
            string s;
            int sum, ans=0, wct=0;
            while(cin>>s)
            {
                if(wct>9)
                {
                    cout<<ans<<'\n';
                    return 0;
                }
                string xp;
                xp = (s);
                sum = stoi(xp);
                if(sum>=0)
                {
                    ans+=sum;
                }
                if(s == 'W' || s == 'N')ans++;
                if(s == "C" || s == "B" || s== "R")wct++;
            }
        }
    }
}


