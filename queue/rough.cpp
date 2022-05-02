#include <iostream>
using namespace std;
#define SIZE 100
class int_stack{
int tack[SIZE], top = -1; 
public:
void push(int value){
   if(top == SIZE-1)
      cout<<"\nStack is Full!!! Insertion is not possible!!!";
   else{
      top++;
      tack[top] = value;
   }
}
int pop(){
   if(top == -1)
     cout<<"\nStack is Empty!!! Deletion is not possible!!!";
   else{
      top--;
   }
}
bool empty(){
    if(top==-1)
        return true;
    return false;
}
bool isFull(){
    if(top>=SIZE-1)
        return true;
    return false;
}
int isSize(){
    return top+1;
}
int top1(){
    return tack[top];
}
};
struct Queue {
	int_stack s1, s2;

	void enQueue(int x)
	{
		
		while (!s1.empty()) {
			s2.push(s1.top1());
			s1.pop();
		}
		s1.push(x);
		while (!s2.empty()) {
			s1.push(s2.top1());
			s2.pop();
		}
	}
	int deQueue()
	{
		if (s1.empty()) {
			cout << "Q is Empty";
			exit(0);
		}
		int x = s1.top1();
		s1.pop();
		return x;
	}
};
int main()
{ int_stack s1,s2;
	Queue q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);

	cout << q.deQueue() << '\n';
	cout << q.deQueue() << '\n';
	cout << q.deQueue() << '\n';

	return 0;
}
