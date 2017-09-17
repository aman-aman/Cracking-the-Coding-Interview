#include<bits/stdc++.h>
using namespace std;
stack<int> s1;
stack<int> s2;
/*
aman kumar jha
*/
void pops()
{
	if(s2.size()==0)
	{
		while(s1.size()!=0)
		{
			s2.push(s1.top());
			s1.pop();
		}
	}
	s2.pop();
}
void pushs(int x)
{
	s1.push(x);
}
int tops()
{
	int t;
	if(s2.size()==0)
	{
		while(s1.size()!=0)
		{
			s2.push(s1.top());
			s1.pop();
		}
		//t=s2.top();
		//s2.pop();
	}
	return s2.top();
}
int main()
{
	int q,type,x;
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d",&type);
		if(type==1)
		{
			scanf("%d",&x);
			pushs(x);
		}
		if(type==2)
		{
			pops();
		}
		if(type==3)
		{
            printf("%d\n",tops());
		}

	}
	return 0;

}
