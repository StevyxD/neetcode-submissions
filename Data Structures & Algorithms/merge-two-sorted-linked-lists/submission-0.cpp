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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1=list1;
        ListNode* head2=list2;
        ListNode* nHead=new ListNode(0);
        ListNode* temp1=nHead;
        
        while(head1 && head2){
            if(head1->val>head2->val){
                ListNode* temp=new ListNode(head2->val);
                nHead->next=temp;
                head2=head2->next;
            }
            else{
                ListNode* temp=new ListNode(head1->val);
                nHead->next=temp;
                head1=head1->next;

            }
                nHead=nHead->next;

        }

        while(head1){
            ListNode* temp=new ListNode(head1->val);
            nHead->next=temp;
            nHead=nHead->next;

            head1=head1->next;

        }

        while(head2){
            ListNode* temp=new ListNode(head2->val);
            nHead->next=temp;
            nHead=nHead->next;

            head2=head2->next;

        }
        
        return temp1->next;
    }
};
