#include "Button.h"
#include "iostream"
using namespace std;

void squeak(Button::Event e) {
    cout << "ouch!" <<endl;
}

void whine(Button::Event e) {
    cout << "that stings in the " << e.x  << endl;
}

int main() {
    Button b;
    b.addClickHandler(squeak);
    b.addClickHandler(whine);

    b.click(34, 89);

}