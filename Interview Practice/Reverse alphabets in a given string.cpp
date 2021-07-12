#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int len = str.length();
    int start = 0, end = len-1;

    while(start<end)
    {
        if(!(str[start]>='a' && str[start]<='z' || str[start]>='A' && str[start]<='Z'))
        {
            start++;
        }
        else if(!(str[end]>='a' && str[end]<='z' || str[end]>='A' && str[end]<='Z'))
        {
            end--;
        }
        else{
           swap(str[start], str[end]);
           start++;
           end--;
        }
    }
    cout<<str;
}
