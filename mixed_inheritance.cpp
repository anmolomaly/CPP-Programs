#include <iostream>
using namespace std;

// Base Class: Simple Stack Implementation
class stack {
protected:
    int arr[100];
    int top;

public:
    stack() {
        top = -1;
    }

    void push(int x) {
        if (top >= 99) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }

    int pop() {
        if (top == -1) { // Fixed: used == instead of =
            cout << "Underflow" << endl;
            return -999;
        } else {
            return arr[top--];
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i = top; i >= 0; i--) { // Fixed: i-- instead of i++
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Single Inheritance: browser inherits from stack
class browser : public stack {
public:
    void VisitPage(int pageID) {
        cout << "Visiting Page: " << pageID << endl;
        push(pageID);
    }

    void GoBack() {
        cout << "Going back from page: " << pop() << endl;
    }
};

// Multilevel Inheritance: SecuredBrowser inherits from browser
class SecuredBrowser : public browser {
public:
    void visitSecuredPage(int secPage) {
        cout << "[SECURE] ";
        VisitPage(secPage); // Fixed: secPage variable name
    }
};

// Multiple Inheritance Bases
class undoStack : public stack {
public:
    void addUndoAction(int actionID) {
        push(actionID);
    }
};

class redoStack : public stack {
public:
    void addRedoAction(int actionID) {
        push(actionID);
    }
};

// Multiple Inheritance: EditorStack inherits from both undoStack and redoStack
class EditorStack : public undoStack, public redoStack {
public:
    void performAction(int actionID) {
        cout << "Action Performed: " << actionID << endl;
        undoStack::addUndoAction(actionID); // Scope resolution used to avoid ambiguity
    }
};

int main() {
    // Demonstrating Multilevel Inheritance
    cout << "--- Browser History (Multilevel) ---" << endl;
    SecuredBrowser SB;
    SB.VisitPage(101);
    SB.VisitPage(102);
    SB.visitSecuredPage(505);
    SB.display();
    SB.GoBack();

    // Demonstrating Multiple Inheritance
    cout << "\n--- Text Editor (Multiple Inheritance) ---" << endl;
    EditorStack myEditor;
    myEditor.performAction(1); // Writing text
    myEditor.performAction(2); // Deleting text
    
    cout << "Undo History: ";
    myEditor.undoStack::display();

    return 0;
}
