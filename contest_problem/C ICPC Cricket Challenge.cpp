#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;cin>>n>>k;
   int a[n];
   for(int i=0; i<n; i++)cin>>a[i];
   int ans=0;
   for(int i=0; i<n-1; i++){
    int sum = a[i]+a[i+1];
    if(sum>k)ans++;
   }
   cout<<ans<<'\n';

}


