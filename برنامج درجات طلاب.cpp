#include<iostream>
using namespace std;
class students {
private:
  int a;
  int b;
  int c;
  public:
  students (int x,int y, int z)
  {
  a=x;
  b=y;
  c=z;
  }
  void avg()
  {
  int total =a+b+c;
  int average =total/3;
  cout << "the average is=" << average;
  
  }
};
 int main()
 {
 students opj1(50,60,80);
 opj1.avg();
 }
















