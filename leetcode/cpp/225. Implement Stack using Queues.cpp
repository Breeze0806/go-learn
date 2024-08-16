class Stack {
public:
    queue<int> q[2];

    // Push element x onto stack.
    void move(int x){
        while(!q[1-x].empty()){
            q[x].push(q[1-x].front());
            q[1-x].pop();
        }
    }

    void push(int x) {
        for(int i = 0; i < 2; ++i){
            if(q[i].empty()){
                q[i].push(x);
                move(i);
                break;
            }
        }
    }

    // Removes the element on top of the stack.
    void pop() {
        for(int i = 0; i < 2; ++i){
            if(!q[i].empty()){
                q[i].pop();
                break;
            }
        }
    }

    // Get the top element.
    int top() {
        for(int i = 0; i < 2; ++i){
            if(!q[i].empty()){
                return q[i].front();
            }
        }
    }

    // Return whether the stack is empty.
    bool empty() {
        return q[0].empty() && q[1].empty();
    }
};