/*Gabriel Valladares Ruiz
  COP3300
  NeuralNetwork Assignment
*/
#include "linear_layer.h"
#include "module.h"  
#include <iostream>
//fully connected linear layer with weights initialized
LinearLayer::LinearLayer(int in_size, int out_size) 
    : input_size(in_size), output_size(out_size), weights(out_size, std::vector<double>(in_size)) {}


    std::vector<double> LinearLayer::forward(const std::vector<double>& input) const {
    std::vector<double> output(output_size, 0.0);
    for (int i = 0; i < output_size; ++i) {
        for (int j = 0; j < input_size; ++j) {
            output[i] += weights[i][j] * input[j];
        }
    }
    return output;
}

//Display function will give the output 
void LinearLayer::display() const {
    cout << "Linear Layer: " << input_size << " -> " << output_size << endl;
}

void LinearLayer::size() const {
    cout << "Layer size: " << input_size << "x" << output_size << endl;
}

void LinearLayer::setFlatWeights(const std::vector<double>& flatWeights) {
    int index = 0;
    for (int i = 0; i < output_size; ++i) {
        for (int j = 0; j < input_size; ++j) {
            weights[i][j] = flatWeights[index++];
        }
    }
}