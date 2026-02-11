 struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = nullptr;
  }
};

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {

        int size=0;
        Node*temp=head;
        while(temp!=nullptr){
            size++;
            temp=temp->next;
        }
        
        if(k>size) return -1;

        int steps=size-k;
        temp=head;

        for(int i=0;i<steps;i++){
            temp=temp->next;
        }

        return temp->data;
        
    }
};