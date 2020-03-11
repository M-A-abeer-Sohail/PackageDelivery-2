#include "box.hpp"
#include <stdlib.h>

Box::Box(int a, int b)
{
    length = rand() % (31 - 5) + 5;
    breadth = rand() % (31 - 5) + 5;
    height = rand() % (31 - 5) + 5;
}