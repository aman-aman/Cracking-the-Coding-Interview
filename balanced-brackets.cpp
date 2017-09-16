#include<bits/stdc++.h>
using namespace std;
/*
aman kumar jha
*/
bool isMatchingPair(char character1, char character2)
{
   if (character1 == '(' && character2 == ')')
     return true;
   else if (character1 == '{' && character2 == '}')
     return true;
   else if (character1 == '[' && character2 == ']')
     return true;
   else
     return false;
}
bool is_balanced(string exp)
{
    stack<char> st;
    for(int i=0;i<exp.length();i++)
   {
   	char ch=exp[i];
        if (ch == '{' || ch == '(' || ch == '[')
		{
			st.push(ch);
		}
        if (ch == '}'|| ch == ')' || ch == ']')
        {
			if(st.empty() || !isMatchingPair(st.top(),exp[i]))
				return false;
			else
				st.pop();
		}
   }
	if(st.empty())
		return true;
return false;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
		{
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
