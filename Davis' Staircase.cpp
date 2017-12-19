#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{
    int s;
    cin >> s;
    int dp[40];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(int i=4;i<40;i++)
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];

    for(int a0 = 0; a0 < s; a0++)
    {
        int n;
        cin >> n;
        cout<<dp[n]<<"\n";
    }
}
