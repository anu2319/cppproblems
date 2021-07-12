#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n,r=0,temp,rem;
    cin>>n;
    temp=n;
    while(n!=r)
    {
        n=n+1;
        temp=n;
        r=0;
        while(temp!=0)
        {
            rem=temp%10;
            //cout<<"rem is"<<rem<<endl;
            r=rem+(r*10);
            //cout<<"r is"<<r<<endl;
            temp=temp/10;
            //cout<<"temp is"<<temp<<endl;
        }
    }
    cout<<r<<endl;
    return 0;

}
