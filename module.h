/*Gabriel Valladares Ruiz
  COP3300
  NeuralNetwork Assignment
*/

//Interface will be able allow the rest of the neural network componets to flow through
#ifndef MODULE_H  
#define MODULE_H  
#include <vector>

using namespace std;

class Module {

    protected:
    vector<double> weights; 

public:
    Module(); // Default constructor
    vector<double> forward(const vector<double>& input) const; 
};

#endif 