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
    ListNode* fun(ListNode* &pHead, ListNode* p){
        ListNode* q = pHead;
        while(p != NULL){
            p = p->next;
            q = q->next;
        }
        return q;
    }
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        ListNode* p1 = pHead1;
        ListNode* p2 = pHead2;
        while(p1 != NULL && p2 != NULL){
            if(p1 == p2){
                return p1;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        if(p1 == NULL && p2 == NULL){
            return NULL;
        }else{
            if(p1 != NULL){
                p1 = fun(pHead1, p1);
                p2 = pHead2;
            }else{
                p2 = fun(pHead2, p2);
                p1 = pHead1;
            }
        }
        return FindFirstCommonNode(p1, p2);
    }
};
