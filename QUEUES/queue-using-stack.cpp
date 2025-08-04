// Queue implemented using two stacks: input & output
class MyQueue {
public:
    stack<int> input, output;

    MyQueue() {}

    // Push element to the back of the queue
    void push(int x) {
        input.push(x);  // Just push to input stack
    }

    // Removes the element from the front of the queue
    int pop() {
        // Transfer only if output is empty
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        int val = output.top();
        output.pop();
        return val;
    }

    // Get the front element
    int peek() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }

    // Returns true if the queue is empty
    bool empty() {
        return input.empty() && output.empty();
    }
};
