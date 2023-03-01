class Solution {
public:
    
// 1st approach
//     int height(TreeNode* root){
//         if(root==NULL)
//             return 0;
        
//         return max(height(root->left), height(root->right)) + 1;
//     }
    
//     bool isBalanced(TreeNode* root) {
//         if(root == NULL){
//             return true;
//         }
        
//         bool leftAns = isBalanced(root->left);        
//         bool rightAns = isBalanced(root->right);
        
//         bool diff = abs(height(root->left)- height(root->right)) <= 1;
        
//         if(leftAns && rightAns && diff){
//             return true;
//         }
//         return false;

        
//     }
    
    
// 2nd approach
    pair<int, bool> solve(TreeNode* root) {
        if(root == NULL)
            return make_pair(0,true);
        
        pair<int,bool> leftAns = solve(root->left);
        pair<int,bool> rightAns = solve(root->right);
        
        int leftHeight = leftAns.first;
        int rightHeight = rightAns.first;
        
        bool diff = abs(leftHeight - rightHeight) <= 1;
        
        bool leftbalanced = leftAns.second;
        bool rightbalanced  = rightAns.second;
        
        if(leftbalanced && rightbalanced && diff) {
            return make_pair(max(leftHeight, rightHeight)+1, true);
        }
        else
        {
             return make_pair(max(leftHeight, rightHeight)+1, false);
        }
    }
    bool isBalanced(TreeNode* root) {
        pair<int,bool> ans = solve(root);
        return ans.second;
    }
};