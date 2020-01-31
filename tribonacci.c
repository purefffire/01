#include <stdlib.h>

size_t sig_length = 3;
long long *tribonacci(const long long signature[sig_length], size_t n) {
    long long *element = calloc(n,sizeof(long long));
    for (size_t i = 0; i < sig_length; ++i){ element[i] = signature[i]; }
    for (size_t i = sig_length; i < n; ++i) {
        element[i] += element[i - 1] + element[i - 2] + element[i - 3];
    }
   if (n != 0){return element;} else { return NULL;} 
}
