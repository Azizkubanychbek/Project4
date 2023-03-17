#include "Header.h"



Counter::Counter(int initial_value = 1) {
    _value = initial_value;
}

void Counter::increase() {
    _value++;
}

void Counter::decrease() {
    _value--;
}

int Counter::getValue() const {
    return _value;
}
