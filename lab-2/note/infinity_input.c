#include <stdio.h>

int main() {
    int num; // Variable to store the integer input

    printf("Enter integers (press Enter twice to stop):\n");

    while (1) {
        printf("Input: ");
        // Check if the user presses Enter without input
        if (scanf("%d", &num) != 1) {
            getchar(); // Clear the newline from input buffer
            if (getchar() == '\n') {
                break; // Double Enter detected
            }
            continue; // Skip invalid inputs
        }
        printf("You entered: %d\n", num);
    }

    return 0;
}


//or



#include <stdio.h>

int main() {
    char input[100]; // Buffer to store the user input

    while (1) {
        // Read input from the user
        if (fgets(input, sizeof(input), stdin) == NULL || input[0] == '\n') {
            break; // Stop if Enter is pressed twice
        }

        // Print the input
        printf("You entered: %s", input);
    }

    return 0;
}


//or

#include <stdio.h>

int main() {
    char input[100]; // Buffer to store the user input

    printf("Enter input (press Enter to stop):\n");

    while (1) {
        // Read input from the user
        printf("Input: ");
        if (scanf("%[^\n]%*c", input) != 1) { 
            // Break the loop if input is empty (user presses Enter)
            break;
        }

        // Print the entered input
        printf("You entered: %s\n", input);
    }

    printf("Exiting...\n");
    return 0;
}
