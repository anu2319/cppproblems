#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b,p;
    int c,d;
    cin>>a;
    cin>>b;
    c=a.size();
    d=b.size();
    cout<<c<<" "<<d<<endl;
    p=a+b;
    cout<<p<<endl;
    swap(a[0],b[0]);
    cout<<a<<" "<<b<<endl;

}
