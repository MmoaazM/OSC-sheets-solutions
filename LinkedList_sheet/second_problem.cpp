/*

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    bool areIdentical(Node *head1, Node *head2) {
        while(head1!=nullptr && head2!=nullptr){
            if(head1->data!=head2->data)return false;
            head1=head1->next; head2=head2->next;
        }
        if(head1==head2) return true;
        else return false;
    }
};