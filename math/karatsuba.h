#ifndef KARATSUBA_H
#define KARATSUBA_H

#include <type_traits>

int karatsuba();

template <typename T, typename... Args>
typename std::enable_if<std::is_arithmetic<T>::value, int>::type
karatsuba(T start, Args... args);

#endif //
