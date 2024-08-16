class Queue {
public:
    // Push element x to the back of queue.
    stack<int> sa;
    stack<int> sb;
    void move(){
        while(!sa.empty()){
            sb.push(sa.top());
            sa.pop();
        }
    }
    void push(int x) {
        sa.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        if(!sb.empty()) sb.pop();
        else{
            move();
            sb.pop();
        }
    }

    // Get the front element.
    int peek(void) {
        if(!sb.empty()) return sb.top();
        else{
            move();
            return sb.top();
        }

    }

    // Return whether the queue is empty.
    bool empty(void) {
        return sa.empty() && sb.empty();
    }
};