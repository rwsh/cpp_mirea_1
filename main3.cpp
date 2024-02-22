#include <iostream>

using namespace std;

class TPoint {
    private:
    int x, y;
    public:
    TPoint(int ax, int ay) {
        x = ax;
        y = ay;
    }
    TPoint () {
        x = 0;
        y = 0;
    }
    
    void print() {
        cout << "(" << x << ", " << y << ")";
    }
};

int main()
{
    TPoint* A = new TPoint();
    A->print();

    return 0;
}




