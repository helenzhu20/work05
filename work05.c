#include <stdio.h>

int main() {

    //1. Declare and initialize variables of types char, int, and long.
    char c = 'w';
    int n = 3;
    long l = 3902443;
    
    //2. Print out the addresses of each variable in hex and decimal.
    printf("–– 2 ––\n");
    printf("Hexidecimal:\nchar: %p\nint: %p\nlong: %p\n\n", &c, &n, &l);
    printf("Decimal:\nchar: %lu\nint: %lu\nlong: %lu\n\n", &c, &n, &l);

    //3. Declare and initialize pointers for each of your variables.
    char *cp = &c;
    int *np = &n;
    long *lp = &l;

    //4. Print out the values of each pointer.
    printf("–– 4 ––\n");
    printf("Pointer Values:\nchar: %p\nint: %p\nlong: %p\n\n", cp, np, lp);

    //5. Use the pointers to modify the values of the original variables and print out the new values.
    printf("–– 5 ––\n");
    *cp = 'l';
    *np = 5;
    *lp = 594305;
    printf("New Values:\nchar: %c\nint: %d\nlong: %ld\n\n", *cp, *np, *lp);

    //6. Declare and initialize an unsigned int variable and 2 pointers that point to it, one should be an int * and the other should be a char *
    unsigned int unsint = 39024;
    int *intp = &unsint;
    char *charp = &unsint;

    //7. Print out the value of each pointer (this should be the memory address), and de-reference each pointer to print out the value each points to.
    printf("–– 7 ––\n");
    printf("Pointers:\n");
    printf("intp: %p, intp points to: %u\n", intp, *intp);
    printf("charp: %p, charp points to: %u\n\n", charp, *charp);

    //8. Print out your unsigned int in decimal and hex.
    printf("–– 8 ––\n");
    printf("Hexidecimal: %x\n", unsint);
    printf("Decimal: %u\n\n", unsint);

    //9. Use the char * to print out each individual byte of your unsigned int.
    printf("–– 9 ––\n");
    int i;
    printf("Unsigned Decimal:\n");
    for (i = 0; i < 5; i++) {
        printf("%d: %hhu\n", i, *(charp + i));
    }
    printf("\nUnsigned Hexidecimal:\n");
    for (i = 0; i < 5; i++) {
        printf("%d: %hhx\n", i, *(charp + i));
    }

    //10. Use the char * to increment each byte of the unsigned int by 1. Print out the unsigned int in both hex and decimal after each modification. When done, print out each byte like in step 9. You may need to reset the char * so that it points to the unsigned int, depending on how you wrote step 4 out.
    printf("\n–– 10 ––\n");
    printf("Unsigned Decimal:\n");
    for (i = 0; i < 5; i++) {
        printf("%d: %hhu\n", i, *(charp + i) + 1);
    }
    printf("\nUnsigned Hexidecimal:\n");
    for (i = 0; i < 5; i++) {
        printf("%d: %hhx\n", i, *(charp + i) + 1);
    }

    //11. Perform the same operation as in step 10, except add 16 to each byte.
    printf("\n–– 11 ––\n");
    printf("Unsigned Decimal:\n");
    for (i = 0; i < 5; i++) {
        printf("%d: %hhu\n", i, *(charp + i) + 16);
    }
    printf("\nUnsigned Hexidecimal:\n");
    for (i = 0; i < 5; i++) {
        printf("%d: %hhx\n", i, *(charp + i) + 16);
    }
    
    return 0;
}