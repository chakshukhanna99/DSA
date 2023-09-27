#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template <typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data){
        this->data=data;
    }
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};
bool isPresent(TreeNode<int>* root, int x) {
    // Write your code here
    if(root->data==x){
        return true;
    }
    for(int i=0;i<root->children.size();i++){
        if (isPresent(root->children[i], x)) {
            return true;
        }

    }
    return false;
       

}
int getLargeNodeCount(TreeNode<int>* root, int x) {
    // Write your code here
    int count=0;
    if (root->data > x) {
      count=count+1;
    }
    for (int i = 0; i < root->children.size(); i++){
        count+=getLargeNodeCount(root->children[i], x);
    }
    return count;
}
TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    if(root == NULL) {
        return NULL;
    }
    TreeNode<int>* ans = root;
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    int maxSum = root->data;
    while(!pendingNodes.empty()) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int sum = front->data; // Initialize sum to include data of current node
        for(int i = 0; i < front->children.size(); i++) {
            sum += front->children[i]->data; // Add data of each child to sum
            pendingNodes.push(front->children[i]);
        }
        if(sum > maxSum) { // If sum is greater than maxSum, update ans and maxSum
            ans = front;
            maxSum = sum;
        }
    }
    return ans;
}
// bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
//  if (root1->children.size() != root2->children.size()) {
//         return false;
//     }

//     for(int i=0;i<root1->children.size()&&i<root2->children.size();i++){
//         if(root1->children[i]->data!=root2->children[i]->data){
//             return false;
//         }
//         areIdentical(root1->children[i], root2->children[i]);
//     }
//     return true;
// }
bool areIdentical(TreeNode<int> *root1, TreeNode<int> *root2) {
    // If both trees are NULL, they are identical.
    if (root1 == NULL && root2 == NULL) {
        return true;
    }
    
    // If one tree is NULL and the other is not, they are not identical.
    if (root1 == NULL || root2 == NULL) {
        return false;
    }

    // Check if the data of the current nodes is equal.
    if (root1->data != root2->data) {
        return false;
    }

    // Check if the children of both nodes are identical recursively.
    if (root1->children.size() != root2->children.size()) {
        return false;
    }

    for (int i = 0; i < root1->children.size(); i++) {
        if (!areIdentical(root1->children[i], root2->children[i])) {
            return false;
        }
    }

    // If all conditions pass, the trees are identical.
    return true;
}
// TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
//     // Write your code here
//     if(root->data>x){
//         return  root;
//     }
//     // else{
//     //     return NULL;
//     // }
//     TreeNode<int>* ans = NULL;
//     for(int i=0;i<root->children.size();i++){
//       ans =  getNextLargerElement(root->children[i],  x);
//     }
//     return ans;
// }
TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    if (root == NULL) {
        return NULL;
    }

    TreeNode<int>* ans = NULL;

    // Check if the current node is greater than x and update ans if needed.
    if (root->data > x) {
        ans = root;
    }

    // Iterate through the children of the current node.
    for (int i = 0; i < root->children.size(); i++) {
        TreeNode<int>* childResult = getNextLargerElement(root->children[i], x);
        
        // If a larger element is found in the child subtree, update ans.
        if (childResult != NULL && (ans == NULL || childResult->data < ans->data)) {
            ans = childResult;
        }
    }

    return ans;
}

void helper(TreeNode<int> *root,TreeNode<int> **first,TreeNode<int> **second){
    if(root==NULL)
    {
        return;
    
    }
    if(!(*first)){
        *first=root;
    }
    else if(root->data>(*first)->data){
        *second=*first;
        *first=root;
    }
    else if(!(*second)|| root->data>(*second)->data)
        *second=root;
    
    for(int i=0;i<root->children.size();i++)
        helper(root->children[i],first,second);
     
}
TreeNode <int>* getSecondLargestNode(TreeNode<int> *root) {
    TreeNode<int> *second=NULL;
    TreeNode<int> *first=NULL;
    helper(root,&first,&second);
        
        if(second==NULL)
            return NULL;
    if(first->data==second->data)
        return NULL;
    return second;
    // Write your code here

}

void replaceWithDepthValue(TreeNode<int>* root, int depth = 0) {
    if(root == NULL) {
        return;
    }
    root->data = depth;
    for(int i = 0; i < root->children.size(); i++) {
        replaceWithDepthValue(root->children[i], depth + 1);
    }
}



// Node with maximum child sum
// Send Feedback
// Given a generic tree, find and return the node for which sum of its data and data of all its child nodes is maximum. In the sum, data of the node and data of its immediate child nodes has to be taken.
// Input format :
// The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space. 
// Output format :
// The first and only line of output contains the data of the node with maximum sum, as described in the task.
// Constraints:
// Time Limit: 1 sec
// Sample Input 1 :
// 5 3 1 2 3 1 15 2 4 5 1 6 0 0 0 0
// Sample Output 1 :
// 1
