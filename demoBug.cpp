#include <iostream>
#include <vector>
#include <string_view>
#include <string>

using namespace std;

auto getString() {
    string str = "Test Message";
    string_view sv(str);
    return sv;
}

int main() {
    
    cout << getString() << endl;

    return EXIT_SUCCESS;
}