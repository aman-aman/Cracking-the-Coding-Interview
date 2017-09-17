#include<bits/stdc++.h>
using namespace std;
/*aman kumar jha*/
int main()
{
	int n;
	vector<int> cnt(101,0);
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		cnt[a[i]]++;
	}
	for(int i=0;i<101;i++)
	{
		if(cnt[i]==1)
		{
			printf("%d\n",i);
			break;
		}
	}
}
