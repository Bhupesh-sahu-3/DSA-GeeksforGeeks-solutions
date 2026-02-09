//Method1
//using stack
//time:o(n + 2*log(n))
//space:o(number of nodes in linked list)
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


//Method2
//using tortoise and hare algo
//time: o(n +length of loop) 
//space: o(1)
class Solution {
  public:
    int lengthOfLoop(Node *head) {
        if(!head || !head->next) return NULL;
        Node* slow = head;
        Node* fast = head;
        int count=1;
        while(fast!=NULL && fast->next!=NULL) o(n)
        {
            slow=slow->next;
            fast = fast->next->next;
            if(slow==fast)
            {
                fast=fast->next;
                while(slow!=fast)   //o(length of loop)
                {
                    count++;
                    fast=fast->next;
                }
                return count;
            }
    
        }
        return 0;
        
    }
};