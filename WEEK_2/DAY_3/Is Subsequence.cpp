class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0)
        {
            return true;
        }
        if(s.size()>t.size() || t.size()==0)
        {
            return false;
        }
        int j=0;
        int i=0;
        while(j<t.size())
        {
            if(s[i]==t[j])
            {
                i++;
               
            }
            
            if(i==s.size())
            {
                return true;
            }
            j++;
        }
    return false;    
    }
};