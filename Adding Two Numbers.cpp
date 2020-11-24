class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode ans(0), *temp = &ans; // having an initial node initialzed to any value (here 0) and next ptr = NULL
        int sum=0,carry=0;
        while(l1 || l2 || carry){
            sum = (l1?l1->val:0) + (l2?l2->val:0) + carry;
            temp->next = new ListNode(sum%10);
            carry = sum/10;
            temp = temp->next;
            l1 = l1?l1->next:l1;
            l2 = l2?l2->next:l2;
        }
        return ans.next;
    }
};
