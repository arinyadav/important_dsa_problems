void MyQueue :: push(int x)
{
        // Your Code
       
        arr[rear]=x;
        rear++;
     
}


int MyQueue :: pop()
{
        // Your Code 
        int x;
        if(front==rear)
        return -1;
        else{
        x=arr[front];
        front++;
      
        }
        return x;
        
}
