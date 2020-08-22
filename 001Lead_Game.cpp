#problem set link:https://www.codechef.com/problems/TLG

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    int max1=-1,max2=-1,a,b,sum1=0,sum2=0;
    while(t--){
        cin>>a>>b;
        sum1+=a;sum2+=b;
        max1=max(max1,sum1-sum2);
        max2 = max(max2,sum2-sum1);
    }
    if(max1>max2)
        cout<<'1'<<" "<<max1<<endl;
    else  cout<<'2'<<" "<<max2<<endl;
}

