#include <stdio.h>
// there are two methods to use constant (1)define and (2) const
#define PI 3.14
int main(){
    int a=7;
     const float b=9.22;
     printf("%f" ,PI);
     //b=22.2;  you  can't chnge b as u used "const"
    //printf("The value of a is %d and the value of b is %8.4f\n" ,a , b);
    //printf(" %-18.4f this" , b);
    return 0;

}