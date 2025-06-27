/*Gabriel Valladares Ruiz
  COP3300
  NeuralNetwork Assignment
*/
#include "neuralnetwork.h"
#include <iostream>
using namespace std;
NeuralNetwork::NeuralNetwork(int num_blocks, int in_size, int hidden_size, int out_size) {
    if (num_blocks < 2) {
        blocks.emplace_back(in_size, out_size);
    } else {
        blocks.emplace_back(in_size, hidden_size);
        for (int i = 1; i < num_blocks - 1; ++i) {
            blocks.emplace_back(hidden_size, hidden_size);
        }
        blocks.emplace_back(hidden_size, out_size);
    }
}
//through the neural network it is able to use a forward pass
vector<double> NeuralNetwork::forward(const vector<double>& input) const {
    vector<double> output = input;
    for (const auto& block : blocks) {
        output = block.forward(output);
    }
    return output;
}

void NeuralNetwork::printModel() const {
    cout << "Neural Network Model:" << endl;
    for (size_t i = 0; i < blocks.size(); ++i) {
        cout << "Block " << i + 1 << ":" << endl;
        blocks[i].display();
    }
}

void NeuralNetwork::printBlockSizes() const {
    cout << "Neural Network Block Sizes:" << endl;
    for (size_t i = 0; i < blocks.size(); ++i) {
        cout << "Block " << i + 1 << " - ";
        blocks[i].size();
    }
}
//Sets the weights of a specific block within the neural network using a flattened vector of weights.
void NeuralNetwork::setBlockWeights(int block_index, const vector<double>& flatWeights) {
    if (block_index >= 0 && block_index < blocks.size()) {
        blocks[block_index].setWeights(flatWeights);
    } else {
        cout << "Error: Invalid block index." << endl;
    }
}

void NeuralNetwork::setBlockActivationWeights(int block_index, const vector<double>& actWeights) {
    if (block_index >= 0 && block_index < blocks.size()) {
        blocks[block_index].setActivationWeights(actWeights);
    } else {
        cout << "Error: Invalid block index." << endl;
    }
}