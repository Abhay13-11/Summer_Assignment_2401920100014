class Solution {
    void solve(vector<string>& ans, string& s, int open, int close, int n) {
        if (open == n && close == n) {
            ans.push_back(s);
            return;
        }
        if(open<n)
        {
            s+='(';
            solve(ans,s,open+1,close,n);
            s.pop_back();
        }
        if(close<open)
        {
            s+=')';
            solve(ans,s,open,close+1,n);
            s.pop_back();
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        solve(ans, s, 0, 0, n);
        return ans;
    }
};