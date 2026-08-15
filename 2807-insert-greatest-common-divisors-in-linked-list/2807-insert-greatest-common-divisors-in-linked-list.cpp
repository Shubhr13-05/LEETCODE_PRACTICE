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
    int gcdd(int a, int b) {
        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        if(temp->next == NULL)return temp;
        else{
            ListNode* nextt = temp->next;
            while(nextt!=NULL){
                int gcd = gcdd(temp->val, nextt->val);
                ListNode* gcdNode = new ListNode(gcd);
                gcdNode->next = temp->next;
                temp->next =  gcdNode;
                temp = nextt;
                nextt=nextt->next;
            }
        }
        return head;
    }
};