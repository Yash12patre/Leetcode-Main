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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool ltr=true;
        while(!q.empty()){
            int size=q.size();
            vector<int>lvl;
            for(int i=0;i<size;i++){
            root=q.front();
            q.pop();

            lvl.push_back(root->val);
            if(root->left!=NULL) q.push(root->left);
            if(root->right!=NULL) q.push(root->right)  ;              
            }
            if(!ltr){
                reverse(lvl.begin(), lvl.end());
            }
            ans.push_back(lvl);
            ltr=!ltr;
        }
        return ans;
    }
};