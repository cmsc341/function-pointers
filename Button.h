//
// Created by Ben Johnson on 11/9/18.
//

#ifndef FUNCTION_POINTERS_BUTTON_H
#define FUNCTION_POINTERS_BUTTON_H

#include <vector>
using namespace std;

class Button {
public:
    class Event {
    public:
        int x, y;
        Event(int x, int y):x(x), y(y) {}
    };

    void addClickHandler(void (*handler) (Event));
    void click(int x, int y);
private:
    vector<void (*) (Event)> clickHandlers;
};


#endif //FUNCTION_POINTERS_BUTTON_H
