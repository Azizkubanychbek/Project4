#pragma once
class Counter {
public:
    Counter(int initial_value);
    void increase();
    void decrease();
    int getValue() const;
private:
    int _value;
};
