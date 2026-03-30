#include <iostream>
#include <string>
using namespace std;

class Stack {
protected:
    string arr[100];
    int top;
public:
    Stack() { top = -1; }
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == 99; }

    void push(string val) {
        if (!isFull()) arr[++top] = val;
        else cout << "Stack overflow!" << endl;
    }

    string pop() {
        if (!isEmpty()) return arr[top--];
        else {
            cout << "Stack underflow!" << endl;
            return "";
        }
    }

    void display(string name) {
        cout << name << ": ";
        for (int i = 0; i <= top; i++) cout << arr[i] << " | ";
        cout << endl;
    }
};

class Undo : public Stack {
public:
    void undo(Stack &actions) {
        if (!actions.isEmpty()) {
            string last = actions.pop();
            push(last);
            cout << "Undo: " << last << endl;
        } else {
            cout << "Nothing to undo." << endl;
        }
    }
};

class Redo : public Stack {
public:
    void redo(Stack &actions, Undo &undoStack) {
        if (!undoStack.isEmpty()) {
            string act = undoStack.pop();
            push(act);
            actions.push(act);
            cout << "Redo: " << act << endl;
        } else {
            cout << "Nothing to redo." << endl;
        }
    }
};

class Logger : public Stack {
public:
    void log(const string& msg) {
        push(msg);
        cout << "Log: " << msg << endl;
    }
};

class Editor : public Undo, public Redo {
private:
    Stack actions;
    Logger logger;
public:
    void doAction(const string& act) {
        actions.push(act);
        logger.log("Action performed: " + act);
    }

    void performUndo() {
        undo(actions);
        logger.log("Undo performed");
    }

    void performRedo() {
        redo(actions, *this); 
        logger.log("Redo performed");
    }

    void showAll() {
        actions.display("Actions");
        Undo::display("Undo");
        Redo::display("Redo");
        logger.display("Logger");
    }
};

int main() {
    Editor editor;

    editor.doAction("Type 'Hello'");
    editor.doAction("Type 'World'");
    editor.showAll();

    editor.performUndo();
    editor.showAll();

    editor.performRedo();
    editor.showAll();

    editor.doAction("Delete 'World'");
    editor.showAll();

    return 0;
}