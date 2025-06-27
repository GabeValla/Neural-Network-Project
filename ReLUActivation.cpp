/*Gabriel Valladares Ruiz
  COP3300
  NeuralNetwork Assignment
  This Activation file will be able to make sure the postiv eop rnegative slopes are accounted for
*/
#include "ReLUActivation.h"
using namespace std;

ReLUActivation::ReLUActivation(double p_s, double n_s) {
    weights = {p_s, n_s}; 
}
//Seperates the slope for postive and negative ranges
vector<double> ReLUActivation::forward(const vector<double>& inputs) const {
    vector<double> output(inputs.size());

    for (size_t i = 0; i < inputs.size(); ++i) {
        output[i] = (inputs[i] >= 0) ? weights[0] * inputs[i] : weights[1] * inputs[i];
    }

    return output;
}
//Just the display function
void ReLUActivation::display() const {
    cout << "ReLU Activation Parameters: " << endl;
    cout << "Slope for x >= 0: " << weights[0] << endl;
    cout << "Slope for x < 0: " << weights[1] << endl;
}

void ReLUActivation::setWeights(const vector<double>& newWeights) {
    if (newWeights.size() >= 2) {
        weights = newWeights;
    } else {
        cout << "Error: Expected at least 2 elements in weight vector." << endl;
    }
}