/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        RandomListNode *pHead2 = pHead, *p2, *tmp = pHead;
        while(tmp){
            p2 = new RandomListNode(tmp->label);
            p2->next = tmp->next;
            tmp->next = p2;
            tmp = p2->next;
        }
        if(pHead){
            pHead2 = pHead->next;
        }
        tmp = pHead;
        while(tmp){
            if(tmp->random){
                tmp->next->random = tmp->random->next;
            }
            tmp = tmp->next->next;
        }
        tmp = pHead;
        p2 = pHead2;
        while(tmp){
            tmp->next = tmp->next->next;
            tmp = tmp->next;
            if(p2->next){
                p2->next = p2->next->next;
                p2 = p2->next;
            }
        }
        return pHead2;
    }
};
