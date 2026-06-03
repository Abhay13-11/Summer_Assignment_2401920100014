class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int j=INT_MAX;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0) {
                j=i;
                break;
            }
        }
        vector<int> ans;
        int i=0;
        if(j==INT_MAX) i=n-1;
        else i=j-1;
        while(i>=0 && j<n)
        {
            int sq1=nums[i]*nums[i];
            int sq2=nums[j]*nums[j];
            if(sq1<sq2)
            {
                ans.push_back(sq1);
                i--;
            }
            else if(sq1>sq2)
            {
                ans.push_back(sq2);
                j++;
            }
            else
            {
                ans.push_back(sq1);
                ans.push_back(sq2);
                i--;
                j++;
            }
        }
        while(i>=0)
        {
            ans.push_back(nums[i]*nums[i]);
            i--;
        }
        while(j<n)
        {
            ans.push_back(nums[j]*nums[j]);
            j++;
        }
        return ans;
    }
};