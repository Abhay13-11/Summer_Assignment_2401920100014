class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
         vector<int> ans;
        if(k>nums.size()) return ans;
       unordered_map<int,int> mpp;
        priority_queue<int> pq;
        int maxi=INT_MIN;
        for(int i=0;i<k;i++)
        {
            maxi=max(maxi,nums[i]);
            pq.push(nums[i]);
            mpp[nums[i]]++;
        }
        ans.push_back(pq.top());
        int l=0;
        for(int i=k;i<nums.size();i++)
        {
            
            mpp[nums[l]]--;
            l++;
            pq.push(nums[i]);
            mpp[nums[i]]++;
            while(mpp.find(pq.top())==mpp.end() || mpp[pq.top()]==0) {
                pq.pop();
            }
            ans.push_back(pq.top());
        }
        return ans;
    }
};