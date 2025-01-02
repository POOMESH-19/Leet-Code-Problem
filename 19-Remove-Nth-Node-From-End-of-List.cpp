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
    ListNode* removeNthFromEnd(ListNode* h, int n) {
        ListNode* res= new ListNode(0,h);
        ListNode* d=res;
        for(int i=0;i<n;i++){
            h=h->next;
        }
        while(h!=nullptr){
            h=h->next;
            d=d->next;
        }
        d->next=d->next->next;
        return res->next;
    }
};