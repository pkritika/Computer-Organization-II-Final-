#include <iostream>
#include <string>
#include <cstdint>
#include <chrono>
#include <cstring>
#include <fstream>

using namespace std;


// ANSI escape codes for colors
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {

    ofstream outputFileHandler("dummyOneBillionBytes.txt");
    long long int totalFileSize = 1000000000;
    int oneTimeSize = 10000;
    long long int bytesWrittenSoFar = 0;
    double totalTime = 0;

    auto start = chrono::high_resolution_clock::now();

    char outputBuffer[oneTimeSize];
    memset(outputBuffer, 'A', oneTimeSize);


    //Read a whole file of 10^9 bytes, 100 bytes each time
    while(bytesWrittenSoFar < totalFileSize){
        outputFileHandler << string(outputBuffer);
        bytesWrittenSoFar = bytesWrittenSoFar + oneTimeSize;
    }

    outputFileHandler.close();

    //Write 10^9 bytes to a file, 100 bytes each time
    ifstream inputFileHandler("dummyOneBillionBytes.txt");
    char inputBuffer[oneTimeSize];

    while(!inputFileHandler.eof()){
        inputFileHandler.read(inputBuffer, oneTimeSize);

    }

    inputFileHandler.close();

    auto end = chrono::high_resolution_clock::now();
    auto diff = chrono::duration_cast<std::chrono::duration<double> >(end - start);
    totalTime = diff.count();

    // Print benchmarking data in different colors
    cout << ANSI_COLOR_YELLOW << "Benchmark 5:" << endl << ANSI_COLOR_RESET;
    cout << ANSI_COLOR_GREEN << "Hard Drive benchmark 2" << endl << ANSI_COLOR_RESET;
    cout << ANSI_COLOR_RED << "Which includes reading from, and writing to file, 10000 bytes each time' is: " << totalTime << " seconds" << ANSI_COLOR_RESET << endl;

    return 0;
}