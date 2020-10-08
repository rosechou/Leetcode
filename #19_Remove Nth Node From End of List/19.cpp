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


// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         //ArrayList List = new ArrayList();
//         //int List[] = new int[];
//         std::vector<int> List;
//         int counter = 0;
//         for(ListNode i=0;;head->next)
//         {
//             List.Add(i);
//             counter++;
//         }
//         List.RemoveAt(List[counter-n]);
//         return List;
//     }
// };


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* fst = dummy;
        ListNode* snd = dummy;
        for(int i=0;i<n;i++)
        {
            fst = fst->next;
        }
        while(fst->next)
        {
            fst = fst->next;
            snd = snd->next;
        }
        snd->next=snd->next->next;
        return dummy->next;
    }
};
