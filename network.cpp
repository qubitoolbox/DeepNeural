#include "network.h"

Network::Network(const tuple<int, int>&insize, const tuple<int, int>&outsize, const string& act="relu",
const double& lamb=0.5, const double&alph)
:
{
layerInputs(make_shared<vector<Mat<double>>>(vector<Mat<double>>({Mat<double>(get<0>())}))) 



}
