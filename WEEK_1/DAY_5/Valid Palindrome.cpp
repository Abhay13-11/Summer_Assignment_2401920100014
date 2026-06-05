class Solution {
    bool alpa(char chaar)
    {
        if(chaar>='0' && chaar<='9' || chaar>='A' && chaar<='Z' || chaar>='a' && chaar<='z')
        {
            return true;
        }
        return false;
    }
public:
    bool isPalindrome(string s) {
        int st=0;
        int end=s.size()-1;
        while(st<end){
        if(!alpa(s[st]))
        {
            st++;
            continue;
        }
        if(!alpa(s[end]))
        {
            end--;
            continue;
        }
        if(tolower(s[st])!=tolower(s[end]))
        {
            return false;
        }
        st++; end--;}
    return true;   
    }
};