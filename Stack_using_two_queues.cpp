void QueueStack :: push(int x)
{
        // Your Cod
        while(q1.size())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(q2.size())
        {
            q1.push(q2.front());
            q2.pop();
        }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        //push everything from stack 1 to satck 2 and then empty stack 2 return it
        if(q1.empty())
        return -1;
        
        int ans=q1.front();
        q1.pop();
        return ans;
}
