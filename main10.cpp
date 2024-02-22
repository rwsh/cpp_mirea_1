#include <iostream>

using namespace std;

class TItem {
    private:
    static inline int count{0};
    public:
    TItem() {
        count++;
    }
    
    void hello() {
        cout << "\nI am " << count << "\n";
    }
};

int main()
{
    TItem* A = new TItem();
    A->hello();
    TItem* B = new TItem();
    B->hello();
    TItem* C = new TItem();
    C->hello();

    delete A, B, C;
    
    return 0;
}




