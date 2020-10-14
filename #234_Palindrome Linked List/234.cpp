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
    void reverse(ListNode* p1){
        ListNode* p2 = p1->next;
        p1->next = NULL;
        while(p2!=NULL)
        {
            ListNode* p3 = p2->next;
            p2->next = p1;
            p1 = p2;
            p2 = p3;
        }   
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next == NULL)
        {
            return true;
        }
        if(head->next->next == NULL)
        {
            if(head->val != head->next->val)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        ListNode* rbegin=head;
        ListNode* middle=head;
        while(rbegin->next!=NULL)
        {
            if(rbegin->next->next != NULL)
            {
                middle = middle->next;
                rbegin = rbegin->next->next;
            }
            else
            {
                rbegin = rbegin->next;
            }
        }
        reverse(middle->next);
        
        bool result = true;
        ListNode* p1 = head;
        ListNode* p2 = rbegin;
        
        while(p2!=NULL)//odd situation: p2 is always shorter than p1, so if length is odd, they wouldn't compare last element in p1
        {
            if(p1->val!=p2->val)
            {
                result = false;
                break;
            }
            else
            {
                p1=p1->next;
                p2=p2->next;
            }
        }
       
        reverse(rbegin);
        return result;
    }
};
// odd number of node would cause problem and the space isn't O(1)
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         ListNode* tmp = head;
//         int counter = 0;
//         stack<int> s1;
//         while(tmp!=NULL)
//         {
//             tmp = tmp->next;
//             counter++;
//         }
//         int k = counter/2;
//         while(k!=0)
//         {
//             s1.push(head->val);
//             k--;
//             head = head->next;
//         }
//         while(!s1.empty())
//         {
//             if(s1.top()!=head->val)
//             {
//                 return false;
//             }
//             else
//             {
//                 s1.pop();
//                 head = head->next;
//             }
//         }
//         return true;
//     }
// };
