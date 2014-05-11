
/**/
static const double epsilon = 1e-5;

/**/
double integral( double(*f)(double), double a, double b )
{
  if( b - a < epsilon )
    return ((b - a) / 6) * (f(a) + 4*f((a+b)/2) + f(b));
  double m = (a + b) / 2.0;
  return integral( f, a, m ) + integral( f, m, b );
}

