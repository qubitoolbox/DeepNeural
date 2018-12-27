#include <iostream>
#include <armadillo>
#include <vector>
#include <utility>
#include <tuple>
#include <memory>
#include <sstream>
#include <list>
#include <random>
#include <cmath>

using namespace std;
using namespace arma;

double epsilon = 0.0003;

class Network
{
  public:
  
  private:
  
  //here we receive the input of
  //each layer.
  shared_ptr<double> layerInputs;
  
  shared_ptr<Mat<double>> layerWeights;
  
  shared_ptr<Mat<double>> layerActivations;
  
  shared_ptr<Mat<double>> layerSigmas;
  
  shared_ptr<Mat<double>> layerGradients;
  
  Mat<double> output;
  
  double lambda;
  double eta;
  string activation;
  
  
  






}
