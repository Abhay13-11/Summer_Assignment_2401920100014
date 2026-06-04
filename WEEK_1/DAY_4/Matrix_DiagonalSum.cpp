class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if((n-i-1)!=i)
            {
            sum+=mat[i][n-i-1];
            sum+=mat[i][i];
            }
            else
            {
                sum+=mat[i][i];
            }
        }
        return sum;
    }
};