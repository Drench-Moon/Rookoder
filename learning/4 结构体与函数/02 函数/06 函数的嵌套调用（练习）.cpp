#include <iostream>
using namespace std;

static int get_min(const int a, const int b) {
    return a > b ? b : a;
}

static int get_max(int a, int b) {
    return a > b ? a : b;
}
namespace {
    struct minax {
        int min_value;
        int max_value;
    };
}

static struct minax get_min_and_max(int a, int b) {
    return {.min_value = get_min(a, b), .max_value = get_max(a, b)};
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << endl;
    cout << max(a, b) << endl;
    cout << get_min_and_max(a, b).min_value << " " <<  get_min_and_max(a, b).max_value << endl;
    return 0;
}