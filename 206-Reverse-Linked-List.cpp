/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int>num;
        while(head!=NULL){
            num.push_back(head->val);
            head=head->next;
        }
        reverse(num.begin(),num.end());
        ListNode* temp=new ListNode;
        ListNode* dummy=temp;
        for(int i=0;i<num.size();i++){
            dummy->next=new ListNode(num[i]);
            dummy=dummy->next;
        }
        return temp->next;
    }
};