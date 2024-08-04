//
//  Counter.hpp
//  Exercise_class
//
//  Created by Александр Нестеров on 8/4/24.
//

#ifndef COUNTER_HPP
#define COUNTER_HPP

class Counter {
private:
    int value;
public:
    Counter();
    Counter(int initialValue);
    
    void increment();
    void decrement();
    int getValue() const;
};

#endif
