#include <string>
#include <stack>

class Solution {
public:
    bool isValid(string s) {
    stack<char> charStack;
    string opening_brackets = "{[(";
    for (char c:s) {
        if (opening_brackets.find(c) != string::npos) {
            cout << c << " is an opening bracket!" <<endl;
            charStack.push(c);
        }
        else{
            if (charStack.empty()){
                return 0;
            }
            if (c == ')' && charStack.top() == '(' || c == ']' && charStack.top() == '[' || c == '}' && charStack.top() == '{') {
                charStack.pop();
            }
            else{
                return false;
            }
        }
    }
    return charStack.empty();
    }
};
