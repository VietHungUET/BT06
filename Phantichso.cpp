#include<bits/stdc++.h>
using namespace std;
int n,a[15];
void xuat(int n)
{
    for(int i=1; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a[n]<<endl;
}
void Check(int i, int k, int sum)
{
    for(int j=k; j>=1; j--)
    {
        if(sum+j<=n)
        {
            a[i]=j;
            sum+=j;
            if(sum==n) xuat(i);
            else Check(i+1,j,sum);
            sum-=j;
        }
      }
}
int main()
{

cin>>n;
Check(1,n,0);



}
