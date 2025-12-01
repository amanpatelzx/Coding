#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Linklist{
public:
    Node* head;
    Node* tail;
    int size;

    Linklist(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtHead(int val){
        if(head == NULL){
            Node* temp = new Node(val);
            head = temp;
            tail = head;
            size++;
        }
        else {
            Node* temp = new Node(val);
            temp -> next = head;
            head = temp;
            size++;
        }
    }
    void insertAtTail(int val){
        if(tail == NULL){
            Node* temp = new Node(val);
            head = temp;
            tail = head;
            size++;
        }
        else {
            Node* temp = new Node(val);
            tail->next = temp;
            tail = temp;
            size++;
    }
}
    void insertAtAnyIndex(int val, int index){
        if(tail == NULL){
            Node* temp = new Node(val);
            head = temp;
            tail = head;
            size++;
        }
        else{
            Node* temp = new Node(val);
            int idx = index;
            Node* t =head;
            while(t->next!= NULL && idx>1){
                t = t->next;
                idx--;
            }
           if(t == NULL ) insertAtTail(val);
           else {
             Node* temp2 = t->next;
             t->next = temp;
             if(temp2 != NULL) temp->next = temp2;
             size++;
           }
        }
    }
    void deleteAtHead(){
        if(head!= NULL) head = head->next;
        size--;
    }
    void deleteAtTail(){
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        temp -> next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtAnyIndex(int idx){
        if(idx == 0 ) deleteAtHead();
        else if(idx == size -1) deleteAtTail();
        else{
            Node* temp = head;
            for(int  i = 0; i < idx ; i ++ ){
                temp = temp-> next;
            }
            temp->next = temp ->next->next;
            size--;
        }
    }
    int s(){
        return size;
    }
    void print(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Linklist ll;
    ll.insertAtHead(10);
    ll.insertAtHead(20);
    ll.insertAtHead(30);
    ll.print();
    cout<<ll.s()<<endl;
    ll.deleteAtAnyIndex(1);
    ll.print();
    cout<<ll.s()<<endl;
}