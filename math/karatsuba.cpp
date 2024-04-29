#include <tuple>
#include "karatsuba.h"


int karatsuba() { return 0; }


template <typename T, typename... Args>
typename std::enable_if<std::is_arithmetic<T>::value, int>::type
karatsuba(T start, Args... args)
{
    // int result = start;

    if constexpr(sizeof...(args) > 0) {

        auto argtuple = std::make_tuple(args...);

        auto firstArgument = std::get<0>(argtuple);
        // auto firstArgument = std::get<0>(std::tuple<Args...>(args)); // apparently C++ doesn't like this
    }

    // determine m for both start and firstargument
    // splt into two and call recursively

    // make base case for 2


}
