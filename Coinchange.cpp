#include<bits/stdc++.h>
using namespace std;
/*
aman kumar jha
*/
long long int make_change(long long int coins[],long long int n,long long int m)
{
    long long int x,y;
    long long int table[n+1][m];
    for (long long int i=0; i<m; i++)
        table[0][i] = 1;
    for (long long int i=1;i<n+1;i++)
    {
        for (long long int j=0;j<m;j++)
        {
            x = (i-coins[j] >= 0)? table[i - coins[j]][j]: 0;
            y = (j >= 1)? table[i][j-1]: 0;
            table[i][j] = x + y;
        }
    }
    return table[n][m-1];

}

int main(){
    long long int n,m;
    cin >> n >> m;
    long long int coins[m];
    for(long long int coins_i = 0;coins_i < m;coins_i++)
    {
       cin >> coins[coins_i];
    }
    cout << make_change(coins,n,m) << endl;
    return 0;
}
