#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for a node in the linked list
struct Node {
    char data;
    struct Node* next;
};

// Function to add a character to the linked list
void addToLinkedList(struct Node** head, char c) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = c;
    newNode->next = *head;
    *head = newNode;
}

// Function to remove special characters from the given string using linked list
void removeSpecialCharsLinkedList(char str[]) {
    struct Node* head = NULL;
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is an alphabet or a digit
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= '0' && str[i] <= '9')) {
            addToLinkedList(&head, str[i]);
        }
    }

    // Null-terminate the modified string
    struct Node* current = head;
    for (i = 0; current != NULL; i++) {
        str[i] = current->data;
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
    str[i] = '\0';
}

int main() {
    char inputString[100];

    // Input string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove special characters using linked list
    removeSpecialCharsLinkedList(inputString);

    //strrev(inputString);

    // Display the modified string
    printf("String after removing special characters: %s\n", inputString);

    return 0;
}
