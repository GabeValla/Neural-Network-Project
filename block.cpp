/*Gabriel Valladares Ruiz
  COP3300
  NeuralNetwork Assignment
*/
#include "block.h"
#include <iostream>
using namespace std;

//default construcor
Block::Block() : linear(0, 0), relu() {}
// This is how I am able to intalize and make my inheritance is set right
Block::Block(int in_size, int out_size) 
    : linear(in_size, out_size), relu() {}  


std::vector<double> Block::forward(const std::vector<double>& input) const {
    return relu.forward(linear.forward(input)); 
}

void Block::display() const {
    cout << "Block Details:" << endl;
    linear.display(); 
    relu.display();
}
//This is the function that will be able to display the size of my block
void Block::size() const {
    linear.size(); // Print size information
}
//Setter sets the weight 
void Block::setWeights(const std::vector<double>& flatWeights) {
    linear.setFlatWeights(flatWeights);
}
//set the activation for the weight of the ReLu activation function
void Block::setActivationWeights(const std::vector<double>& actWeights) {
    relu.setWeights(actWeights);
}
