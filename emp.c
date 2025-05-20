#include <stdio.h>

int main() {
<<<<<<< HEAD

    int x;
    int *pointer;
    pointer = &x;
    x = 10;
    printf("x = %d\n", x);
    printf("*pointer = %d\n", *pointer);
    printf("address of x = %p\n", &x);
    printf("address of pointer = %p\n", &pointer);

>>>>>>>b2
>>>>>>> b3
    int prime = 0;
    char choice;
    do
    {
        printf("Enter a number: ");
        int num;
        scanf("%d", &num);
        if (num == 2)
        {
            prime++;
        }
        else if (num % 2 == 0)
        {
            printf("Not a prime number\n");
        }
        else
        {
            int i;
            for (i = 3; i < num; i += 2)
            {
                if (num % i == 0)
                {
                    printf("Not a prime number\n");
                    break;
                }
            }
            if (i == num)
            {
                prime++;
            }
        }
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');   
    printf("Prime numbers: %d\n", prime);
    


<<<<<<< HEAD
>>>>>>> b1
>>>>>>> b2

=======
>>>>>>> b3
    return 0;
}
