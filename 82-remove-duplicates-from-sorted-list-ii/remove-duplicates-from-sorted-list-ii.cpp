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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return head;
        ListNode* temp = head;
        // unordered_
        map<int, int>mpp;
        while(temp!=NULL){
            mpp[temp->val]++;
            temp = temp->next;
        }
        ListNode* newNode = new ListNode(-1);
        ListNode* mover = newNode;    
        for(auto x:mpp){
            if(x.second==1){
                ListNode* curr = new ListNode(x.first);
                mover->next = curr;
                mover = curr;
            }
        }
        return (newNode->next);
        // return reverse(newNode->next);
    }
};



// class Solution {
// public:
//     ListNode* reverse(ListNode* head){
//         if(head==NULL)return head;
//         ListNode* curr = head;
//         ListNode* prev = NULL;
//         while(curr!=NULL){
//             ListNode* temp = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr= temp;
//         }
//         return prev;
//     }
//     ListNode* deleteDuplicates(ListNode* head) {
//         ListNode* temp = head;
//         stack<int>s;
//         while(temp!=NULL){
//             // temp = temp->next;
//             if(!s.empty()){
//                 if(s.top()==temp->val){
//                     s.pop();
//                     temp = temp->next;
//                     // break;
//                     continue;
//                 }
//                 // temp = temp->next;
//             }
//             s.push(temp->val);
//             temp = temp->next;
//         }

//         ListNode* tail = new ListNode(-1);
//         ListNode* l2 = tail;
//         while(!s.empty()){
//             l2->next = new ListNode(s.top());
//             l2 = l2->next;
//             s.pop();
//         }
//         // return reverse(l2);
//         return reverse(tail->next);
//     }
// };