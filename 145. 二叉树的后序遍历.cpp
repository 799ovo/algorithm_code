#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == nullptr)
            return res;
        stack<TreeNode*> st;
        for (st.push(root); st.size();)
        {
            root = st.top();
            st.pop();
            if (root->left != nullptr)
                st.push(root->left);
            if (root->right != nullptr)
                st.push(root->right);
            res.push_back(root->val);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};