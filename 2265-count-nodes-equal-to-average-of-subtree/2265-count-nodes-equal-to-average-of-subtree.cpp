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
    int sumOfNodes(TreeNode* root){
        if(root==NULL)return 0;
        int lS = sumOfNodes(root->left);
        int rS = sumOfNodes(root->right);
        return lS+rS+root->val;       
    }
    int cntOfNodes(TreeNode* root){
        if(root==NULL)return 0;
        int lc = cntOfNodes(root->left);
        int rc = cntOfNodes(root->right);
        return lc+rc+1;    
    }
    int avg(int sum, int cnt){
        return sum/cnt;
    }
    void Trav(TreeNode* root, int& cnt){
        if(root == NULL)return;
        if(root->val == avg(sumOfNodes(root),cntOfNodes(root))){
            cnt++;
        }
        Trav(root->left, cnt);
        Trav(root->right, cnt);
    }
    int averageOfSubtree(TreeNode* root) {
        int cnt = 0;
        Trav(root, cnt);
        return cnt;
    }
};