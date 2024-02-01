#include <iostream>
#include <vector>
#include <string>

using namespace std;

//make all function

class Notebook {
private:
    vector<string> notes;

public:
    void addNote() {
        string newNote;
        cout << "Enter your note: ";
        getline(cin, newNote);
        notes.push_back(newNote);
        cout << "Note added successfully!" << endl;
    }

    void deleteNote() {
            if (notes.empty()) {
                cout << "No notes to delete." << endl;
                return;
            }

            int index;
            cout << "Enter the index of the note you want to delete (0-" << notes.size() - 1 << "): ";
            cin >> index;
            cin.ignore(); // Ignore the newline character from cin
            if (index >= 0 && index < notes.size()) {
                notes.erase(notes.begin() + index);
                cout << "Note deleted successfully!" << endl;
            } else {
                cout << "Invalid index entered." << endl;
            }
        }

    void displayNotes() {
        if (notes.empty()) {
            cout << "No notes available." << endl;
            return;
        }

        cout << "Your notes:" << endl;
        for (size_t i = 0; i < notes.size(); ++i) {
            cout << i << ": " << notes[i] << endl;
        }
    }
};


int main() {
    Notebook notebook;
    int choice;

    do {
        cout << "Notebook Menu:" << endl;
        cout << "1. Add a note" << endl;
        cout << "2. Delete a note" << endl;
        cout << "3. Display notes" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore the newline character from cin

        switch (choice) {
            case 1:
                notebook.addNote();
                break;
            case 2:
                notebook.deleteNote();
                break;
            case 3:
                notebook.displayNotes();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}
















































































































