#include <bits/stdc++.h>
using namespace std;
int main()
{
   int m,h,i,r,a;cin>>m>>h>>i>>r>>a;
   long long sum = m*(h+i);
   int xx = a-r;
   if(xx>=sum)cout<<"Congratulations Ichigo"<<'\n';
   else cout<<"Ichigo will Die single"<<'\n';
}


