//In The Name of Allah
#include <iostream>

using namespace std;

struct Node{
    int value;
    Node* Next;
};

class Queue{
public:
    int Size=0;
    Node *head = NULL,*current = NULL;
    void add_Back(Node* node){
        Size++;
        if(head==NULL) head = node;
        else{
            current->Next = node;
        }
        node->Next=NULL;
        current = node;
    }
};

int main(){
    int n;
    while(cin>>n){
        if(!n) break;
        Queue *q=new Queue();
        for(int i=1;i<=n;i++){
            Node *n=new Node();
            n->value = i;
            q->add_Back(n);
        }
        cout<<"Discarded cards: ";
        Node *cur=q->head;
        while(q->Size>=2){
            cout<<cur->value;
            Node *ad=new Node();
            ad->value=cur->Next->value;
            q->add_Back(ad);
            q->Size-=2,cur=cur->Next->Next;
            if(q->Size>=2) cout<<", ";
        }
        cout<<endl<<"Remaining card: "<<q->current->value<<endl;
    }
    return 0;
}
