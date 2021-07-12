#include<bits/stdc++.h>



using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    int fib[45];
    fib[0]=1;
    fib[1]=1;
    for(int i=2; i<45; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(int i=44; i>=0; i--)
    {
        if((n-fib[i])>=0)
        {
            n = n - fib[i];
            cout<<fib[i]<<" ";
        }
    }


};
