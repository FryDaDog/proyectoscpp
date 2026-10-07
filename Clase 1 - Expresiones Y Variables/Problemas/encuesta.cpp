#include <iostream>
using namespace std;

int main() {
    int A;
    int B;
    cin >> A >> B;
    
    int result = ((A - B) * 100) / (A + B);
    cout << result << endl;
}