
#include<iostream>
#include<vector>
using namespace std;

class Solution {
    vector<int>result;
  public:
    vector<int> displayList(Node *head) {
        // code here
        while (head!=nullptr){
            result.push_back(head->data);
            head=head->next;
        }
        return result;
    }
};