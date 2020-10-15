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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        vector<ListNode*> list;
        int length = 0;
        ListNode* ptr = root;
        while(ptr!= NULL)
        {
            length++;
            ptr = ptr->next;
        }
        int sum = length/k;
        int max = length%k;
        int max2 = max;
        while(max!=0)
        {
            ListNode* parti = root;
            for(int i=0;i<sum;i++)
            {   
                parti=parti->next;
            }
            list.push_back(root);
            root = parti->next;
            parti->next = NULL;
            max--;
        }
        while((k-max2)!=0)
        {
            if(root==NULL)
            {
                list.push_back(NULL);
            }
            else
            {
                ListNode* parti = root;
                for(int i=0;i<sum-1;i++)
                {   
                    parti=parti->next;
                }
                list.push_back(root);
                root = parti->next;
                parti->next = NULL;
            }
            max2++;
        }
        return list;
    }
};
