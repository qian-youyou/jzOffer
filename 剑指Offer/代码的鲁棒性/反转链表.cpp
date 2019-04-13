/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* p = NULL;
        ListNode* q = pHead;
        while(q){
            pHead = q;
            q = q->next;
            pHead->next = p;
            p = pHead;
        }
        return pHead;
    }
};
