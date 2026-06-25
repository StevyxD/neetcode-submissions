class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string it:tokens){
            if(it=="+" || it=="/"|| it=="*"|| it=="-"){
                int num1=st.top();st.pop();
                int num2=st.top();st.pop();
                if(it=="+"){
                    st.push(num1+num2);
                    cout<<num1+num2<<" addition"<<endl;
                }
                if(it=="-"){
                    st.push(num2-num1);
                    cout<<num1-num2<<" subtration"<<endl;
                }
                if(it=="*"){
                    st.push(num1*num2);
                    cout<<num1*num2<<" multiplicaiton"<<endl;
                }
                if(it=="/"){
                    st.push(num2/num1);
                    cout<<num2/num1<<" division"<<endl;
                }
            }
            else{
                st.push(stoi(it));
            }
        }
        cout<<st.top();
        return st.top();
    }
};
