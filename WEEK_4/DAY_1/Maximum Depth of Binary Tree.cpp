/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int count=0;
        if(root==NULL)
        {
            return count;
        }
        queue<TreeNode*> qt;
        qt.push(root);
        
        while(!qt.empty())
        {
           
            int size=qt.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* it=qt.front();
                qt.pop();
                
                if(it->left!=NULL)
                {
                    qt.push(it->left);
                }
                if(it->right!=NULL)
                {
                    qt.push(it->right);
                }
                
            }
            count++;
            
        }
    return count;    
    }
};