class Solution{
    // struct TreeNode{
    //     int val;
    //     TreeNode *left;
    //     TreeNode *right;
    // };
public:
    vector <double> averageOfLevels(TreeNode* root){
        if(!root)return {};
        vector<double> result;
        queue<TreeNode*> q{{root}};
        while(!q.empty()){
            int n = q.size();
            double sum=0;
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                q.pop();
                sum+=t->val;
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
             result.push_back(sum);
        }
       
        

    }
};