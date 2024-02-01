class Notebook:
    def __init__(self):
        self.notes = []

    def add_note(self):
        new_note = input("Enter your note: ")
        self.notes.append(new_note)
        print("Note added successfully!")

    def delete_note(self):
        if not self.notes:
            print("No notes to delete.")
            return

        print("Your notes:")
        for i, note in enumerate(self.notes):
            print(f"{i}: {note}")

        index = int(input(f"Enter the index of the note you want to delete (0-{len(self.notes)-1}): "))
        if 0 <= index < len(self.notes):
            del self.notes[index]
            print("Note deleted successfully!")
        else:
            print("Invalid index entered.")

    def display_notes(self):
        if not self.notes:
            print("No notes available.")
            return

        print("Your notes:")
        for i, note in enumerate(self.notes):
            print(f"{i}: {note}")
   


def main():
    notebook = Notebook()

    while True:
        print("Notebook Menu:")
        print("1. Add a note")
        print("2. Delete a note")
        print("3. Display notes")
        print("4. Exit")

        choice = input("Enter your choice: ")

        if choice == '1':
            notebook.add_note()
        elif choice == '2':
            notebook.delete_note()
        elif choice == '3':
            notebook.display_notes()
        elif choice == '4':
            print("Exiting...")
            break
        else:
            print("Invalid choice. Please enter a valid option.")


if __name__ == "__main__":
    main()            






