#include<bits/stdc++.h>
#include<stdio.h>


using namespace std;
typedef long long ll;

 int main()
 {
     ll n,i,ans=0;
     cin>>n;
     ll arr[n];
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     for(i=0;i<n-1;i++)
     {
         if(arr[i]>arr[i+1])
         {
             ans=ans+(arr[i]-arr[i+1]);
             arr[i+1]=arr[i+1]+ (arr[i]-arr[i+1]);

         }
     }
     cout<<ans;

     return 0;
 }
