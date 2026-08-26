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
        //Depth First Search
        if(root == NULL) return 0;
        int minLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);
        return max(minLeft , maxRight)+1;

        //BFS
        
        // if(root==NULL) return 0;
        // queue<TreeNode*> q;
        // q.push(root);
        // q.push(NULL);

        // int count = 0;

        // while(!q.empty()){
        //     if(q.front() == NULL){
        //         q.pop();
        //         count++;
        //         if(!q.empty()){
        //             q.push(NULL);
        //         }
        //     } else{
        //             TreeNode* r = q.front();
        //             q.pop();

        //             if(r->left != NULL) q.push(r->left);
        //             if(r->right != NULL) q.push(r->right);
        //         }
        //     }
        //     return count;
        } 
};