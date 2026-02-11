#include<iostream>
#include<cmath>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


// Function to insert a node in the middle of the linked list.
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        
        if(head==NULL) head=new Node(x);
        
        int counter=0;
        Node*temp=head;
        while(temp!=NULL){
            counter++;
            temp=temp->next;
        }
        
        if(counter==1) return head;

        int middle=ceil((float)counter/2) - 1;
        counter=0;
        temp=head;

        while(true){
            if(counter==middle){
                Node*newNode=new Node(x);
                newNode->next=temp->next;
                temp->next=newNode;
                break;
            }
            else{
                counter++;
                temp=temp->next;
            } 
        }

        return head;
    }
};