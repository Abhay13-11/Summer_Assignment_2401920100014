class Solution {
    string solve(string &a,int n)
    {
        reverse(a.begin(),a.end());
        string dec="";
        while(n>0)
        {
            dec+=a;
            n--;
        }
        a="";
        return dec;
    }
public:
    string decodeString(string s) {
        string ans="";
        string a="";
        
        stack<char> st;
        for(auto &it : s)
        {
           if(it==']')
           {
                while(st.top()!='[')
                {
                    a+=st.top();
                    st.pop();
                }
                st.pop();
                string num="";
                while(!st.empty() && st.top()>='0' && st.top()<='9')
                {
                    num+=st.top();
                    st.pop();
                }
                reverse(num.begin(),num.end());
                int n=stoi(num);
               
                string sk=solve(a,n);
                
                for(auto &itt : sk) st.push(itt);
                
           }
           else
           {
                st.push(it);
           }

        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
    reverse(ans.begin(),ans.end());
        return ans;
    }
};