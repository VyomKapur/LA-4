#include<bits/stdc++.h>
#include<string>
using namespace std;
bool isBalanced(string str){
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]=='(' || str[i] =='{' || str[i]=='['){
            s.push(str[i]);
        }
        else if(str[i]==')'){
            if(s.top()=='('){
                s.pop();
            }
        }
        else if(str[i]=='}'){
            if(s.top()=='{'){
                s.pop();
            }
        }
        else if(str[i]==']'){
            if(s.top()=='['){
                s.pop();
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string str;
    cout<<"Enter expression: ";
    cin>>str;
    if(isBalanced(str)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}