/* Structure of a doubly link list node
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int x)
    {
        data = x;
        prev = nullptr;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *rotateDLL(Node *head, int k) {
        
        Node* temp = head;
        int count = 1;
        while(temp && count < k){
            temp = temp->next;
            count++;
        }
        
        if (!temp || !temp->next) {
            return head;
        }
        
        Node* newHead = temp -> next;
        
        temp -> next = NULL;
        newHead -> prev = NULL;
        
        Node* tail = newHead;
        
        while(tail -> next){
            tail = tail -> next;
        }
        
        tail -> next = head;
        head -> prev = tail;
        
        return newHead;
    }
};