#include "DataSeries.h"

DataSeries::DataSeries(const std::vector<double>& data)
{
    data_ = data;
}

double DataSeries::mean() const
{
    double sum = 0.0;
    for (double v : data_) {
        sum += v;
    }
    return sum / data_.size();
}

double DataSeries::max() const
{
    double max = data_[0];
    for (double v : data_) {
        if (max < v){
            max = v;
            }        
    }
    return max;
}
