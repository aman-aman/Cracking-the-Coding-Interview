#include<bits/stdc++.h>
using namespace std;
/*
aman kumar jha
*/
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n],b[2*n];
    for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		b[i]=a[i];
		b[i+n]=a[i];
	}
	if(k<=n)
	{
			for(int i=k;i<n+k;i++)
			{
				printf("%d ",b[i]);
			}

	}
	else
	{
        while(k>n)
		{
			k=k%n;
		}
		for(int i=k;i<n+k;i++)
		{
			printf("%d ",b[i]);
		}
	}
}
