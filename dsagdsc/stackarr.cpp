#include<bits/stdc++.h>
using namespace std;
int main(){
    // in-built stack
    // stack<data_type> name_of_stack
    stack<int> st;
    // for pushing --> .push(arguments);
    st.push(1);
    st.push(2);
    // .top()
    cout<<st.top()<<endl;
    // pop ---> .pop()
    st.pop();
    cout<<st.top()<<endl;

    return 0;
}