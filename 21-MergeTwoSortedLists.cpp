class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);  // Dummy node sebagai awal list
        ListNode* tail = &dummy;
        
        while (list1 && list2) {
            if (list1->val < list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        
        // Jika masih ada node yang tersisa, sambungkan ke hasil akhir
        tail->next = list1 ? list1 : list2;
        
        return dummy.next;
    }
};
