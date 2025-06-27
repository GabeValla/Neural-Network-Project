/*Gabriel Valladares Ruiz
  COP3300
  NeuralNetwork Assignment
*/
//this is the block interface
#ifndef BLOCK_H  
#define BLOCK_H  
#include <vector>
#include "linear_layer.h"
#include "ReLUActivation.h"

class Block {
private:
    LinearLayer linear;  // LinearLayer is an object, not a pointer
    ReLUActivation relu; 

public:
    Block();
    Block(int in_size, int out_size); // Constructor

    std::vector<double> forward(const std::vector<double>& input) const; // Forward pass
    void display() const; // Display block info
    void size() const; // Print size info
    void setWeights(const std::vector<double>& flatWeights); 
    void setActivationWeights(const std::vector<double>& actWeights); // Set activation weights
};
#endif 