class Solution {
public:
    bool isValid(string str) {
        int n=str.length();
	if(n%2==1)
		return false;
	stack<char> s;
	for(int i=0;i<n;i++)
	{
        if(str[0]=='}'||str[0]==']'||str[0]==')')
            return false;
		if(str[i]=='(' || str[i]=='{' || str[i]=='[')
			s.push(str[i]);
		if((str[i]==')') && (s.top()=='[' || s.top()=='{'))
			return false;
		if((str[i]==']') && (s.top()=='(' || s.top()=='{'))
			return false;
		if((str[i]=='}') && (s.top()=='(' || s.top()=='['))
			return false;
		if(str[i]=='}' && s.top()=='{' )
			s.pop();
		if(str[i]==']' && s.top()=='[')
			s.pop();
		if(str[i]==')' && s.top()=='(')
			s.pop();
	}
	if(!s.empty())
        return false;
    else
        return true;
    }
};
