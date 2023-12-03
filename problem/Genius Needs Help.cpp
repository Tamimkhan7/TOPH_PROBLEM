#include <bits/stdc++.h>
using namespace std;
int main ()
{
    unsigned long long int t;
    unsigned long long a,b,sum;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        cin>>a>>b;
        sum = a+b;
        //printf("Case #%d: %s\n", i, sum);
        cout<<"Case #"<<i<<":"<<" "<<sum<<endl;
    }
}
