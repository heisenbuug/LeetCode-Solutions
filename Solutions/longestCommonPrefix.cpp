class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = "";
            int n = strs.size();
        
            if(n == 0)
                return "";
        
        sort(strs.begin(), strs.end());
        
        string f = strs[0];
        string l = strs[n-1];
        
        int lim = min(f.length(), l.length());

        for(int i = 0; i < lim; i++)
        {
            if(f[i] == l[i])
                str += f[i];
            else
                break;
        }
            return str;
    }
};
