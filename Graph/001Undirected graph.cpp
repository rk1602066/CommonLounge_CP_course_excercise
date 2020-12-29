#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,y;
    cin>>n>>m;
    vector<int>nodes[n];
    for(int i=0;i<m;i++){
        cin>>x>>y;
        //first one for directed graph. both for undirected graph
        nodes[x].push_back(y);
        nodes[y].push_back(x);
    }
    for(int i=0;i<m;i++){
        for(int x:nodes[i])cout<<i<<"--->"<<x<<endl;
    }
}
