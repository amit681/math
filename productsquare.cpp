#include<bits/stdc++.h>
using namespace std;
typedef long long LL; 
int ctr[5001] = {0};
int sqr(int a)
{
	int f = sqrt(a);
	return (f*f == a);
}
 
int main()
{
	int n;
	scanf("%d",&n);
	assert(1 <= n && n <= 100000);
	for(int i = 0; i < n; i++)
	{
		int x;
		scanf("%d",&x);
		assert(1 <= x && x <= 5000);
		ctr[x] += 1;
	}
	LL top = 0;
	LL bottom = (1LL * n * (n - 1)) / 2;
	for(int i = 1; i <= 5000; i++)
	{
		LL add = 1LL * ctr[i] * (ctr[i] - 1) / 2;
		for(int j = i + 1; j <= 5000; j++)
		{
			if(!sqr(i*j)) continue;
			add += 1LL * ctr[i] * ctr[j];
		}
		top += add;
	}
	double ans = (1.0 * top) / bottom;
	printf("%.6lf\n", ans);
	return 0;
}



https://www.hackerearth.com/problem/algorithm/product-square-1/