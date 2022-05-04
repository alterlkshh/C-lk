#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age : ";
    cin >> age;  // -- > extraction operator

    if(age > 15 || age < 21) {
        cout << "Good";
    }
    else {
        cout << "lol";
    }
    
    return 0;
}