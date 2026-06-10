#include <iostream>
#include <stdlib.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class linked_list{
    private:
    Node *first;
    public:
    linked_list(){
        first = nullptr;
    }
    linked_list(int A[], int n){
        first = new Node;
        first->data = A[0];
        first->next = nullptr;
        Node *last = first;

        for(int i=1; i<n; i++){
            Node *t = new Node;
            t->data = A[i];
            t->next = nullptr;
            last->next = t;
            last = t;
        }
    }

    ~linked_list(){
        Node *p = first;
        while(p){
            Node *temp = p;
            p = p->next;
            delete temp;
        }
    }

    void display(){
        Node *p = first;
        while(p){
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }

    void insert(int index, int x){
        if(index < 0 || index > length()){
            return;
        }
        Node *t = new Node;
        t->data = x;
        t->next = nullptr;
        if(index == 0){
            t->next = first;
            first = t;
        } 
        else {
            Node *p = first;
            for(int i=0; i<index-1 && p; i++){
                p = p->next;
            }
            if(p){
                t->next = p->next;
                p->next = t;
            }
        }
    }

    int length(){
        int count = 0;
        Node *p = first;
        while(p){
            count++;
            p = p->next;
        }
        return count;
    }

    int delete_node(int index){
        if(index < 0 || index >= length()){
            return -1;
        }
        Node *p = first;
        int x = -1;
        if(index == 0){
            first = first->next;
            x = p->data;
            delete p;
        } 
        else {
            Node *q = nullptr;
            for(int i=0; i<index && p; i++){
                q = p;
                p = p->next;
            }
            if(p){
                q->next = p->next;
                x = p->data;
                delete p;
            }
        }
        return x;
    } 
};
int main(){
    int A[] = {1, 2, 3, 4, 5};
    linked_list l(A, 5);
    l.display();
    l.insert(0, 0);
    l.insert(6, 6);
    l.insert(3, 10);
    l.display();
    cout << "Deleted element: " << l.delete_node(3) << endl;
    l.display();
    cout << "Length: " << l.length() << endl;
    return 0;
}