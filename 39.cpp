vector<int> levelOrder(Node* node)
{
    vector<int> res;
    if(node == NULL)
        return res;
    
    queue <Node *> q;
    
    q.push(node);
    
    while(!q.empty())
    {
      Node *n = q.front();
        res.push_back(n->data);
        q.pop();
        
        if(n->left !=NULL)
            q.push(n->left);
        if(n->right !=NULL)
            q.push(n->right);
    }
    return res;
}
