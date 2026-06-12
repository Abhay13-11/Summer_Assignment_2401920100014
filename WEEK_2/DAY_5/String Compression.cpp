class Solution {
public:
    int compress(vector<char>& chars) {
        
        int ind=0;
        int n=chars.size();
        for(int i=0;i<n;i++)
        {
            int count=0;
            char ele=chars[i];
            while(i<n && chars[i]==ele)
            {
                count++;
                i++;

            }
            if(count==1)
            {
                chars[ind++]=ele;
                
            }
            else
            {
                chars[ind++]=ele;
                string ss=to_string(count);
                for(auto it : ss)
                {
                    chars[ind++]=it;

                }
            }
            i--;

        }
        
    return ind--; 
    }
};