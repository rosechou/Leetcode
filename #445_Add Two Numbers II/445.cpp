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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1;
        stack<int> s2;
        while(l1)
        {
            s1.push(l1->val);
            l1 = l1->next;
        }
        while(l2)
        {
            s2.push(l2->val);
            l2 = l2->next;
        }
        
        ListNode* res = new ListNode(0);
        int sum = 0;
        while(!s1.empty() || !s2.empty())
        {
            if(!s1.empty())
            {
                sum = sum + s1.top();
                s1.pop();
            }
            if(!s2.empty())
            {
                sum = sum + s2.top();
                s2.pop();
            }
            res->val = sum%10;
            ListNode* head = new ListNode(sum/10);
            sum = sum/10;
            head->next=res;
            res = head;
        }
        if(res->val == 0)
        {
            return res->next;
        }
        else
        {
            return res;
        }
        
    }
};
        
//the problem of this method: 當最前面的進位，原本 array 空間會不夠放
// # include <iostream>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         int len1 = 0;
//         int len2 = 0;
//         int i = 0;
//         int j = 0;
//         ListNode* fst = l1;
//         ListNode* snd = l2;
//         ListNode* fst2 = l1;
//         ListNode* snd2 = l2;
        
//         while(fst != NULL)
//         {
//             fst = fst->next;
//             len1++;
//         }
//         while(snd != NULL)
//         {
//             snd = snd->next;
//             len2++;
//         }
//         int a[len1];
//         int b[len2];
//         int c[max(len1,len2)];
        
//         while(i<len1)
//         {
//             a[i]=fst2->val;
//             cout<<a[i]<<endl;
//             i++;
//             fst2 = fst2->next;            
//         }
//         while(j<len2)
//         {
//             b[j]=snd2->val;
//             cout<<b[j]<<endl;
//             j++;
//             snd2 = snd2->next;            
//         }
//         int min2 = min(len1,len2);
//         int max2 = max(len1,len2);
//         while(min2>0)
//         {
//             c[max2-1]=c[max2-1]+a[len1-1]+b[len2-1];
//             if(c[max2-1]>10)
//             {
//                 c[max2-1] = c[max2-1] % 10;
//                 c[max2-2]++;
//             }
//             max2--;
//             len1--;
//             len2--;
//             min2--;
//         }
//         if(len1>0)
//         {
//             while(len1>=0)
//             {
//                 c[max2-1]=a[len1-1];
//             }
//         }
//         else if(len2>0)
//         {
//             while(len2>=0)
//             {
//                 c[max2-1]=b[len2-1];
//             }
//         }
//         cout<<c[0];
//         return l1;
//     }
// };
