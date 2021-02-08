#include"fraction.h"
Fraction::Fraction():num(1),dnom(1)
{

}
Fraction::Fraction(int numo,int deno):num(numo),dnom(deno)
{

}
Fraction::Fraction(int val):num(val),dnom(val)
 {

 }
 Fraction Fraction::operator+(const Fraction& ref)
  {
    return Fraction((this->num*ref.dnom)+(this->dnom*ref.num),this->dnom*ref.dnom);
  }
  Fraction Fraction::operator-(const Fraction&)
  {
    return Fraction((this->num*ref.dnom)-(this->dnom*ref.nume),this->dnom*ref.dnom);
    Fraction Fraction::operator*(const Fraction&);
    Fraction Fraction::operator+(int val);
    {
      return Fraction(this->num+(val*this->dnom),this->dnom);
    }
  Fraction Fraction::operator-(int val)
  {
    return Fraction(this->num-(val*this->dnom),this->dnom);
    bool Fraction::operator==(const Fraction& ref)
    {
      return(num==ref.num)&&(dnom==ref.dnom);
    }
  }
  bool Fraction::operator<(const Fraction& ref)
  {
    return(num/dnom)<(ref.num/ref.dnom);
    bool Fraction::operator>(const Fraction& ref)
    {
      return(num/dnom)>(ref.num/ref.dnom);
    }
    Fraction Fraction::simplify()
    {
      for(int i=num/1;i>1;i--)
      {
        if((num%i==0)&&(dnom%i==0))
        {
          num/=i;
          dnom/=i;
        }
      }
    return Fraction(num,dnom);
    }
  }
  bool Fraction::isSimplest() const
  {
    return(dnom%num!=0);
  }
  void Fraction::dispay() const
  {
    std::cout<<num<<"/"<<dnom<<"\n";
  }
  std::ostream& operator<<(std::ostream&, const Fraction& ref)
  {
    return cout<<ref.num<<"/"<<ref.dnom;
  }