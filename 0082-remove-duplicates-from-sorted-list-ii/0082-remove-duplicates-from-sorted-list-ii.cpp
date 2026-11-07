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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return NULL;

        // Remove duplicates from head
        while (head != NULL &&
               head->next != NULL &&
               head->val == head->next->val) {

            int x = head->val;

            while (head != NULL && head->val == x) {
                head = head->next;
            }
        }

        if (head == NULL) return NULL;

        ListNode* temp = head;

        while (temp != NULL && temp->next != NULL) {

            if (temp->next->next != NULL &&
                temp->next->val == temp->next->next->val) {

                int x = temp->next->val;

                while (temp->next != NULL &&
                       temp->next->val == x) {
                    temp->next = temp->next->next;
                }
            }
            else {
                temp = temp->next;
            }
        }

        return head;
    }
};

   