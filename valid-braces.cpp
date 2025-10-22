#include <stack>
#include <string>

bool valid_braces(const std::string &braces) {
    std::stack<char> st;

    for (char c : braces) {
        if (c=='(' || c=='[' || c=='{')
            st.push(c);
        else if (c==')' || c==']' || c=='}') {
            if (st.empty()) return false;
            char open = st.top();
            st.pop();
            if ((c==')' && open!='(') ||
                (c==']' && open!='[') ||
                (c=='}' && open!='{'))
                return false;
        }
    }

    return st.empty();
}
