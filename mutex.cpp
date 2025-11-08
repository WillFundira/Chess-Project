#include <iostream>
#include <memory>
#include <mutex>

using namespace std;

int SomeFunc(int val) {
    return val;
}

int main () {

    int numHouses = {5};

    int result = SomeFunc(6);

    cout<< "The resutt of the operation is the fact that " << result << "end of the story\n"<< endl;

    return 0;
}