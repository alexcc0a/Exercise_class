//
//  Counter.cpp
//  Exercise_class
//
//  Created by Александр Нестеров on 8/4/24.
//

#include "Counter.hpp"

Counter::Counter() : value(1) {}
Counter::Counter(int initialValue) : value(initialValue) {}

void Counter::increment() {value++;}

void Counter::decrement() {value--;}

int Counter::getValue() const {return value;}
