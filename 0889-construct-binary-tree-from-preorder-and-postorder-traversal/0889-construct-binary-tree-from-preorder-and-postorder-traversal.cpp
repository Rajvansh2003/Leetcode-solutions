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
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        stack<TreeNode*> q;
        TreeNode* root = new TreeNode(preorder[0]);
        q.push(root);
        int len = preorder.size();
        vector<int> it(len+1);
        
        for(int i = 0; i < len; i++){
            it[postorder[i]] = i;
        }

        for(int i = 1; i < len; i++){
            while(q.size() && it[preorder[i]] > it[q.top()->val]) {
                q.pop();
            }

            TreeNode* curr = q.top();
            TreeNode* node = new TreeNode(preorder[i]);
            if (!curr->left) {
                curr->left = node;
            } else {
                curr->right = node;
            }
            q.push(node);
        }

        return root;
    }
};