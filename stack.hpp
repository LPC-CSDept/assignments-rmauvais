class Stack
{
  private:
  int*stackStore;
  int size;
  int currentldx;

  public:
  explicit Stack(int size=10);
  ~Stack();
  void clear();
  void push(int val);
  int pop();
  int top();
  
}