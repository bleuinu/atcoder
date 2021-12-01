class Solution {
  public:
    bool isValid(string s) {
      vector<char> stack;

      for(char c : s) {
        if(c==40 || c==91 || c==123) {
          stack.push_back(c);
        } else {
          if(stack.size() == 0) return false;

          char p = stack.back();
          if((p==40 && c==41) || (p==91 && c==93) || (p==123 && c==125)) stack.pop_back();
          else return false;
        }
      }

      return stack.size() == 0;
    }
};
