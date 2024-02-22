#include <iostream>
#include <cmath>

using namespace std;

class TPoint {
    friend void norm(TPoint* P);
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

void norm(TPoint* P){
    cout << "\n" << sqrt(P->x*P->x + P->y*P->y) << "\n";
}

int main()
{
    TPoint* A = new TPoint(3, 4);
    A->print();
    norm(A);
    delete A;
    
    return 0;
}



