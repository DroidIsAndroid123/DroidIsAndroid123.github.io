#include <iostream>
#include <limits>

int main() {
    int count = 1;
    int lastValue = 0;

    while (count < std::numeric_limits<int>::max()) {
        lastValue = count;
        count++;
    }

    std::cout << "Last Count: " << lastValue << std::endl;

    return 0;
}
fixing emergency
#changed again
#und again
asdf

