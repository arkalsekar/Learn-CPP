#include <iostream> 
using namespace std;

class Main {
    public: 
        int data;

    public: 
        int getData () {
            return this->data;
        }

        void setData (int n) {
            this->data = n;
        }

};

int main () {
    cout << "Hello World " << endl;
    Main m = Main();
    m.setData(10);
    m.getData();
    return 0;
}