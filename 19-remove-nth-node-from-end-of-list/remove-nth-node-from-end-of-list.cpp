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
    ListNode* pri = head;
    ListNode* sec = head;

    while (n-- > 0)
      sec = sec->next;
    if (sec == nullptr)
      return head->next;

    while (sec->next != nullptr) {
      pri = pri->next;
      sec = sec->next;
    }
    pri->next = pri->next->next;

    return head;
        
    }
};