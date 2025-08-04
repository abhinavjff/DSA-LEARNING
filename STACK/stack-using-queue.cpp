// Stack implementation using a single queue
class MyStack {
public:
    queue<int> q;

    MyStack() {}

    // Push element x onto stack
    void push(int x) {
        q.push(x);

        // Rotate the queue to bring new element to the front
        // Only do q.size() - 1 times, to leave x at the front
        for (int i = 0; i < q.size() - 1; i++) {
            q.push(q.front()); // Move front to back
            q.pop();
        }
    }

    // Removes the element on top of the stack
    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }

    // Get the top element
    int top() {
        return q.front();
    }

    // Returns true if the stack is empty
    bool empty() {
        return q.empty();
    }
};
