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
    bool isUnivalTree(TreeNode* root) {
        int& value = root->val;
        return univalTest(root, value);
    }
    
    bool nodeTest(TreeNode* node, int& testValue){
        if(node == nullptr){
            return true;
        }
        if(node->val == testValue){
            return true;
        }
        return false;
    }
    
    bool univalTest(TreeNode* node, int& testValue){
        if(nodeTest(node, testValue) == false){
            return false;
        }else{
            if(node->left != nullptr){
                if(univalTest(node->left, testValue) == false){
                    return false;
                }
            }
            if(node->right != nullptr){
                if(univalTest(node->right, testValue) == false){
                    return false;
                }
            }
        }
        return true; //if we get here it should be true;
    }
    
};
