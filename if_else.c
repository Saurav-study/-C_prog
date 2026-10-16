#include <stdio.h>

int main()
{
    int age;
    printf("enter your age :");
    scanf("%d" , &age);
    if(age>18){
        printf("yes ,you can give vote");
    }
    else if(age>10){
    printf("wait to be mature");
}
else{
    printf("sorry you can't ");
}
    return 0;



}
