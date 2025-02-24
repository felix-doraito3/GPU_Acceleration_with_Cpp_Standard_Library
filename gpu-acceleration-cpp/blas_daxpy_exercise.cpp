// DAXPY: y = a * x + y
void daxpy(double a, const std::vector<double>& x, std::vector<double>& y) {
    std::transform(x.begin(), x.end(), y.begin(), y.begin(), [a](double xi, double yi) {
        return a * xi + yi;
    });
}