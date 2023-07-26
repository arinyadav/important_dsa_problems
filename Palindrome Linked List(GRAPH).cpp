class Solution {
public:
     ListNode* reverseList(ListNode* head){
          if(head == NULL || head -> next == NULL) return head;
       
        ListNode* past = NULL;
        ListNode* present = head;
        ListNode* future = head -> next;
       
        while(future != NULL) {
            present -> next = past;
            past = present;
            present = future;
            future = future -> next;
        }

        present -> next = past; // again one more time
        return present;
     }

    bool isPalindrome(ListNode* head) {     
        if(head == NULL || head->next == NULL)
        return true;
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }

        fast = head;
        slow = reverseList(slow->next);

        while(slow != NULL){
            if(fast->val != slow->val)
                return false;

            fast = fast->next;
            slow = slow->next;
        }

        return true;
    
    }
};
