
/**/
static const double epsilon = 1e-5;

/**/
static double dabs( double val )
{
  return (val < 0 ? -val : val);
}

static double simpson( double(*f)(double), double a, double b )
{
  return ((b - a) / 6) * (f(a) + 4 * f((a + b) / 2) + f(b));
}

/**/
double integral( double(*f)(double), double a, double b )
{
  if( dabs(a - b) < epsilon )
    return simpson( f, a, b );
  double m = (a + b) / 2;
  return integral( f, a, m ) + integral( f, m, b );
}

