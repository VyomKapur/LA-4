#include<iostream>
using namespace std;

struct stack{
    int data;
    struct stack* next;
};
struct stack* start = NULL;

bool isEmpty(){
    if(start==NULL){
        return true;
    }
    else{
        return false;
    }
}
bool isFull(int n){
    int ctr = 0;
    stack* ptr = start;
    while(ptr!=NULL){   
        ctr++;
        ptr = ptr->next;
    }   
    if(n>ctr){
        return false;
    }
    else{
        return true;
    }
}
void push(int n){
    struct stack* new_node;
    new_node = new stack;
    int data;
    if(isFull(n)==false){
        cout<<"Enter data to be inserted: ";
        cin>>data;
        new_node->data = data;
        new_node->next = start;
        start = new_node;
    }
    else{
        cout<<"Stack overflow!"<<endl;
    }
}
void pop(){
    stack* ptr = start;
    if(isEmpty()==false){
        start = ptr->next;
    }
    else{
        cout<<"Stack underflow!"<<endl;
    }
}
void display(){
    stack* ptr = start;
    cout<<"TOP OF STACK->";
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr = ptr->next;
    }
}
void peek(){
    stack* ptr = start;
    if(start!=NULL){
        cout<<"Top of the stack is: "<<ptr->data<<endl;
    }
    else{
        cout<<"Empty stack!"<<endl;
    }
}
int main(){
    int flag = 0;
    int n;
    cout<<"Enter size of stack: ";
    cin>>n;
    while(flag!=7){
        cout<<"--MENU--\n1)Push\n2)Pop\n3)Is Empty\n4)Is Full\n5)Display\n6)Peek\n7)Exit\nINPUT: ";
        cin>>flag;
        switch (flag)
        {
        case 1:
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            if(isEmpty()){
                cout<<"Stack is empty!"<<endl;
            }
            else{
                cout<<"Stack is not empty!"<<endl;
            }
            break;
        case 4:
            if(isFull(n)){
                cout<<"Stack is full!"<<endl;
            }
            else{
                cout<<"Stack is not full!"<<endl;
            }
            break;
        case 5:
            display();
            break;
        case 6:
            peek();
            break;
        case 7:
            cout<<"Exiting..."<<endl;
            break;
        default:
            cout<<"Enter a valid input!"<<endl;
            break;
        }
    }
}