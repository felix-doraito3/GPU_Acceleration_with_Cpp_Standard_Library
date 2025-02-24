auto ints = std::views::iota(0, 4);
std::for_each(std::execution::par, begin(ints), end(ints), [v = v.data()](size_t i) {
    v[i] = f(i);
});