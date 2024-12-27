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
    bool isPalindrome(ListNode* head) {
        vector<int> num;
        ListNode* Curr=head;
        while(Curr!=NULL){
            num.push_back(Curr->val);
            Curr=Curr->next;
        }
        reverse(num.begin(),num.end());
        for(int i=0;i<num.size();i++){
            if(num[i]==head->val){
                head=head->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
};