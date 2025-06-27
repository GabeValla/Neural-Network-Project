/*Gabriel Valladares Ruiz
  COP3300
  NeuralNetwork Assignment
*/
#ifndef LINEAR_LAYER_H
#define LINEAR_LAYER_H
using namespace std;
#include <vector>

class LinearLayer {
public:
    LinearLayer(int in_size, int out_size);
    std::vector<double> forward(const std::vector<double>& input) const;
    void display() const;
    void size() const;
    void setFlatWeights(const std::vector<double>& flatWeights);

private:
    int input_size;
    int output_size;
    std::vector<std::vector<double>> weights;  
};

#endif // LINEAR_LAYER_H