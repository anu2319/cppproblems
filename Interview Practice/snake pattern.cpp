#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main()
{
    int n, i, j, x=0, k, space, t;
    cin>>n;
    space = n-1;
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(t=0; t<space; t++)
            {
                printf("%4s"," ");
            }
            for(j=1; j<=n; j++)
            {
                x++;
                printf("%4d",x);
            }
            printf("\n");
        }

        else
        {
             for(t=0; t<space; t++)
            {
                printf("%4s"," ");
            }
            for(k=x+n; k>x; k--)
            {

                printf("%4d",k);
            }
            x=x+n;
            printf("\n");

        }
        space--;
    }

}
