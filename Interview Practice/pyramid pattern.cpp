#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n,i,j,k,x;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(j=n-1; j>i; j--)
        {
            cout<<" ";
        }

        for(k=i; k>=0; k--)
        {
            cout<<k;
        }

        for(x=1; x<=i; x++)
        {
            cout<<x;
        }
        cout<<"\n";
    }

}
