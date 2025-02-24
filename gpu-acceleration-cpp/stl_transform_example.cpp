std::vector<double> v = {1, 2, 3, 4}, w(4);
std::transform(begin(v), end(v), begin(w), [](const double& el) { return 2.0 * el; });