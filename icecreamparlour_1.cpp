#include<bits/stdc++.h>
using namespace std;
/*
aman kumar jha
*/
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
		{
        int m, n;
        scanf("%d",&m);
        scanf("%d",&n);
        int c[n];
        for(int i=0;i<n;n++)
        {
            scanf("%d",&c[n]);
        }
        int i,j;
        bool found=false;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(c[i]+c[j]==m){
                    found = true;
                    break;
                }
            }
            if(found)
				break;
        }
        printf("%d %d\n",i+1,j+1);
    }
}
