#include<bits/stdc++.h>

using namespace std;

int n, k,m;
int Bool[200];
char kytu[200];

void xuat()
{
	for (int i = 1; i <= m; i++)
		cout << kytu[i];
	cout << endl;
}

void Try(int k,int n,int m )
{
	for (int i = 97; i <= 97 + n - 1; i++)
	{
		if (Bool[i]!=1)
		{
			kytu[k] = i;
			Bool[i] = 1;
			if (k == m)
				xuat();
			else
				{Try(k + 1,n,m);}
				Bool[i] = 0;
		}
	}
}

int main()
{
	cin >> n >> m;
	Try(1,n,m);
}
