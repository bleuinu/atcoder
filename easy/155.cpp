class MinStack {
  public:
    stack<int> s1;

    MinStack() {}

    void push(int x) {
      if(s1.empty()) {
        s1.push(x);
        s1.push(x);
      } else {
        int y = s1.top();
        s1.push(x);
        s1.push((y<x) ? y : x);
      }
    }

    void pop() {
      s1.pop();
      s1.pop();
    }

    int top() {
      int x = s1.top();
      s1.pop();
      int y = s1.top();
      s1.push(x);
      return y;
    }

    int getMin() {
      return s1.top();
    }
};
