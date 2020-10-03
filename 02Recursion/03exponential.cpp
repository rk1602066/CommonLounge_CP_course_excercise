#include<bits/stdc++.h>
using namespace std;

typedef  unsigned long long ll;

ll modf(ll x,ll y){
    if(y==0) return 1;
    else if(y==0) return x;
    else{
        ll r = modf(x,y/2);
        if(y%2==0) return r*r;
        else return r*x*r;
    }
}

int main()
{
    ll result = modf(2,63);
    cout<<result<<endl;
}




