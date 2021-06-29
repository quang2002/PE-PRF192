#include <string.h>

void delete (void *arr, int *n, int size, int pos)
{
    memcpy(arr + pos, arr + pos + 1, size * (*n - pos));
    (*n)--;
}