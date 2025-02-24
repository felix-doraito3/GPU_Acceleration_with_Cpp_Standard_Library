template <typename T, typename Predicate>
std::vector<T> select_optimized(const std::vector<T>& input, Predicate pred) {
    std::vector<T> output(input.size());
    auto end = std::transform_inclusive_scan(std::execution::par, input.begin(), input.end(), output.begin(),
        [pred](const T& x, const T& y) { return pred(y) ? y : x; },
        [](const T& x, const T& y) { return y; }
    );
    output.erase(end, output.end());
    return output;
}