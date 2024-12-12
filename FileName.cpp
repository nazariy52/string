#include "String.h"
using namespace std;

int main() {
    String s1;
    s1.display();

    String s2(50);
    s2.display();

    String s3("Hello world");
    s3.display();

    s2.input();
    s2.display();

    cout << "Number of objects created: " << String::getCount() << endl;
}
