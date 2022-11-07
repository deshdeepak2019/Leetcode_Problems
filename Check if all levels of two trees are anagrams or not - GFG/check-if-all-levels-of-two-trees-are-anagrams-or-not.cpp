//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool areAnagrams(Node *node1, Node *node2)
    {
       // if(node1==0)
    vector<vector<int>>v1,v2;
    queue<Node*>q;
    q.push(node1);
    //q.pop();
    while(!q.empty()){
        vector<int>temp;
        int n=q.size();
        for(int i=0;i<n;i++){
            node1=q.front();
            q.pop();
            if(node1->left){
                q.push(node1->left);
            }
            if(node1->right){
                q.push(node1->right);
            }
            temp.push_back(node1->data);
        }
         sort(temp.begin(),temp.end());
        v1.push_back(temp);
    }
   // q.clear();
   queue<Node*>q1;
    q1.push(node2);
   // q1.pop();
    while(!q1.empty()){
        vector<int>temp;
        int n=q1.size();
        for(int i=0;i<n;i++){
            node2=q1.front();
            q1.pop();
            if(node2->left){
                q1.push(node2->left);
            }
            if(node2->right){
                q1.push(node2->right);
            }
            temp.push_back(node2->data);
        }
        sort(temp.begin(),temp.end());
        v2.push_back(temp);
    }
    // for(int i=0;i<v1.size();i++){
    //     vector<int>tmp=v2[i];
    //     for(int j=0;j<tmp.size();j++){
    //         cout<<tmp[j]<<" ";
    //     }
    // }
    for(int i=0;i<v1.size();i++){
        if(v1[i]!=v2[i]){
            return 0;
        }
    }
    return 1;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/
int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        string treeString1, treeString2;
        getline(cin, treeString1);
        Node *root1 = buildTree(treeString1);
        getline(cin, treeString2);
        Node *root2 = buildTree(treeString2);
        Solution ob;
        cout << ob.areAnagrams(root1, root2) << endl;
    }
    return 0;
}

// } Driver Code Ends