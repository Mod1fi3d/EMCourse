#include "DataSeries.h"

#include <iostream>
#include <vector>

int main()
{
    std::vector<double> x = {1.0, 2.0, 3.0};
    DataSeries s(x);

    std::cout << "max: " << s.max() << std::endl;
    return 0;
}
