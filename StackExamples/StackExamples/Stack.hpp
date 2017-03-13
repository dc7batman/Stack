//
//  Stack.hpp
//  StackExamples
//
//  Created by AMohan on 13/03/17.
//  Copyright © 2017 AMohan. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp
#include <vector>

#include <stdio.h>

class Stack {
    
    std::vector<int> elements;
    int top = -1;
    
public:
    void push(int element);
    int pop();
    bool isEmpty();
    int topElement();
};

#endif /* Stack_hpp */
