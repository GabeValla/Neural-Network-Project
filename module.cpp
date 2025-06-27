/*Gabriel Valladares Ruiz
  COP3300
  NeuralNetwork Assignment
*/

#include "module.h"

// Define the constructor for the Module class
Module::Module() {
    
}

std::vector<double> Module::forward(const std::vector<double>& input) const {
    // A forward pass 
    std::vector<double> output(input.size(), 0.0);
    
    for (size_t i = 0; i < input.size(); ++i) {
        output[i] = input[i] * weights[i];  // pass
    }
    
    return output;
}

