#include <stdio.h>
#include <string.h>

int main() {
    char pass[] = "123456";
    char testpass[6];
    int attempts = 0;

    while (attempts < 3) { 
        printf("Enter the password: ");
        scanf("%s", testpass);

        if (strcmp(pass,testpass)==0) {
            printf("Correct pass, welcome back.\n");
            break;
        } else {
            printf("Incorrect pass, try again.\n");
            attempts++;
        }
    }

    if (attempts == 3) {
        printf("Too many attempts. Access denied.\n");
    }

    return 0;
}

