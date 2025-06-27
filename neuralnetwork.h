/*Gabriel Valladares Ruiz
  COP3300
  NeuralNetwork Assignment
  The cornerstone of the project interface will allow the neural network to work, and run through the layers
*/
#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H
#include "block.h"
#include <vector>

class NeuralNetwork {
private:
    vector<Block> blocks; // Vector of blocks that form the network

public:

    NeuralNetwork(int num_blocks, int in_size, int hidden_size, int out_size); // Constructor
    vector<double> forward(const vector<double>& input) const; 
    void printModel() const;
    // Print size info of each block
    void printBlockSizes() const; 
    void setBlockWeights(int block_index, const vector<double>& flatWeights);
     // Set linear weights for a block
    void setBlockActivationWeights(int block_index, const vector<double>& actWeights); 
};
#endif  // NEURALNETWORK_H