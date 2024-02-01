#include <stdio.h>
#include <stdlib.h>

#define MAX_NOTES 1000
#define MAX_NOTE_LENGTH 1000

void displayNotes()
{
    FILE *file;
    char note[MAX_NOTE_LENGTH];

    file = fopen("notes.txt", "r");
    if (file == NULL)
    {
        printf("No notes available.");
        return;
    }

    printf("Existing Notes:\n\n");
    while (fgets(note, MAX_NOTE_LENGTH, file) != NULL) {
        printf("%s", note);
    }

    fclose(file);
}

void addNote()
{
    FILE *file;
    char note[MAX_NOTE_LENGTH];
    char c;

    printf("Enter your note: ");
    fflush(stdin); // Clear input buffer
    fgets(note, MAX_NOTE_LENGTH, stdin);

    file = fopen("notes.txt", "a");
    if (file == NULL)
    {
        printf("Unable to open file.");
        return;
    }

    fprintf(file, "%s", note);
    fclose(file);

    printf("Note added successfully!");
}

int main()
{
    int choice;

    do
    {
        printf("Notebook Menu:\n");
        printf("1. Display Notes\n");
        printf("2. Add Note\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            displayNotes();
            break;
        case 2:
            addNote();
            break;
        case 3:
                printf("Exiting...");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.");
        }
    } while (choice != 3);

    return 0;
}