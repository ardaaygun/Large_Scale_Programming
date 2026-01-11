#ifndef PAIR_H
#define PAIR_H

template <typename T>
class Pair {
private:
    T first, second;

public:

    Pair(T firstValue, T secondValue) : first(firstValue), second(secondValue) {}


    T getMin() const {
        return (first < second) ? first : second;
    }


    T getMax() const {
        return (first > second) ? first : second;
    }
};

#endif
