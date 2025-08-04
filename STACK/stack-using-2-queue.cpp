// Stack implementation using two queues (q1 and q2)
class MyStack {
public:
    queue<int> q1, q2;

    MyStack() {}

    // Push element x onto stack
    void push(int x) {
        // Push to q2 first
        q2.push(x);

        // Move all elements from q1 to q2 so new element goes to the front
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Swap q1 and q2 so q1 always has the "stack" order
        swap(q1, q2);
    }

    // Removes the element on top of the stack
    int pop() {
        int val = q1.front(); // Top of stack is at the front of q1
        q1.pop();
        return val;
    }

    // Get the top element
    int top() {
        return q1.front(); // Top of stack
    }

    // Returns true if the stack is empty
    bool empty() {
        return q1.empty();
    }
};
