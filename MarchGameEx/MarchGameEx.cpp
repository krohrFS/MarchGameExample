#include <iostream>
#include <string>
#include <vector> 

// include our own files

#include "GameEngine.cpp"


// enum
enum Options
{
    FIGHT = 1,
    HEAL, // 2
    EXIT // 3
};

void Line()
{
    std::cout << "================================" << std::endl;
}

// Character code moved from GameEngine - it is never a good idea to put code out in global space - only reason we're doing it here is to see
// if values are retained as we are restricted with the content of days 1-6 so far, day 7 makes this much easier






// methods









// Our goal is to have as little code in the actual main method as possible for the rest of the month
// that way our code can stay organized in methods and eventually classes - and the goal them is to keep as slim as possible so we don't
// bloat of file size

int main()
{
    GameEngine engine;
    std::cout << "we're going to roll back from here" << std::endl;
    std::cout << "another attempt" << std::endl;
    
}

