class Heap
{
  public:
    Heap();
    Heap(int arr[]);
    ~Heap();
    int remove_min();
    void insert(int n);
    void print();
  private:
    int * buf;
    int size;
    void make_heap();
    void perc_down(int index);
    void perc_up(int index);
    void double_size();
};
