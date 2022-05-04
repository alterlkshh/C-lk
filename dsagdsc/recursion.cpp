#include <iostream>
using namespace std;
void fun(int n){
    if(n==0)
    return;
    cout<<n<<" ";
    fun(n-1);
    // cout<<n<<" ";
}


int main(){
    int s;
    cin>>s;
    fun(s);
    
    return 0;
}