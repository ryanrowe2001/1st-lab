#include <stdio.h>

int main(){
   float x;
   float y;
    printf("Enter an number: ");
    scanf("%f", &x); // Note change of %d to %f // complete the y = line below
    y = x+2/x-1;
    printf("y: %f\n",y);
    return 0;
}
