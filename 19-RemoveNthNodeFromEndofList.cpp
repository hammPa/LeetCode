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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* current = head;
        int length = 0;
        while(current){
            length++;
            current = current->next;
        }
        if (length == n) {
            return head->next; // Kembalikan head baru
        }
        current = head;
        for (int i = 1; i < length - n; i++) { // Mencari node sebelum yang akan dihapus
            current = current->next;
        }

        // Hapus node ke-n dari belakang
        current->next = current->next->next;
        return head;
    }
};
