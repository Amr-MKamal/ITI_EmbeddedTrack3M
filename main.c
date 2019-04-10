#include <stdio.h>
#include <stdlib.h>
#include "stdtypes.h"
#include "includingtest.h"

void main (void){
    char x=4;

    set_bit(x,0);
printf("%d",x);
clr_bit(x,0);
printf("%d",x);
toogle_bit(x,0);
printf("%d",x);
  toogle_bit(x,31);
  printf("%d",x);
}

