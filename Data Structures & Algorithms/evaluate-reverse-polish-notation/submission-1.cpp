class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        set<string> s = {"+","-","*","/"};
        stack<int>st; 
        for(int i=0;i < tokens.size();i++){
            string x= tokens[i];
            if(s.find(x) != s.end()){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();  
                if (x== "+") st.push(a+b);
                if (x== "-") st.push(b-a);
                if (x== "*") st.push(a*b);
                if (x== "/") st.push(b/a); 
                
            }
            else st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};
