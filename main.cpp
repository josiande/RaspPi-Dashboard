#include <iostream>    
#include <vector>
#include <string>
#include <chrono>
#include <ctime>
#include <stdlib.h>

//local includes
#include "inc/version.h"

using namespace std;

int main()
{
    vector<string> version_string { "v", to_string(VERSION_MAJOR), 
                                    ".", to_string(VERSION_MINOR), 
                                    ".", to_string(VERSION_BUILD)};

    cout << "TERMINAL" << endl;
    cout << "created by: Josiah Anderson" << endl;
    cout << "created on: 8/5/22" << endl;

    for (const string& item : version_string)
    {
        cout << item;
    }
    cout << endl;
    _sleep(3000);

    auto start = chrono::system_clock::now();
    time_t start_time = chrono::system_clock::to_time_t(start);

    for (;;)
    {
        system("CLS");
        start = chrono::system_clock::now();
        start_time = chrono::system_clock::to_time_t(start);
        cout << ctime(&start_time);
        _sleep(1000);
    }
    
    
}
