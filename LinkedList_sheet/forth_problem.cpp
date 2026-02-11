#include<stack>
using namespace std;

  struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
    stack<ListNode>st;
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;

        if(head==nullptr)return head;

        while(temp!=nullptr){
            st.push(temp->val);
            temp=temp->next;
        }

        if(st.size()==1)return head;

        head->next=nullptr;
        head->val=st.top().val;
        temp=head;

        st.pop();

        while(!st.empty()){
            temp->next=new ListNode(st.top());
            st.pop();
            temp = temp->next;
        }

        return head;
    }
};