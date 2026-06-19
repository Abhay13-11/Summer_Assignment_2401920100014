class Solution {
    bool match(char st,char ss )
    {
        if(st=='(' && ss==')')
        {
            return true;
        }
        else if(st=='[' && ss==']')
        {
            return true;
        }
        else if(st=='{' && ss=='}')
        {
            return true;
        }
        else 
        {
            return false;
        }
    return false;
    }
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto it : s)
        {
            if(it=='(' || it=='{' || it=='[')
            {
                st.push(it);
            }
            else 
            {
                if(st.empty())
                {
                    return false;
                }
                else if(match(st.top(),it))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
           
            
            }        }
        if(st.empty())
            {
                return true;
            }
        return false;
    }    

    
};