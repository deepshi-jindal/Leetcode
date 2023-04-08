/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL)
            return NULL;
        unordered_map<Node*, Node*> visited;
        return cloneNode(node, visited);
    }
    private:
    Node* cloneNode( Node* node, unordered_map<Node*, Node*>&visited){
        if(visited.count(node))
            return visited[node];
        
        Node* clone= new Node(node->val);
        visited[node]=clone;
        
        for(Node* neighbor: node->neighbors){
            clone->neighbors.push_back(cloneNode(neighbor, visited));
        }
        return clone;
        
    }
};