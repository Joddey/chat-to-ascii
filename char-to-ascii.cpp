#include <iostream>
using namespace std;

int main() {
    char character;
    cout << "Enter one or more characters:\n";
    
    while (cin >> character && character != '#') {
        int asciiCode = character;
        cout << "ASCII code of the entered character: " << asciiCode << endl;
    }
    
    return 0;
}
