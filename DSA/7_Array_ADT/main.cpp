#include <iostream>

using namespace std;
class Arr
{
    int []A;
    int siz;
    int length;
    void swap(int *x , int *y)
    {
        int temp;
        temp=x;
        x=y;
        y=temp;
    }
public:
    Arr()
    {
        siz = 10;
        length=0;
        A = new int [siz];
    }
    Arr(int sz)
    {
        siz = sz;
        length=0;
        A = new int [siz];
    }
    ~Arr()
    {
        delete []A;
    }
    void  Arr::Display();
    void  Arr::Append(int x);
    void  Arr::Insert(int index,int x);
    int  Arr::Delete(int index);
    int  Arr::LinearSearch(int key);
    int  Arr::BinarySearch(int key);
    int  Arr::Get(int index);
    void  Arr::Set(int index,int x);
    int  Arr::Max();
    int  Arr::Min();
    int  Arr::Sum();
    float  Arr::Avg();
    void  Arr::Reverse();
    void  Arr::Reverse2();
    void  Arr::InsertSort(int x);
    int  Arr::isSorted();
    void  Arr::Rearrange();
    Arr*  Arr::Merge(Arr arr2);
    Arr*  Arr::Union(Arr arr2);
    Arr*  Arr::Diff(Arr arr2);
    Arr*  Arr::Inter(Arr arr2);

};
    void Arr::Display();
    {
        for(int i=0;i<length;i++)
        {
            cout<<A[i];
        }
    }
    void  Arr::Append(int x);
    {
        for(int i=0;i<length;i++)
        {
            A[length++]=x;
        }
    }
    void Array::Insert(int index,int x)
    {
        for(int i=length;i<index;i--)
        {
            A[i]=A[i-1];
        }
        A[index]=x;
        length++;

    }
    int Array::Delete(int index)
    {
        for(int i=index;i<length;i++)
        {
            A[i]=A[i+1];
        }
        length--;
    }


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
