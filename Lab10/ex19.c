#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100 // max number of names that can be stored
#define MAX_NAME_LEN 30 // max length of a name, including null terminator

char names[MAX_NAMES][MAX_NAME_LEN]; // 2D array to store names


void saveName(int line) 
{
    char newName[MAX_NAME_LEN];
    printf("Enter a name to save: ");
    scanf("%s", newName); // read name from user input
    strcpy(names[line], newName); // copy new name to specified line in array
}


void deleteName(int line) 
{
    memset(names[line], 0, MAX_NAME_LEN); // clear the specified line
}


void replaceName(char* currentName, char* newName) 
{
    int i;
    for (i = 0; i < MAX_NAMES; i++) {
        if (strcmp(names[i], currentName) == 0) {
            // found currentName, replacing with newName
            strcpy(names[i], newName);
            break;
        }
    }
    if (i == MAX_NAMES) {
        printf("Name not found.\n");
    }
}


void retrieveName(int line) 
{
    printf("Name at line %d: %s\n", line, names[line]);
}


int main() 
{
    int option, line;
    char currentName[MAX_NAME_LEN], newName[MAX_NAME_LEN];
    while (1) {
        printf("Choose an option:\n");
        printf("1. Save a name\n");
        printf("2. Delete a name\n");
        printf("3. Replace a name\n");
        printf("4. Retrieve a name\n");
        printf("5. Exit\n");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("Enter line number: ");
                scanf("%d", &line);
                saveName(line);
                break;
            case 2:
                printf("Enter line number: ");
                scanf("%d", &line);
                deleteName(line);
                break;
            case 3:
                printf("Enter current name: ");
                scanf("%s", currentName);
                printf("Enter new name: ");
                scanf("%s", newName);
                replaceName(currentName, newName);
                break;
            case 4:
                printf("Enter line number: ");
                scanf("%d", &line);
                retrieveName(line);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid option.\n");
        }
    }
    
    return 0;
}