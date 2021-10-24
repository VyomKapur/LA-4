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
    new_node->data = a;
    new_node->next = start;
    start = new_node;
}
void display(){
    stack* ptr = start;
    cout<<"Reversed word is: ";
    while(ptr!=NULL){
        cout<<ptr->data;
        ptr = ptr->next;
    }
}
int main(){
    string str; 
    int flag = 0;
    cout<<"Enter string: ";
    getline(cin, str);
    for (int i; i < str.length(); i++)
    {
        push(str[i]);
    }
    display();
}