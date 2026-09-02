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
// public:
//     int kthSmallest(TreeNode* root, int k) { //O(n) , O(n)+stack
//         vector<int> v;
//         inorder(root , v);
//         return v[k-1];
//     }
// private:
//     void inorder(TreeNode* &root , vector<int> &v){
//         if(!root) return;
//         inorder(root->left , v);
//         v.push_back(root->val);
//         inorder(root->right , v);
public:
    int kthSmallest(TreeNode* root, int k) { //O(n) , O(n)+stack
        int count =0;
        int ans = -1;
        inorderSolve(root , count , ans , k);
        return ans;
    }
private:
    void inorderSolve(TreeNode* &root , int &count , int &ans, int k){
        if(!root) return;
        inorderSolve(root->left , count , ans , k);
        count++;
        if(count  == k){
            ans = root->val;
            return;
        }
        inorderSolve(root->right, count , ans , k);
    }
};