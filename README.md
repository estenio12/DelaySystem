# DelaySystem
A simple delay system expired by the unreal engine 4 delay system for C++ games.

# License
Licensed under MIT.

# How to use

This feature doesn't stop the thread to hold the delay counter, so the best way to use it is by looping it inside a condition.

Exemple:

```c++
#include <iostream>
#include "./DelaySystem.hpp"

void print(char target)
{
    std::cout << target << '\n';
}

int main()
{
    DelaySystem* delay = new DelaySystem();
    std::string text = "Hello world!";
    int counter = 0;

    while(true)
    {
        if(text[counter] == '\0') break;

        if(delay->Delay(50000.f))
        {
            print(text[counter]);
            counter++;
        }
    }

    return EXIT_SUCCESS;
}
    
```
