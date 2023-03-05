#include<bits/stdc++.h>

using namespace std;

int a[100][100];

bool check(int b[][100], int row, int col,int n)
{
    int i,j;
    for(int j=0; j<col; j++)
    {
        if(b[row][j]==1)
           {return false;}
    }
    i=row,j=col;
    while(i>=0 && j>=0)
    {
        if(b[i][j]==1)
            return false;
        i--;
        j--;
    }
    i=row,j=col;
    while(i<=n&& j>=0 )
    {
        if(b[i][j]==1)
            return false;
        i++;
        j--;
    }
    return true;
}
bool setqueen(int b[][100],int col,int n)
{
    if(col>=n)
    {
        return true;
    }
    for(int i=0; i<n; i++)
    {
        if(check(b,i,col,n) )
        {
            b[i][col]=1;
            if(setqueen(b,col+1,n))
            {
                return true;
            }
            b[i][col]=0;
        }
    }
    return false;
}
void Xuat(int b[][100],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] ==1 )
                cout << "*";
            else
                cout << ".";
        }
        cout << endl;
    }
    cout << endl;
}



int main()
{
    int n;
    cin >> n;
    if(setqueen(a,0,n))
    {
        Xuat(a,n);
    }

    return 0;

}


