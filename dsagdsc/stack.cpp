#include <iostream>
using namespace std;

int arr[100];
int top = -1;
int n= 100;
// push
// pop
// dispaly
// isEmpty
void push(int data){
    if(top>=n){
        cout<<"stack is full"<<endl;
    }
    else{
        top++;
        arr[top]= data;
    }    
}

void pop(){
    if(top<=-1){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"deleted element from the stack is "<<arr[top]<<endl;
        top--;
    }
}
void display(){
    if(top<=-1){
        cout<<"nothing in stack"<<endl;
    }
    else{
        cout<<"stack elements are as follows : ---";
        for(int i =top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}

int main(){
    push(1);
    display();
    return 0;
}