#include <stdio.h>
#include <stdlib.h>
#include "pola.h"

float pprostokat(float a, float b) {
    return (float) a*b;
}
float pprostopadloscian(float a, float b, float H) {
    float pp=2*pprostokat(a,b);
    float pb=2*pprostokat(a,H) + 2*pprostokat(b,H);
    return pp+pb;
}
