/*aman kumar jha*/
#include<bits/stdc++.h>
using namespace std;
int bubble(int a[],int n)
{
    int t=0;
    for (int i=0;i<n;i++)
    {
         //t=0;
        for (int j=0;j<n-1;j++)
        {
            if (a[j]>a[j+1])
            {
            	++t;
                swap(a[j],a[j+1]);
            }
        }
        if (t==0)
        {
            break;
        }
	}
    return t;
}
int main(){
    int n;
    cin >> n;
	int a[n];
    for(int a_i = 0;a_i < n;a_i++)
    {
       cin >> a[a_i];
    }
    int m=bubble(a,n);
    //cout<<m<<"\n";
    cout<<"Array is sorted in "<<m<<" swaps.\n"<<"First Element: "<<a[0]<<"\n"<<"Last Element: "<<a[n-1]<<"\n";
    return 0;
}

