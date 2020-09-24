class Complex {

    private:
        double m_real,m_imag;
    public:
        Complex();
        Complex(int,int);
        Complex(int);
        Complex operator +(const Complex &);
        Complex operator -(const Complex &);
        Complex operator *(const Complex &);
        Complex& operator ++(); //pre increment
        Complex operator ++(int); //post increment
        bool operator == (const Complex &);
        void display();
        float getreal();
        float getimag();
};


