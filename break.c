// #include <stdio.h>

// int main() {
//     int i, n;

//     for(i = 0; i < 10; i++) {
//         printf("Enter a number: ");
//         scanf("%d", &n);

//         if(n > 18) {
//             printf("yes\n");
//             break;
//         }

        
//     }
//     printf("hii\n");

//     return 0;
// }

//continue

#include <stdio.h>

int main() {
    int i, n;

    for(i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%d", &n);

        if(n > 18) {
            printf("yes\n");
            continue;
        }

        
    }
    printf("hii\n");

    return 0;
}