#ifndef __FRACTION_H
#define __FRACTION_H
#include<iostream>
class Fraction
{
  int num;
  int dnom;
  public:
  Fraction();
  Fraction(int,int);
  Fraction(int);
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  Fraction operator+(int);
  Fraction operator-(int);
  bool operator==(const Fraction&);
  bool operator<(const Fraction&);
  bool operator>(const Fraction&);
  Fraction simplify();
  bool isSimplest() const;
  void dispay() const;
  friend std::ostream& operator<<(const std::ostream&, const Fraction&);
};

#endif