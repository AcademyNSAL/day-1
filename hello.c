// #include<stdio.h>
// void main()
// {
//     char grade;
//     scanf("%c", &grade);
// }

// #include <stdio.h>

// int main()
// {
//     char grade;
//     if (scanf("%c", &grade) == 1)
//     {
//         printf("You entered: %c\n", grade);
//     }
//     else
//     {
//         printf("Error reading input.\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>  // For strtof()

// int main() {
//     char input[100];
//     float number;
//     char grade;

//     printf("Enter a value: ");
//     fgets(input, sizeof(input), stdin);  // Read the entire line of input

//     // Try to parse the input as a float
//     char *endptr;
//     number = strtof(input, &endptr);

//     // Check if the input was a valid float
//     if (*endptr == '\0' || *endptr == '\n') {
//         printf("You entered a float: %f\n", number);
//     } else {
//         // Input is not a valid float; check if it's a single character
//         if (sscanf(input, "%c", &grade) == 1) {
//             printf("You entered a character: %c\n", grade);
//         } else {
//             printf("Invalid input.\n");
//         }
//     }

//     return 0;
// }

// #include<stdio.h>

// void main(){
//     // printf("%i", age);
//     // printf("%c", c);

//     char c = 'a';
//     int age = 35;
//     float b = 3.6;
//     // printf("%d", age);
// }

// #include<stdio.h>

// void main(){
//     float height = 5.8;
//     int age = 35;
//     // printf("%d %f", height, age);
//     // printf("My age is %d and my height is %f", age, height);
// }

#include <stdio.h>

void main(){
    printf("Sum of 23 and 45 is %i", 125 + 567 - 98 * 56);
    int number; // variable
    printf("Enter a number between 0-10: ");
    scanf("%d", &number);
    printf("You entered: %d", number);
    // int a;
    // int b;
    // float c;
    // scanf("%d%d%f", &a, &b, &c);
}