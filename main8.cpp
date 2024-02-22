#include <iostream>

using namespace std;

class TPoint {
    private:
    int x, y;
    public:
    TPoint(int x, int y) {
        this->x = x;
        this->y = y;
    }
    
    void print() {
        cout << "(" << x << ", " << y << ")";
    }
};

int main()
{
    TPoint* A = new TPoint(3, 5);
    A->print();
    delete A;
    
    return 0;
}

