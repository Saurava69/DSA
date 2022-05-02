#include<iostream>
#include<deque>
using namespace std;
// struct Myds{
// deque<int>dq;
// void insertMin(int x)
//     {dq.push_front(x);}
// void insertMax(int x)
// {
//     dq.push_back(x);
// }
// int getMin()
// {
//     return dq.front();
// }
// int getMax()
// {
//     return dq.back();
// }
// int extrackMin()
// {
//    dq.pop_front();
//     return dq.front();
    
// }
// int extrackMax()
// {
//      dq.pop_back();
//     return dq.back();

// }
// int size1()
// {
//     return dq.size();
// }
// };
// Maximumum in all  subarreys of size k
//No of subarrey with k elements together  in a order is n-k-1
// Naive solution 
// void printMax(int arr[],int n,int k)
// {
//     for(int i=0;i<n-k-1;i++)
//     {
//         int mx=arr[i];
//         for(int j=i+1;j<i+k;j++)
//                 mx=max(arr[j],mx);
//     cout<<mx<<" ";
//     }
// }
void printMax(int arr[],int n,int k)
{
    deque<int>dq;            
    for(int i=0;i<k;i++)
    {
        while(!dq.empty()&&arr[i]>=arr[dq.back()])
                dq.pop_back();
        dq.push_back(i);
    }
    for(int i=k;i<n;i++)
    {
        cout<<arr[dq.front()]<<" ";
        while(!dq.empty()&&dq.front()<=i-k)
            dq.pop_front();
        while (!dq.empty()&&arr[i]>=arr[dq.back()])
        {
            dq.pop_back();
        }         
        dq.pop_back();
        
    }
    cout<<arr[dq.front()]<<" ";
}

int main()
{
    // deque<int>dq={10,20,30};
    // dq.push_front(5);
    // dq.push_back(50);
    // for(auto x:dq)  //traversal
    //     cout<<x<<" ";

    // cout<<endl;
    // cout<<dq.front()<<" "<<dq.back();
    // deque<int>dq={10,12,34,5,12};
    // auto it=dq.begin();it++;
    // dq.insert(it,20); //insert before iterator
    // dq.pop_front();
    // dq.pop_back();
    // cout<<dq.size(); 
    //  DS With MIN/MAX operations
//     Myds s1;
//     s1.insertMin(56);
//     s1.insertMax(89);
//     s1.insertMin(34);
//    cout<< s1.extrackMax();
//    cout<< s1.extrackMax();
//     cout<<s1.size1();     

    return 0;
    }
