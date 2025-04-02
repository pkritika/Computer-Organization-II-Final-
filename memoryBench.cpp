#include <iostream>
#include <string>
#include <cstdint>
#include <chrono>

using namespace std;

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"


int main() {
    int32_t* myArr = new int32_t[5000000000];
    int32_t dummyReadValue = 0;
    double totalTime;
    
    auto start = chrono::high_resolution_clock::now();

    for(long long int i = 1; i <= 5000000000; i++){
            myArr[i-1] = i;
    }

    for(long long int i = 1; i <= 5000000000; i++){
        dummyReadValue = myArr[i-1];
}

auto end = chrono::high_resolution_clock::now();
auto diff = chrono::duration_cast<std::chrono::duration<double> >(end - start);
totalTime = diff.count();
cout << ANSI_COLOR_YELLOW << "Benchmark 3:" << endl << ANSI_COLOR_RESET;
cout << ANSI_COLOR_GREEN << "Memory benchmark" << endl << ANSI_COLOR_RESET;
cout << ANSI_COLOR_RED << "Which includes reading from, and writing to array, 4 bytes each time' is: " << totalTime << " seconds" << ANSI_COLOR_RESET << endl;

delete[] myArr;

return 0;
}
