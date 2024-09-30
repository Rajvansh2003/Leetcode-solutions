class CustomStack {
public:
    int n;
    stack<int> stack;
    vector<int> ans;

    CustomStack(int n) {
        this->n = n;
    }

    void push(int x) {
        if (stack.size() < n) {
            stack.push(x);
            ans.push_back(0);
        }
    }

    int pop() {
        if (stack.empty()) return -1;
        if (ans.size() > 1) ans[ans.size() - 2] += ans.back();
        int res = stack.top() + ans.back();
        stack.pop();
        ans.pop_back();
        return res;
    }

    void increment(int k, int val) {
        if (!stack.empty()) {
            int idx = min(k, (int)ans.size()) - 1;
            ans[idx] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */