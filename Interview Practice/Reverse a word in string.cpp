#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{

    string str;
    getline(cin,str);
    int len =str.length();
    int start, end, i;
    string ans="";
    for(start=end=len-1; start>=0; start--)
    {
        if(str[start]==' ')
        {
            string ans="";

            for(i=start+1; i<=end; i++)
            {
                ans+= str[i];
            }
            cout<<ans<<" ";
            end=start-1;

        }

    }
    ans=" ";
    for(i=start+1; i<=end; i++)
    {
                ans+= str[i];
    }
    cout<<ans;


}
