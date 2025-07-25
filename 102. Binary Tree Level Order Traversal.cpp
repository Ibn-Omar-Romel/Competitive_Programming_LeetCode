#include<bits/stdc++.h>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<vector<int>> levelOrder(TreeNode* root) {
        
    if (root == NULL)
        return{};

    vector<vector<int>>vec;

    queue<TreeNode*>que;
    que.push(root);

    while(!que.empty()) {
        int n = que.size();
        vector<int>temp;
        while(n--) {
            TreeNode* node = que.front();
            que.pop();

            if(node)
                temp.push_back(node->val);

            if (node->left) que.push(node->left);
            if (node->right) que.push(node->right);
        }
        vec.push_back(temp);
    }
    return vec;

    
    
    
}

int main() {


    return 0;   
}