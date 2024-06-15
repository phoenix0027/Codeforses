#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        char ch;
        node* next;
        node(char ch){
            this->ch = ch;
            next=NULL;
        }
};

void insert(node* &head,char ch,int pos){
    node* n=new node(ch);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    if(pos%2==0){
        pos=pos/2;
    }
    else{
        pos=(pos+1)/2;
    }
    if(pos==1){
        n->next=head;
        head=n;
        return;
    }
    pos--;
    while(temp->next!=NULL && pos>1){
        pos--;
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
}

void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->ch;
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* a=NULL;
    int n;
    cin>>n;
    string s="logva";
    cin>>s;
    reverse(s.begin(), s.end());
    for(int i=0;i<n;i++){
        insert(a,s[i],i+1);
    }
    display(a);
}