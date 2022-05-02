#include <iostream>
using namespace std;
#define size 10
class stack
{
    int arr[size];
    int top = -1;

public:
    int topl()
    {
        return top;
    }
    bool isfull()
    {
        if (top == size - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int push(int x)
    {
        if (isfull())
        {
            return true;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    int pop()
    {
        int value = -1;
        if (isempty())
        {
            return true;
        }
        else
        {
            value = arr[top];
            top=top-1;
        }
        return value;
    }
};
class queue
{
    int arr[size];
    int f, r, count;

public:
    queue()
    {
        f = -1;
        r = -1;
        count = 0;
    }
    int sizee()
    {
        return count;
    }
    bool isfull()
    {
        if (r == size - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isempty()
    {
        if (r == f)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int enqueue(int x)
    {
        if (isfull())
        {
            return true;
        }
        else
        {
            r++;
            arr[r] = x;
        }
    }
    int dequeue()
    {
        int value = -1;
        if (isempty())
        {
            return true;
        }
        else
        {
            f++;
            value = arr[f];
        }
        return value;
    }
};

int main()
{
    stack s1;
    queue q1;
    int n;
    cout << "enter the total digit in a number " << endl;
    cin >> n;
    int s[6];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    for (int i = 0; i < n; i++)
    {
        s1.push(s[i]);
        q1.enqueue(s[i]);   
    }
    int val=0;
    while(s1.topl()>=0){
    if (s1.pop() != q1.dequeue())
    {
        val=-1;
    }
}
if(val==0){
    cout<<"the number is pallindrome ";
}
else{
    cout<<"the number is not pallindrome";
}
    return 0;
}