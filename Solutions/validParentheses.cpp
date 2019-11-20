class Solution {
public:
    bool isValid(string s) {
        stack<char> check;
        char x;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                check.push(s[i]);
            
            if(check.empty())
                return false;
            
            switch(s[i])
            {
                case ')': 
                    x = check.top(); 
                    check.pop(); 
                    if (x == '{' || x == '[') 
                        return false; 
                    break; 
  
                case '}':  
                    x = check.top(); 
                    check.pop(); 
                    if (x == '(' || x == '[') 
                        return false; 
                    break; 
  
                case ']':  
                    x = check.top(); 
                    check.pop(); 
                    if (x == '(' || x == '{') 
                        return false; 
                    break; 
            }
        }
        return check.empty();
    }
};
