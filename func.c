#include <stdio.h>

void joke(int num);

int main() {

    int choice;

    printf("Enter a number between 1 and 5 to hear a joke: ");
    scanf("%d", &choice);

    while (choice < 1 || choice > 5) {

        printf("Invalid choice. Please enter a number between 1 and 5: ");
        scanf("%d", &choice);
    }

    joke(choice);

    return 0;
}

void joke(int num) {

    switch (num) {

        case 1:
            printf("Why do programmers prefer dark mode? Because light attracts bugs.\n");
            break;

        case 2:
            printf("Why do Java developers wear glasses? Because they don't see sharp.\n");
            break;

        case 3:
            printf("How many programmers does it take to change a light bulb? None, that's a hardware problem.\n");
            break;

        case 4:
            printf("Why did the programmer quit his job? Because he didn't get arrays.\n");
            break;

        case 5:
            printf("There are only 10 types of people in the world: those who understand binary and those who don't.\n");
            break;

        default:
            printf("Something went wrong, no joke available for that number.\n");
            break;
    }
}
