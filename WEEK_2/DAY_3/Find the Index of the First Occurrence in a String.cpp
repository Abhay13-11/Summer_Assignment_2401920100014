class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())
        {
            return -1;
        }
        int ans=haystack.find(needle);
        return ans;
        
        
    }
};