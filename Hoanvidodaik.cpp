#include<iostream>

using namespace std;

int n, m;
int Bool[200];
char kytu[200];

void xuat()
{
	for (int i = 1; i <= m; i++)
		cout << kytu[i];
	cout << endl;
}

void Try(int k, int m)
{
	for (int i = 97; i <= 97 + n - 1; i++)
	{
		if (!Bool[i])
		{
			kytu[k] = i;
			Bool[i] = 1;
			if (k == m)
				xuat();
			else
				Try(k + 1,m);
			Bool[i] = 0;
		}
	}
}

int main()
{
	cin >> m >> n;
	Try(m,n);
}
