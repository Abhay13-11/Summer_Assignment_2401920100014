class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> mag(26,0);
        for(auto it : magazine)
        {
            mag[it-'a']++;
        }
       
        for(auto it : ransomNote)
        {
            if(mag[it-'a']>0)
            {
                mag[it-'a']--;
            }
            else
            {
                return false;
            }
        }
    return true;
    }
};