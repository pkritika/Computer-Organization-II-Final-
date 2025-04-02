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
    double totalTime;
    int32_t dummyValue = 5;
    int32_t res = 0;

    auto start = chrono::high_resolution_clock::now();

    for(register int i = 1; i <= 100000; i++){
        for (register int j = 1; j <= 100000; j++){
            res = dummyValue + dummyValue;
        }

    }    
