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
        if(!list1) return list2;
        if(!list2) return list1;

        ListNode *head = list1, *buffer1, *buffer2;
        while(list1 && list2){
            buffer1 = list1->next;
            buffer2 = list2->next;

            list1->next = list2;
            list2->next = buffer1;

            list1 = buffer1;
            list2 = buffer2;
        }
        return head;
    }
};
