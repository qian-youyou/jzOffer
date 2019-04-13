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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        ListNode* p = pListHead;
        ListNode* q = pListHead;
        unsigned int cnt = 0;
        while(p != NULL){
            if(cnt >= k){
                q = q->next;
            }
            ++cnt;
            p = p->next;
        }
        if(cnt < k){
            return NULL;
        }
        return q;
    }
};
