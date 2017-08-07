#include <iostream>
#include <cmath>
using namespace std;

class Heap
{
  public:
    Heap()
    : buf (new int [50]), numEnt (0)
    {}
    Heap(int cap)
    : buf (new int[cap]), numEnt (0)
    {}
    Heap(int arr[]);
    ~Heap()
    {
        delete [] buf;
    }
    int remove_min()
    {
        int returnVal = buf[1];
	buf[1] = buf[numEnt];
	int node = 1;
	int min = 0;
	while(true)
	{
	    if(buf[2*node] > buf[(2*node)+1])
	        min = (2*node)+1;
	    else
		min = 2*node;
	    if(buf[node] > buf[min] && min <= numEnt)
	    {
	//	cout << "swap 1" << endl;
	        buf[node] = buf[node] + buf[min];
                buf[min] = buf[node] - buf[min];
		buf[node] = buf[node] - buf[min];
		node = min;	
	    }
	    else
	        break;
	}
	numEnt--;
	return returnVal;
    }
    void insert(int n)
    {
	int pos;
        buf[++numEnt] = n;
	for(pos = numEnt; buf[pos] < buf[pos/2]; pos /= 2)
	{
	    // swap of vals in place
	    buf[pos] = buf[pos] + buf[pos/2];
	    buf[pos/2] = buf[pos] - buf[pos/2];
	    buf[pos] = buf[pos] - buf[pos/2];
	}
    }
    void print()
    {
        for(int i = 1; i <= numEnt; ++i)
	{
	    cout << "i: " << i << " val " << buf[i] << endl;
	}
    }
    void display_structure()
    {
        int n = 1;
        int p = 0;
        int nextTwoPow = pow(2,p);
	for(int i = 1; i <= numEnt; ++i)
	{
	    cout << buf[i] << "\t";
	    if(n == nextTwoPow)
	    {
	        cout << endl;
		n = 0;
		++p;
		nextTwoPow = pow(2,p);
	    }
	    ++n;
	}
	cout << endl;	
    }
  private:
    int * buf;
    int numEnt;
    void make_heap();
    void double_size();
};
