template <typename T, typename Predicate>
std::vector<T> select(const std::vector<T>& input, Predicate pred) {
    std::vector<T> output;
    std::copy_if(std::execution::par, input.begin(), input.end(), std::back_inserter(output), pred);
    return output;
}