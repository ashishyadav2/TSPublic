#include<iostream>
using namespace std;

class String {
    private:
    char str[100];

    public:
    void getData() {
        for(int i=0;i<100;i++){
            cin>>str[i];
        }
    }
    void putData() {
        for(int i=0;i<100;i++){
            cout<<str[i];
        }
    }
};
int main() {
    String s;
    s.getData();
    s.putData();
    return 0;
}