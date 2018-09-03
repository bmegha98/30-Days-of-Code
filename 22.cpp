#include <iostream>
#include <cstddef>

using namespace std;	

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
        int getHeight(Node* root)
        {
          if(root==NULL)
             return -1;
            else
        return max(getHeight(root->left),getHeight(root->right))+1;
        }
    void levelOrder(Node * root)
    {
    int height=getHeight(root);
    for(int i=0;i<=height;i++)
        printlevelOrder(root,i);    
     }
void printlevelOrder(Node* root,int level)
{
    if(root==NULL)
        return;
    if(level==0)
        cout<<root->data<<" ";
    else
    {
      printlevelOrder(root->left,level-1);
      printlevelOrder(root->right,level-1);
    }
}
        }; 

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;
   myTree.levelOrder(root);
    return 0;
}
    
       
