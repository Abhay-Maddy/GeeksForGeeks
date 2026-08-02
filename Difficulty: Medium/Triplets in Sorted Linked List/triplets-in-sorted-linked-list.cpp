/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/
class Solution {
public:
    int countTriplets(Node* head, int x) {
        unordered_map<int, Node*> mp;

        Node* temp = head;
        while (temp) {
            mp[temp->data] = temp;
            temp = temp->next;
        }

        int count = 0;

        for (Node* first = head; first != NULL; first = first->next) {
            for (Node* second = first->next; second != NULL; second = second->next) {

                int need = x - (first->data + second->data);

                if (mp.find(need) != mp.end()) {
                    Node* third = mp[need];

                    // third should come after second
                    if (third != first && third != second) {
                        Node* t = second->next;
                        while (t) {
                            if (t == third) {
                                count++;
                                break;
                            }
                            t = t->next;
                        }
                    }
                }
            }
        }

        return count;
    }
};