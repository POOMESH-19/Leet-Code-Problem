class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for(int i=0;i<tokens.size();i++){
            string kk=tokens[i];
            if(kk=="+"){
                int t1=st.top() ;
                st.pop();
                int t2=st.top();
                st.pop();
                st.push(t2+t1);
            }
            else if(kk=="-"){
              int t1=st.top() ;
                st.pop();
                int t2=st.top();
                st.pop();
                st.push(t2-t1);
            }
            else if(kk=="*"){
                int t1=st.top() ;
                st.pop();
                int t2=st.top();
                st.pop();
                st.push(t2*t1);
            }
            else if(kk=="/"){
               int t1=st.top() ;
                st.pop();
                int t2=st.top();
                st.pop();
                st.push(int(t2/t1));
            }
            else {
                st.push(stoi(kk));
            }
        }
        
        int k=int(st.top());
        return k;
    }
};