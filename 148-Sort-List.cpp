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
    ListNode* sortList(ListNode* h) {
        vector<int>p;
        ListNode* temp=h;
        while(h!=NULL){
            p.push_back(h->val);
            h=h->next;
        }
        sort(p.begin(),p.end());
        ListNode* v=new ListNode();
        ListNode* ans=v;
        for(int i=0;i<p.size();i++){
            v->next= new ListNode(p[i]);
            v=v->next;
        }
        return ans->next;
    }
};