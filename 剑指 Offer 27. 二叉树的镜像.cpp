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

#if 0
//�ݹ�
class Solution {
public:
    TreeNode* mirrorTree(TreeNode* root) {
        if (root == nullptr)
            return root;
        TreeNode* node = root->left;
        root->left = root->right;
        root->right = node;
        mirrorTree(root->left);
        mirrorTree(root->right);
        return root;
    }
};


//�ǵݹ飨ջ��
TreeNode* mirrorTree(TreeNode* root)
{
	stack<TreeNode*> st;
	st.push(root);
	while (!st.empty())
	{
		TreeNode* node = st.top();
		st.pop();
		if (node == nullptr)
			continue;
		swap(node->left, node->right);
		if (node->right != nullptr)
			st.push(node->right);
		if (node->left != nullptr)
			st.push(node->left);
	}
	return root;
}
#endif


//�ǵݹ飨���У�
TreeNode* mirrorTree(TreeNode* root)
{
	queue<TreeNode*> q;
	q.push(root);
	while (!q.empty())
	{
		TreeNode* node = q.front();
		q.pop();
		if (node == nullptr)
			continue;
		swap(node->left, node->right);
		if (node->left != nullptr)
			q.push(node->left);
		if (node->right != nullptr)
			q.push(node->right);
	}
	return root;
}