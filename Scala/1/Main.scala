object Main {
  def main(args: Array[String]) {
    val a = new Rational(4, 12)
    val b = new Rational(1, 3)

    if(a - b == new Rational(0))
      println("- with Rational object works correct")
    if(a + b == new Rational(2, 3))
      println("+ with Rational object works correct")
    if(a / b == new Rational(1))
      println("/ with Rational object works correct")
    if(a * b == new Rational(1, 9))
      println("* with Rational object works correct")

    if(a - 1 == new Rational(-2, 3))
      println("- with integer works correct")
    if(a + 1 == new Rational(4, 3))
      println("+ with integer works correct")
    if(a / 3 == new Rational(1, 9))
      println("/ with integer works correct")
    if(a * 3 == new Rational(1))
      println("* with integer works correct")
  }
}
