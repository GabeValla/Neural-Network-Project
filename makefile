make: driver.cpp module.o block.o linear_layer.o ReLUActivation.o neuralnetwork.o
        g++ driver.cpp module.o block.o linear_layer.o ReLUActivation.o neuralnetwork.o

module.o: module.cpp module.h
        g++ -c module.cpp

block.o: block.cpp block.h
        g++ -c block.cpp

linear_layer.o: linear_layer.cpp linear_layer.h
        g++ -c linear_layer.cpp

ReLUActivation.o: ReLUActivation.cpp ReLUActivation.h
        g++ -c ReLUActivation.cpp

neuralnetwork.o: neuralnetwork.cpp neuralnetwork.h
        g++ -c neuralnetwork.cpp