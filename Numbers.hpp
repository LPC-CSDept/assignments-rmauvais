class Numbers {

private:
int size;
int* numbers;

public:
  Numbers();
  Numbers(int s);
  Numbers(const Numbers& n);

  ~Numbers();
}