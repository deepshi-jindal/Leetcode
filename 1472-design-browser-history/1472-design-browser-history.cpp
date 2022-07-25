class BrowserHistory {
public:
    stack<string> stackf;
    stack<string> stackb;
    BrowserHistory(string homepage) {
        stackb.push(homepage);
    }
    
    void visit(string url) {
        while(!stackf.empty()){
            stackf.pop();
        }
        stackb.push(url);
    }
    
    string back(int steps) {
        while(stackb.size()>1 && steps--){
            stackf.push(stackb.top());
            stackb.pop();
        }
        return stackb.top();
    }
    
    string forward(int steps) {
         while(!stackf.empty() && steps--){
            stackb.push(stackf.top());
            stackf.pop();
        }
        return stackb.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */