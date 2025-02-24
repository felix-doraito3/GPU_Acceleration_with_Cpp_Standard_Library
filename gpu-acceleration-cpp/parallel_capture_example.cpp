void multiply_with(vector<double>& v, double a) {
    std::for_each(std::execution::par, begin(v), end(v), [a](double& x) { x *= a; });
}