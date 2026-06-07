class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26,0);
        for(auto it : s)
        {
            freq[it-'a']++;
        }
        int i=0;
        for(auto it : s)
        {
            if(freq[it-'a']==1)
            {
                return i;
            }
            i++;
        }
    return -1;
    }
};