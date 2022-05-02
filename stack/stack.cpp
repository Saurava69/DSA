#include<bits/stdc++.h>
using namespace std;

class MyStack1
{
    private:
    int *arr;
    int cap;
    int top;
    public:
    MyStack1(int c)
    {
        cap=c;
        arr=new int[cap];
        top=-1;
    }
    void push(int x){
        if(top==cap-1)
        {
            cout<<"-1";
            cout<<endl;
        }
        else
        {
            top++;
            arr[top]=x;
        }
    }
    int pop()
    {
        if(top==-1)
        {
            return -1;
        }
        else{
            int res=arr[top];
            top--;
            return res;
        }
    }
    int peek()
    {
        if(top==-1){
            return -1;
        }
        else
        return arr[top];
    }
    int size()
    {
        return (top+1);
    }
    bool empty()
    {
        return (top==-1);
    }
    bool full()
    {
        return (top==cap-1);
    }
};
int main()
{
    MyStack1 s1(5);

    s1.push(10);
    s1.push(20);
    s1.push(40);
    
    cout<<s1.pop()<<endl;
    cout<<s1.peek()<<endl;


    return 0;
}