#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int number_needed(string a, string b)
{
	vector<int> c(26,0);
	int sum=0;
	for(int i=0;i<a.length();i++)
	{
		c[a[i]-97]++;
	}
	for(int i=0;i<b.length();i++)
	{
		c[b[i]-97]--;
	}
	for(int i=0;i<26;i++)
	{
			sum=sum+abs(c[i]);
	}
	return sum;

}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
