/*Gabriel Valladares Ruiz
  COP3300
  NeuralNetwork Assignment
*/
#include "module.h"
#include <iostream>


class ReLUActivation : public Module {
public:
    ReLUActivation(double p_s = 1.0, double n_s = 0.0); // Constructor
    vector<double> forward(const vector<double>& inputs) const; 
    // This will be able to display the function 
    void display() const; // Print activation parameters
    
    //The vector will be able update the attributes
    void setWeights(const vector<double>& newWeights); 
private:
    
double slope;
double negative_slope;
};