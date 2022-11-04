#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<char> s;
    char c;
    cin.get(c);
    while(c != '\n'){
        s.push(c);
        cin.get(c);
    }

    for(int i = 0;i<s.size();i++){
        cout << s.top();
        s.pop();
    }
}