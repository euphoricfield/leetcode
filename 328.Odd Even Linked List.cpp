/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr)
            return nullptr;
        ListNode *odd=head, *evenhead=head->next, *even=evenhead;
        while(even&&even->next){
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=evenhead;
        return head;
    }
};

//We always need O(1), so why not use one head, then one even, 
//in this case, no need temp in the loop, two new Nodes avoid
//pointer confusion. 
