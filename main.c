#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[1000];

       int i, x, pos;

    int* pa = a;

    for(i = 0; i <= 1000; i++)
    {
        if(i==500){
            continue;
        }
        printf("a[%d] \n",i);
        pa++;
    x = 500; // element to be inserted
    pos = 500;     // position at which element is to be inserted
    for (i = 1000; i >= pos; i--)    // shift elements forward
        a[i] = a[i - 1];
    a[pos - 1] = x;     // insert x at pos
    for (i = 0; i <= 1000; i++)     // print the updated array
        printf("%d ", a[i]);
    printf("\n");

    return 0;
    }
}
