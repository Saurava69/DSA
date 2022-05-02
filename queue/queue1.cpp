#include<iostream>
using namespace std;
class int_queue
{
    private:
        int s[5];
        int front,rare,count,capacity;
    public:
        int_queue()
        {
            front=-1;
            rare=-1;
            count=0;
            capacity=5;
        }
    int size()
        {
            return count;
        }
    bool isEmpty()
    {
        return (count==0);
    }
    bool isFull()
    {
        return (size()==capacity);
    }
    bool enqueue(int v)
    {
        if(isFull())
        {
            return false;
        }
        else
        {
            if(isEmpty())
            {
                front=0; rare=0;
            }
            else
            {
                rare=(rare+1)%capacity;
            }
            s[rare]=v;
            count++;
            return true;
        }
    }
    int dequeue()
    {
        int v=s[front];
        if(size()==1)
        {
            front=-1;rare=-1;
        }
        else
        front=(front+1)%capacity;

        count--;
        return v;
    }
    void display()
    {
        for(int i=0;i<size();i++)
        cout<<s[i]<<endl;
    }
};
int main(){
    int_queue q1;
    q1.enqueue(5);
    q1.enqueue(10);
    q1.enqueue(15);
    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
     return 0;
}