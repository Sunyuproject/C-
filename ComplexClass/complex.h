#ifndef  __COMPLEX__
#define  __COMPLEX__


class complex
{
    public:
                
        complex(double r=0,double i=0) : re(r),im(i)
         {}
         double real() const { return re; }
         double img()  const { return im; }
         complex&  operator += (const complex&);

    private:
        double re,im;
        friend complex&  __doapl(complex*,const complex&);
};

inline complex& __doapl(complex* ths, const complex& r)
{
       ths->re += r.re;
       ths->im += r.im;
       return *ths;
}

inline complex& complex::operator += (const complex& r)
{
        return __doapl (this ,r);
}


inline complex operator + (const complex& x,const complex& y)
{
    return complex(x.real()+y.real(),+x.img()+y.img());
}
inline complex operator + (const complex& x,double y)
{
    return complex(x.real()+y,x.img());
}
inline complex operator + (double x,const complex& y)
{
    return complex(x+y.real(),y.img());
}


#endif



