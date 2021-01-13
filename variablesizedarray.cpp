#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,i,j;
    cin>>a>>b;
    vector<int>s[a];
    for(i=0;i<a;i++)
    {
        int m;
        cin>>m;
        int k;
        for(j=0;j<m;j++)
        {
            cin>>k;
            s[i].push_back(k);
        }
    }
    int p,q;
    for(int l=1;l<=b;l++)
    {
        cin>>p>>q;
        cout<<s[p][q]<<endl;
    }
    return 0;
}
