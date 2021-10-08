#include<iostream>
#include<string>
using namespace std;
struct stack{
    char data;
    struct stack* next;
};
struct stack* start = NULL;

void reverse(){

}
void push(string str){
    stack* ptr = start;
    for(int i = 0; i<str.length();i++){
        
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
int main(){
    string str; 
    int flag = 0;
    cout<<"Enter string: ";
    cin>>str;
    int n = str.length();
    
}