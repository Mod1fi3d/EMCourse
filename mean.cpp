#include "DataSeries.h"

#include <iostream>
#include <vector>

int main()
{
    std::vector<double> x = {1.0, 2.0, 3.0};
    DataSeries s(x);

    std::cout << "mean: " << s.mean() << std::endl;
    return 0;
}
