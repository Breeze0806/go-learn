#include <stdio.h>
#include <stdlib.h>
#include "join.h"

int main() {
    char *s1 = "hello";
    char *s2 = "world";
    char *js = Join(s1,s2);
    puts(js);
    free(js);
}