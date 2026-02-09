//Method1
//using stack
//time:o(n + 2*log(n))
//space:
class Solution {
  public:
    int lengthOfLoop(Node *head) {
        if(!head || !head->next) return NULL;
        map<Node*,int>mpp;   //ordered map
        Node* temp = head;
        int count=1;
        while(temp)
        {
            if(mpp.find(temp)!=mpp.end()) //find function o(log n)
            {
                return count-mpp[temp];
            }
            mpp[temp]=count;  //insertion o(log n)
            count++;
            temp=temp->next;
        }
        
        return 0;
        
        
    }
};
