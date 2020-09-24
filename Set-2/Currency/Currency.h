class Currency {

  private:
    int m_rupees, m_paise;
  public:
    Currency();
    Currency(int,int);
    Currency(int);
    Currency operator + (const Currency &);
    Currency operator - (const Currency &);
    Currency operator + (int);
    bool operator == (const Currency &);
    Currency& operator++();
    Currency operator ++ (int);
    Currency operator < (int);
    Currency operator > (int);
    void display();
    int getRup();
};

