class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.size()>s.size())
        {
            return ans;
        }
        vector<int> freq(26,0);
        vector<int> freqs(26,0);
        for(int i=0;i<p.size();i++)
        {
            freq[p[i]-'a']++;
        }
        int psize=p.size();
        int l=0;
        for(int r=0;r<s.size();r++)
        {
            freqs[s[r]-'a']++;
            
            if(r-l+1>psize)
            {
                freqs[s[l]-'a']--;
                l++;
            }
            if(freqs==freq)
            {
                ans.push_back(l);
               
            }
        }
      return ans;  
    }
};