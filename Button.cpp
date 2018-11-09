//
// Created by Ben Johnson on 11/9/18.
//

#include "Button.h"

void Button::addClickHandler(void (*handler)(Event)) {
    clickHandlers.push_back(handler);
}

void Button::click(int x, int y) {
    Event e(x, y);
    for (auto handler : clickHandlers) {
        handler(e);
    }
}
