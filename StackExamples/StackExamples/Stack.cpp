//
//  Stack.cpp
//  StackExamples
//
//  Created by AMohan on 13/03/17.
//  Copyright © 2017 AMohan. All rights reserved.
//

#include "Stack.hpp"

void Stack::push(int element) {
    elements.push_back(element);
    top++;
}

int Stack::pop() {
    if (elements.size() == 0) {
        return -1;
    } else {
        int element = elements[top];
        elements.pop_back();
        top--;
        return element;
    }
}
