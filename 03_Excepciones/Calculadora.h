#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H

template class <class T>

class Calculadora {
private:
    T A;
public:
    const T &getA() const {
        return A;
    }

    void setA(const T &A) {
        Calculadora::A = A;
    }

private:
    T B;
public:
    const T &getB() const {
        return B;
    }

    void setB(const T &B) {
        Calculadora::B = B;
    }
};
public:
T sumar(){
    return A + B;
}
T restar(){
    return A - B;
}T multiplicar(){
    return A * B;
}T dividir(){
    if(B==0);
       throw 3;
    return A/B;

}
};

#endif //REPASO_CALCULADORA_H
