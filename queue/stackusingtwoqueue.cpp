#include<iostream>
using namespace std;
class queue
{
	private:
        int q[5];
        int front,rare,count,capacity;
    public:
        queue()
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
            q[rare]=v;
            count++;
            return true;
        }
    }
    int dequeue()
    {
        int v=q[rare];
        if(size()==1)
        {
            front=-1;rare=-1;
        }
        else
        {
        rare--;if(rare<0) rare=capacity-1;
        }
        count--;
        return v;
    }
		
};
class stack
{
	public:
	queue q1,q2;
    
	void push(int v)
	{
        if(!q1.isEmpty())
        {
            q1.enqueue(v);
        }
        else
        {
	q2.enqueue(v);
	int i=q1.size();
	while(i>0)
	{
		q2.enqueue(q1.dequeue());
		i--;
	}	
		int j=q2.size();
		while(j>0)
		{
			q1.enqueue(q2.dequeue());
			j--;
		}
        }
	}
	int pop()
	{
	        return q1.dequeue();
	}
		
	};
	int main()
	{
		stack s1;
        queue q1,q2;
		s1.push(1);
		s1.push(2);
		s1.push(34);
		s1.push(14);
        cout<<s1.pop()<<endl;
        cout<<s1.pop()<<endl;
        cout<<s1.pop()<<endl;
        cout<<s1.pop()<<endl;
    
	//	s1.display();
		return 0;
	}