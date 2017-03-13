//
//  main.cpp
//  StackExamples
//
//  Created by AMohan on 13/03/17.
//  Copyright © 2017 AMohan. All rights reserved.
//

#include <iostream>
#include "Stack.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Stack *stack = new Stack();
    stack->push(1);
    stack->push(2);
    std::cout << "stack  - " << stack->pop()<< "\n "<< stack->pop() << "\n";
    
    return 0;
}
