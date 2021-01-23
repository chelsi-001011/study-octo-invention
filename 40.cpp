//Reverse Level Order Traversal
vector<int> reverseLevelOrder(Node *root)
{
    vector <int> res;
    if(root == NULL)
        return res;
        
    queue <Node *> q;
    stack <int> stk;
    q.push(root);
    
    while(!q.empty())
    {
        Node* n = q.front();
        res.push_back(n->data);
        q.pop();
    
        if(n->right !=NULL)
            q.push(n->right);
            
        if(n->left !=NULL)
            q.push(n->left);
    }
    reverse(res.begin(),res.end());
    return res;
}

//Height of Binary Tree
 int height(struct Node* node){
        if(node == nullptr)
            return 0;
        
            return max((1+ height(node->right)),(1+ height(node->left)));
    }
    
// Diameter of a Binary Tree
int diameter(Node* root) {
    
    if(root==NULL)
        return 0;
   int lheight = height(root->left);
   int rheight = height(root->right);
   
   int ldiameter = diameter(root->left);
   int rdiameter = diameter(root->right);
   
   return max(lheight+rheight+1,max(ldiameter,rdiameter));
}
