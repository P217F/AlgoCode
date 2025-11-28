struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return nullptr;

        ListNode node(0);
        ListNode* tmp = &node;
        tmp->next = new ListNode(head->val);
        tmp = tmp->next;
        head = head->next;
        while(head != nullptr) {
            if(head->val != tmp->val) {
                tmp->next = new ListNode(head->val);
                tmp = tmp->next;
            }
            head = head->next;
        }
        return node.next;
    }
};
