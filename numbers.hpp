class Numbers{
  private:
  int size;
  int *head;
  void swap(int *arr, int i, int j);
  void print();
public:

Numbers();

Numberes(int size);

int getSize();

int getElement(int i);

double getSum();

double getAverage;

void setElement();

void setElement(int index, int value);

void bubbleSort(int type);

void printNumbers(int type);

void clear();
};