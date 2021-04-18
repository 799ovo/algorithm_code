#include<iostream>
#include<stack>
#include<queue>
using namespace std;
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
            return true;
        return fun(root->left, root->right);
    }
    bool fun(TreeNode* l, TreeNode* r)
    {
        if (l == nullptr && r == nullptr)
            return true;
        else if (l == nullptr || r == nullptr || l->val != r->val)
            return false;
        return fun(l->left, r->right) && fun(l->right, r->left);
    }
};