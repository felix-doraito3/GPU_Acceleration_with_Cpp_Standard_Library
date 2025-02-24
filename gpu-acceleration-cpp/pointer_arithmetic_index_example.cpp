std::vector<double> v = {1, 2, 3, 4};
auto f = [v = v.data()](const double& el) {
    ptrdiff_t i = &el - v;
    return f(i);
};