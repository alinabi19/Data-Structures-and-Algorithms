// #include<iostream>
// using namespace std;

// class TreeNode{
//     public:
//         int data;
//         TreeNode* left;
//         TreeNode* right;

//     TreeNode(int d){
//         data = d;
//         left = NULL;
//         right = NULL;
//     }
// };

int height(TreeNode root) {
    if(root == NULL)
            return 0;

        return max( height(root->left), height(root->right) ) + 1;
    }

int diameter(TreeNode* root) {
        if(root == NULL)
            return 0;

        int option1 = diameter(root->left);
        int option2 = diameter(root->right);
        int option3 = 1 + height(root->left) + height(root->right);
        return max(option1, max(option2, option3));
    }

int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;

        return diameter(root) - 1;

}



// int main(){
    
//     TreeNode* root = NULL;


// return 0;
// }




