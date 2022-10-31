void StackQueue :: push(int x)
{
    s1.push(x);
    return ;
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        if(s1.empty() && s2.empty())
        return -1;
        
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int ele=s2.top();
        s2.pop();
        return ele;
}
