#include <iostream>
#include "options.hpp"

using namespace std;
using namespace stale_runner::config;

int main(int ac, char* av[])
{
    Config cfg;
    if (0 != get_config(ac, av, cfg))
        return -1;
    cout << cfg << endl;
    return 0;
}
