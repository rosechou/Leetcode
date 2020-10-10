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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* fst = dummy;
        if(dummy->next != NULL)
        {
            ListNode* snd = dummy->next->next;
            while(snd != NULL)
            {
                ListNode* temp = snd->next;
                snd->next = fst->next;
                fst->next = snd;
                snd->next->next = temp;
                fst = fst->next->next;
                if(fst->next == NULL)
                {
                    break;
                }
                else
                {
                    snd = snd->next->next->next;
                }     
            }
        }
        return dummy->next;
    }
};
