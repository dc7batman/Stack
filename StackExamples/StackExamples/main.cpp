//
//  main.cpp
//  StackExamples
//
//  Created by AMohan on 13/03/17.
//  Copyright © 2017 AMohan. All rights reserved.
//

#include <iostream>
#include "Stack.hpp"

void reverseStack(Stack& stack);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Stack stack = Stack();
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    
    // Reverse stack
    reverseStack(stack);
    
    std::cout << "\n";
    return 0;
}

void reverseStack(Stack& stack) {
    
}
