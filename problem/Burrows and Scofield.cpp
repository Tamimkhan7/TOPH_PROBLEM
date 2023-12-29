#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s,ss;
    cin>>s>>ss;
    int len= s.size();
    int len2= ss.size();
    int sum =0,sum2=0;
    for (int i=0; i<len ; i++)
    {
        if (s[i] >= '0' && s[i]<= '9')
        {
            sum = sum+i;
        }
    }
    for (int j=0; j<len2; j++)
    {
        if (s[j] >= '0' && s[j]<= '9')
        {
            sum2 = sum2+ j;
        }
    }
    int result = sum+sum2;
   cout<<""result""<<endl;
   //printf(""%d/n"", result);
}


