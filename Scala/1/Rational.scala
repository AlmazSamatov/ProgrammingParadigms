class Rational(var n: Int, var d: Int) { // primary constructor is in the class signature, it performs function of default constructor
  require(d != 0) // it executed when d equal to 0 and if d is equal to 0 then it throws an IllegalArgumentException,
                  // it is a precondition, because we can not divide to 0
  private val g = gcd(n.abs, d.abs) // greatest common divider of numerator and denominator
  val numer: Int = n / g // numerator of this rational number in simplified form
  val denom: Int = d / g // denominator of this rational number in simplified form
  def this(n: Int) = this(n, 1) // constructor that takes only numerator and by logic denominator equals to 1

  // we need second versions of +, -, /, *, because they take as input integer, i.e. numerator only
  def + (that: Rational): Rational = new Rational(
    numer*that.denom+that.numer*denom,denom*that.denom)
  def + (i: Int): Rational = new Rational(numer + i * denom, denom)
  def - (that: Rational): Rational =
    new Rational(numer*that.denom-that.numer*denom,denom*that.denom)
  def - (i: Int): Rational = new Rational(numer - i * denom, denom)
  def * (that: Rational): Rational =
    new Rational(numer*that.numer,denom*that.denom)
  def * (i: Int): Rational = new Rational(numer * i, denom)
  def / (that: Rational): Rational =
    new Rational(numer*that.denom,denom*that.numer)
  def / (i: Int): Rational = new Rational(numer, denom * i)
  def == (that: Rational): Boolean = numer == that.numer && denom == that.denom
  override def toString: String = numer + "/" + denom // we override toString method of default Object class

  private def gcd(a: Int, b: Int): Int = if (b==0) a else gcd(b,a%b)
}