   queue<TreeNode*> q;
        q.push(root);
        int minii = 0;
        while(!q.empty()){
            int size = q.size();
            vector<int> arr(size);
            int i=0;
            while(size--){
                TreeNode* n = q.front();
                q.pop();
                arr[i++] = n->val;
                if(n->left)
                    q.push(n->left);
                if(n->right)
                    q.push(n->right);
            }
            //array has now elements og current level
        } 
