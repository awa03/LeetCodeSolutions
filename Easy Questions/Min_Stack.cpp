class MinStack {
public:
    vector<int> array;
    int topList;

    MinStack() {
        topList = -1; // Initialize topList to -1 to indicate an empty stack
    }

    void push(int val) {
        array.push_back(val); // Use push_back to add elements to the vector
        topList++;
    }

    void pop() {
        if (topList >= 0) {
            array.pop_back(); // Use pop_back to remove elements from the vector
            topList--;
        }
    }

    int top() {
        if (topList >= 0) {
            return array[topList];
        }
        return -1; // Stack is empty
    }

    int getMin() {
        if (topList >= 0) {
            int min = array[0];
            for (int i = 1; i < array.size(); ++i) {
                if (array[i] < min) {
                    min = array[i];
                }
            }
            return min;
        }
        return -1; // Stack is empty
    }
};
