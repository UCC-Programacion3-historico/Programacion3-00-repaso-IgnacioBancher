#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H

template class <class T>

class Calculadora {
private:
    T A;
    T B;
public:
    const T &getA() const {
        return A;
    }

public:
    void setB(const T &B) {
        Calculadora::B = B;
    }

    void setA(const T &A);

public:
    const T &getB() const;

}

public:
    T sumar(){
        return A + B;
    }
    T restar(){
        return A - B;
    }T multiplicar(){
        return A * B;
    }T dividir(){
        return A / B;
    }
};


#endif //REPASO_CALCULADORA_H
