#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int top=-1;
string str;

void push(int y)
{
    top++;
    str[top]=y;
}
int pop()
{
    int s = str[top];
    top--;
    return s;
}

int main()
{
    string str;
    int i=0,j,k,temp;
    getline(cin,str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            push(str[i]-'0');
        }
        else
        {
            int a = pop();
            int b = pop();
            switch(str[i])
            {
                case '+':
                   temp=b+a;
                   break;

                case '-':
                   temp=b-a;
                   break;

                case '/':
                   temp=b/a;
                   break;

                case '*':
                   temp=b*a;
                   break;

                case '%':
                   temp=b%a;
                   break;

            }
            push(temp);
        }
    }
    j=pop();
    cout<<j<<endl;
    return 0;

}
