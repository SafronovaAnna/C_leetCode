
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    int middle = count / 2;

    struct ListNode* middleNode = head;
    int iterate = 0;
    while (iterate != middle) {
        middleNode = middleNode->next;
        iterate++;
    }

    return middleNode;
}