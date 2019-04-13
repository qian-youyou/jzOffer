/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        ListNode* pFast = pHead;
        ListNode* pSlow = pHead;
        do{
            if(pSlow && pSlow->next){
                pSlow = pSlow->next;
            }else{
                return NULL;
            }
            if(pFast && pFast->next && pFast->next->next){
                pFast = pFast->next->next;
            }else{
                return NULL;
            }
        }while(pFast != pSlow);
        pFast = pHead;
        while(pFast != pSlow){
            pFast = pFast->next;
            pSlow = pSlow->next;
        }
        return pSlow;
    }
};
