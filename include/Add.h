// #include <concepts>

// template <typename T>
// // requires std::integral<T> || std::floating_point<T>
// auto add(T a, T b) {
//     return a + b;
// }

template <typename T, typename U>
// requires (std::integral<T> || std::floating_point<T>)
//        && (std::integral<T> || std::floating_point<T>)
auto add(T a, U b) {
    return a + b;
}