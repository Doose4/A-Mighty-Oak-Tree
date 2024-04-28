#include <iostream>
#include <string>

using namespace std;

class Squirrel {
private:
    string name;
public:
    Squirrel(string tname) {
        this->name = tname;
    }
    Squirrel() {
        this->name = "Null";
    }
    string get_name() {
        return this->name;
    }
};

class Node {
public:
    Squirrel node_data;
    Node* leftnode;
    Node* rightnode;

    Node(Squirrel data) {
        this->node_data = data;
        this->leftnode = NULL;
        this->rightnode = NULL;
    }
    void set_left(Node* next_node = nullptr) {
        if (next_node != nullptr)
        {
            this->leftnode = next_node;
        }
    }
    void set_right(Node* next_node = nullptr) {
        if (next_node != nullptr)
        {
            this->rightnode = next_node;
        }
    }
    Node left() {

        return *leftnode;
    }
    Node right() {

        return *rightnode;
    }
    string get_squirrel_name() {
        string classname = node_data.get_name();
        return classname;

    }
};

void tester() {
    Squirrel Jeff = Squirrel("Jeff");
    Node node_one = Node(Jeff);

    Squirrel Tony = Squirrel("Tony");
    Node node_two = Node(Tony);

    Squirrel Andrew = Squirrel("Andrew");
    Node node_three = Node(Andrew);

    node_one.set_left(&node_two);
    node_one.set_right(&node_three);

    Node retrieved_node_one = node_one.left();
    Node retrieved_node_two = node_one.right();
    cout << "Top Squirrel  -  " << node_one.get_squirrel_name() << endl;
    cout << "Left Squirrel  -  " << retrieved_node_one.get_squirrel_name() << endl;
    cout << "Left Squirrel  -  " << node_one.left().get_squirrel_name() << endl;
    cout << "Right Squirrel  -  " << node_one.right().get_squirrel_name() << endl;
    cout << "Right Squirrel  -  " << retrieved_node_two.get_squirrel_name() << endl;
}

int main() {
    tester();

	return 0;
}