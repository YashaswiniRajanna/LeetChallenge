/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* newi=head;
        vector<int> res;
        while(newi!=NULL){
            res.push_back(newi->val);
            newi=newi->next;
        }
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        int i=0,j=1;
        if(res.size()>1){
            while(j<res.size()){
            int temp=res[i];
            res[i]=res[j];
            res[j]=temp;
              i+=2;
              j+=2;
        }
        }
      for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        if(res.size()>1){
        ListNode* du=new ListNode(res[0]);
        ListNode* duu=du;
        int k=1;
        while(k<res.size()){
            duu->next = new ListNode(res[k++]);
            duu=duu->next;
        }
        return du;
        }
        else{
            return head;
        }
    }
};