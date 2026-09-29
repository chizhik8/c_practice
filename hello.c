#include <stdio.h>

int hello () {
    printf("Hello World!\n"); // \n — спеціальний символ нового рядка
    printf("Full Name: Billy Bob\nAge: 100\n");
    puts("Hello World! Hello World!");
    return 0;
};

int calc () {
    printf("Today I'm %d years old and next year I'm going to be %d years old\n", 20, 21);
    printf("%d + %d = %d \n", 5, 2, 5+2);
    printf("%d - %d = %d \n", 5, 2, 5-2);
    printf("%d * %d = %d \n", 5, 2, 5*2);
    printf("%d / %d = %d \n", 5, 2, 5/2);
    printf("%d %% %d = %d \n", 5, 2, 5%2);
    return 0;
};

int main()
{
    hello();
    calc();
    return 0; // повідомляє операційній системі, що програма завершилася успішно
}
