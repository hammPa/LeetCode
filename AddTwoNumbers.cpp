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
        ListNode* result = new ListNode();
        ListNode *num1 = l1, *num2 = l2, *current = result;
        int carry = 0;

        while(num1 != nullptr || num2 != nullptr || carry != 0) {
            int x = (num1 != nullptr) ? num1->val : 0;
            int y = (num2 != nullptr) ? num2->val : 0;
            int sum = x + y + carry;
        
            carry = sum / 10; 
            current->next = new ListNode(sum % 10);
            current = current->next;

            if(num1 != nullptr) num1 = num1->next;
            if(num2 != nullptr) num2 = num2->next;
        }
        return result->next;
    }
};
