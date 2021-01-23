//Mirror of a tree
void mirrorify(Node* root, Node** mirror)
{
  if(root == NULL)
  {
    mirror = NULL;
    return;
  }
  
  *mirror = createNode(root->val);
  mirrorify(root->left, &((*mirror)->right));
  mirrorify(root->right, &((*mirror)->left));
}
  

