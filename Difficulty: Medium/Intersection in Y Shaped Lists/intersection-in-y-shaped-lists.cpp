/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/


class Solution {
public:
    Node* intersectPoint(Node* head1, Node* head2) {

        map<Node*, bool> mp;

        Node* temp = head1;

        while (temp) {
            mp[temp] = true;
            temp = temp->next;
        }

        temp = head2;

        while (temp) {
            if (mp[temp]) {
                return temp;
            }
            temp = temp->next;
        }

        return NULL;
    }
};