class Solution {
public:
    Node* deleteNode(Node* head, int x) {
        // If the linked list is empty or position is invalid
        if (head == NULL || x <= 0) {
            return head;
        }
        
        Node* current = head;
        
        // If the node to be deleted is the head node
        if (x == 1) {
            head = head->next;
            if (head != NULL) {
                head->prev = NULL;
            }
            delete current;
            return head;
        }
        
        // Traverse the list to find the node at position x
        for (int i = 1; current != NULL && i < x; ++i) {
            current = current->next;
        }
        
        // If position is more than the number of nodes
        if (current == NULL) {
            return head;
        }
        
        // Delete the node
        if (current->next != NULL) {
            current->next->prev = current->prev;
        }
        
        if (current->prev != NULL) {
            current->prev->next = current->next;
        }
        
        delete current;
        
        return head;
    }
};
