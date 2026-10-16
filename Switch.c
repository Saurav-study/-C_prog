// #include <stdio.h>
// int main(){
//     int a;
//     a=2;
//     switch(a){
//         case 1:
//         printf("hello");
//         case 2:
//         printf("hey\n");
//         case 3:
//         printf("this will be printed\n ");
//         break;
//         default:
//         printf("sorry");

//     }
// }

#include <stdio.h>

int main() { 
    int choice;

    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected Apple");
            break;

        case 2:
            printf("You selected Mango");
            break;

        case 3:
            printf("You selected Banana");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
