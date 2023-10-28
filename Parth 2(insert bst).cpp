class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {

        TreeNode* node = new TreeNode (val);

        if (!root) return node;

        TreeNode* head = root;


        while (root) {

            if (val > root->val) {
                if (!root->right)
                 { 
                     root->right = node;
                      break;
                 }

                else 
                root = root->right;
            }
            else {
                if (!root->left)
                 {
                     root->left = node;
                      break;
                }

                else 
                root = root->left;
            }
        }
        return head;
    }
};
