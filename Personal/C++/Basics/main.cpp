// program to print multiplication table of number
#include <iostream>
using namespace std;

class square {
    public:
    void squareNum(int num) {
        for(int i=1;i<=10;i++) {
            cout<<num<<" x "<<i<<" = "<<num*i<<"\n";
        }
    }
};

int main() {
    int num;
    printf("Enter number: ");
    cin>>num;
    square sq;
    sq.squareNum(num);
  return 0;
}