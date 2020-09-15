//https://www.codechef.com/problems/VOTERS

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int N1,N2,N3,x,t,count=0,i;
    cin>>N1>>N2>>N3;
    t=N1+N2+N3;
    int n[1000000]={0};
    for( i=1;i<=t;i++)
    {
        cin>>x;
        n[x]++;
    }
    for(i=0;i<1000000;i++)
    {
        if(n[i]>1)
            count++;
    }
    cout<<count<<endl;
    for(i=0;i<1000000;i++)
    {
        if(n[i]>1)
            cout<<i<<endl;
    }
    return 0;
}
