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
    bool check(ListNode *a, ListNode *b){
        if(a == NULL || b == NULL){
            if(a != NULL){
                return true;
            }else{
                return false;
            }
        }
        return a->val < b->val;
    }
    void fun(ListNode* &p, ListNode* &pHead){
        ListNode* tmp = pHead;
        pHead = pHead->next;
        p->next = tmp;
        p = p->next;
    }
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode* pHead = NULL;
        ListNode* p = pHead;
        while(pHead1 != NULL || pHead2 != NULL){
            if(check(pHead1, pHead2)){
                if(!pHead){
                    pHead = pHead1;
                    p = pHead;
                }
                else{
                    fun(p, pHead1);
                }
            }
            else{
                if(!pHead){
                    pHead = pHead2;
                    p = pHead;
                }
                else{
                    fun(p, pHead2);
                }
            }
        }
        return pHead;
    }
};
