#include<bits/stdc++.h>

using namespace std;
void func(string &str, string temp, int i, int l);
int main()
{
    string str;
    getline(cin, str);
    int l = str.length();
    func(str,"",0,l);
}
void func(string &str, string temp, int i, int l)
{
    if(i==l)
    {
        cout<<temp<<" ";
    }
    else if(str[i]==' ')
    {
        func(str,"",i+1,l);
        cout<<temp<<" ";
    }
    else
    {
        func(str,temp+str[i],i+1,l);
    }
}
