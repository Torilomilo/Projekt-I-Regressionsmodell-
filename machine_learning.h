/*
 * machine_learning.cpp
 *
 * Created: 2024-09-18 09:02:12
 *  Author: AdelH
 */ 

#include "vector.h"

using namespace container;

 namespace ml
 {

    class LinReg
    {
        public:
            LinReg() = delete;
            // protottyp f�r konstruktor
            LinReg(const Vector<double>& LinRegInput, const Vector<double>& LinRegOutput);

            // Get methods protoyyper
            const Vector<double>& input() const;
            const Vector<double>& output() const;

            // Metode prototyper f�r att tr�na och prediktera beh�vs.
            bool train(const size_t epochCount, const double learningRate = 0.01);  // funktionsdeklaration f�r k�ra epoch:Er f�r regressionsmodellen
            double predict(const double input) const;   //genomf�r en prediction fr�n input v�rderna >> main


        private:
            Vector<double> myInput;
            Vector<double> myOutput;
            Vector<double>myOrder;
            double myBias;
            double myWeight;

            void optimize(const double input, const double reference, const double learningRate);
            void randomizer();
    }; // end class LinReg

 }// Namespace ml