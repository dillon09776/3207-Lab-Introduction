#include <stdio.h>
#include <stdlib.h>
#include "random.h"

char randchar() {

    return 'A' + (random() % 26);

}