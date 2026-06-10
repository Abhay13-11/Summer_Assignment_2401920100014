class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size()/2;
        string ss=s;
        for(int i=0;i<n;i++)
        {
            char a=ss[0];
            ss=ss.substr(1);
            ss+=a;
            if(ss==s) return true;
        }
        return false;
    }
};