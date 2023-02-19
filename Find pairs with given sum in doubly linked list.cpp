class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
          vector<pair<int,int>>v;
        Node* tail =head;
        while(tail->next != NULL)
        {
            tail=tail->next;
        }
        while(head->data < tail->data)
        {
            int x = head->data;
            int y = tail->data;
            int sum = x+y;
            if(sum > target)
              tail = tail->prev;
            else if(sum == target)
            {
                v.push_back({x,y});;
                tail = tail->prev;
                head = head->next;
            }else
              head = head->next;
        }
        return v;
    
    }
};
