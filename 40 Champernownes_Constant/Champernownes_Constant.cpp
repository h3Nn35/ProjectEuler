#include <iostream>
#include <string>

using namespace std;

int main() {
    int result = 1;
    string constant = "0.";
    for (int i = 1; i < 1000000; i++)
        constant.append(to_string(i));
    for (int x = 1; x <= 1000000; x *= 10){
        string temp = constant.substr(x + 1, 1);
        result *= stoi(temp);
    }
    cout << result << endl;
    return EXIT_SUCCESS;
}
