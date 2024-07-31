class Solution {
public:
    bool isValid(string s) {
      stack<char> a;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                a.push(s[i]);
            }
            else
            {
                if(a.empty() or (a.top()=='(' and s[i]!=')') or (a.top()=='{' and s[i]!='}') or (a.top()=='[' and s[i]!=']'))
                {
                return false;
                }
            a.pop();
            }
        }
        return a.empty();
    }
};