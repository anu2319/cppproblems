#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k=1;
    cin>>n;

    for(i=1; i<=n; i++)
    {
       for(j=1; j<=(2*n)-i; j++)
       {
           if(j<=n-i)
           {
               cout<<" ";
           }
           else if((i%2)==1)
           {
               cout<<k<<" ";
               k++;

           }
           else
           {
               k--;
               cout<<k<<" ";

           }
       }
       k+=n;
       cout<<"\n";
    }

}
