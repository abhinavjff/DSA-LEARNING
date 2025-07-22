class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;

        for (string op : operations) {
            if (op == "C") {
                // Invalidate previous score
                if (!record.empty()) record.pop();
            } 
            else if (op == "D") {
                // Double the previous score
                if (!record.empty()) record.push(2 * record.top());
            } 
            else if (op == "+") {
                // Sum of previous two scores
                if (record.size() >= 2) {
                    int top1 = record.top(); record.pop();
                    int top2 = record.top();
                    record.push(top1); // Put top1 back
                    record.push(top1 + top2);
                }
            } 
            else {
                // It's an integer
                record.push(stoi(op));
            }
        }

        // Sum all scores
        int total = 0;
        while (!record.empty()) {
            total += record.top();
            record.pop();
        }

        return total;
    }
};
