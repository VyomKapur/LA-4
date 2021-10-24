#include<iostream>
#include<string>
using namespace std;

struct stack{
    char data;
    struct stack* next;
};
struct stack* start = NULL;

void push(char a){
    struct stack* new_node;
    new_node = new stack;
    new_node->next = start;
    start = new_node;
    new_node->data = a;
}
bool isEmpty(){
    if(start==NULL){
        return true;
    }
    else{
        return false;
    }
}
void pop(){
    stack* ptr = start;
    start = ptr->next;
}
int main(){
    string Q;
    string P;
    cout<<"Enter INFIX expression: ";
    cin>>Q;
    Q = Q+ ')';
    push('(');
    for (int i = 0; i < Q.length(); i++)
    {
        if(Q[i]!= '+' && Q[i]!='-' && Q[i]!='*' && Q[i]!='/' && Q[i]!=')' && Q[i]!='('){
            P += Q[i];
        }
        else if(Q[i]=='('){
            push(Q[i]);
        }
        else if(Q[i]== '+' || Q[i]=='-' || Q[i]=='*' || Q[i]=='/'){
            while(isEmpty()==false){
                P += start->data;
                pop();
            }
            push(Q[i]);
        }
        else if(Q[i]==')'){
            while(start->data!='('){
                P += start->data;
                pop();
            }
            pop();
        }
        cout<<P<<endl;
    }
    cout<<"POSTFIX expression is: "<<P<<endl;
}