#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    long long int n, result;
    cin>>n;
    long long int fact =1,i;
    for ( i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    fact = (fact*i)%1000;
    cout<<fact<<endl;

}
