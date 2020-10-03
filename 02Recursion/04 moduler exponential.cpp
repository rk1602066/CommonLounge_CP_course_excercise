#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll modf(ll x,ll y,ll m){
    if(y==0) return 1;
    else if(y==1) return x%m;
    else{
        ll r = modf(x,y/2,m)%m;
        if(y%2==0) return (r*r)%m;
        else return (r*(x%m)*r)%m;
    }
}

int main()
{
    ll result = modf(14, 98765432123456789,41);
    cout<<result<<endl;
}




