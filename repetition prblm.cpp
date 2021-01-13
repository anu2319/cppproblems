#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int len,count=1,ans=1;
    int i;
    cin>>str;
    len=str.length();

    for(i=0;i<len-1;i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
        else{
            count=1;
        }
        ans=max(ans,count);
    }
    cout<<ans;

    return 0;

}
