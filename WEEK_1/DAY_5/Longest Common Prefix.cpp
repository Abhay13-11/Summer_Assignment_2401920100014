class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        int end=strs.size()-1;
        string first=strs[0];
        string last=strs[end];
        int mini=min(first.size(),last.size());
        for(int i=0;i<mini;i++)
        {
            if(first[i]==last[i])
            {
                ans=ans+first[i];
            }
            else
            {
                break;
            }
        }
    return ans;    
    }
};