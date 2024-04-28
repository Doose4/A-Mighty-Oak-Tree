#include <iostream>

using namespace std;

class Squirrel {
private:
    string name;

public:
    Squirrel(string tname) {
        this->name = tname;
    }

    string get_name() {
        return this->name;
    }
};

int main() {
	Squirrel mysquirrel = Squirrel("Jeff");
	cout << mysquirrel.get_name();

	return 0;
}