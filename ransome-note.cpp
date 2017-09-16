#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
/*
aman kumar jha
*/
int ransomnote(vector<string> magazine, vector<string> ransom)
{
	int flag=1;
  unordered_map <string,int> mp;
  unordered_map <string,int> rp;
  unordered_map<string,int>::iterator itm,itr;
  for(int i=0;i<magazine.size();i++)
  {
  	itm=mp.find(magazine[i]);
  	if(itm==mp.end())
	{
		mp.insert(make_pair(magazine[i],1));
	}
	else
	{
		mp[magazine[i]]++;
	}
  }
  for(int i=0;i<ransom.size();i++)
  {
    	itr=rp.find(ransom[i]);
  	if(itr==rp.end())
	{
		rp.insert(make_pair(ransom[i],1));
	}
	else
	{
		rp[ransom[i]]++;
	}
  }

  for(int i=0;i<ransom.size();i++)
  {
  	if(mp[ransom[i]]<rp[ransom[i]])
	{
		return 0;
	}
  }
  return 1;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++)
	{
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++)
    {
       cin >> ransom[ransom_i];
    }
    //ransomnote(magazine,ransom);
    if(ransomnote(magazine, ransom)==1)
        cout << "Yes\n";
    else
        cout << "No\n";
}
