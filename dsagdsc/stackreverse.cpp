#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    // reverse the array in place
    // without using any extra array
    stack<int> st;
    for(int i=0;i<5;i++){
        st.push(arr[i]);
    }
    // before reversing the actual array
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int k=0;
    while(!st.empty()){
        arr[k] = st.top();
        st.pop();
        k++;
    }
    // after reversing the actual arr
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}