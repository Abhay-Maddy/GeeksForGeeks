/*
class Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

// logic is relative currect but you miss something more imporatant now now know 
//because of the gpt so you try after some time
class Solution {
  public:
    Node* deleteNode(Node* head, int key) {
        
        if (head == NULL)
            return NULL;
        
        if (head->data == key && head->next == head) {
            delete head;
            return NULL;
        }
        
        if(head -> data == key){
            Node* last = head;
            while(last -> next != head){
                last = last -> next;
            }
            
            Node* del = head;
            head = head -> next;
            last -> next = head;
            
            delete(del);
            return head;
        }
        
        Node* temp = head;
        Node* prev = NULL;
        while(temp -> next != head){
            if(temp -> data == key){
                Node* del = prev -> next;
                prev -> next = temp -> next;
                delete(del);
                break;
            }
            prev = temp;
            temp = temp -> next;
        }
        
        if(temp -> data == key){
            prev -> next = head;
            delete(temp);
        }
        return head;
    }
};