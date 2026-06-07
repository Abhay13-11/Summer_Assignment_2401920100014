class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2)
        {
            return false;
        }
        vector<int> count1(26,0);
        vector<int> count2(26,0);
        for(int i=0;i<n1;i++)
        {
            count1[s[i]-'a']++;
            count2[t[i]-'a']++;
        }

        if(count1==count2)
        {
            return true;
        }
    return false;
    }
};