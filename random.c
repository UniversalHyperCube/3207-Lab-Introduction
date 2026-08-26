#include "random.h"
#include <stdlib.h>

char randchar() {
    char randChar = rand() % 27 + 65;

    return randChar;
}