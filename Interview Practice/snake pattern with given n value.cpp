#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int r,n,k,counter=1,col;
    cin>>r>>n;
    int x = r+1;
    int a[r][x];
    for(int col=0; col<x; col++)
    {
        if((col%2)==0)
        {
            for(int row=0; row<r; row++)
            {
                if(counter > n) break;
                a[row][col]=counter;
                counter++;
            }

        }
        else
        {
            for(int row = r-1; row>=0; row--)
            {
                if(counter>n) break;
                a[row][col]=counter;
                counter++;
            }

        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(a[i][j]==0) continue;
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

}
