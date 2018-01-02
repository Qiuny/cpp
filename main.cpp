#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    for(int i = 0; i < argc; i++) {
        std::cout<<argv[i]<<std::endl;
    }

    char *cp = "hello";
    cout << cp << endl;
    cout << *cp << endl;
    cout << *(cp + 1) << endl;
    cout << (*cp) + 1 << endl;

    // char *a = new(std::nothrow)char[2];


    return 0;
}

