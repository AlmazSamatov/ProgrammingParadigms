object Main {
    def whileLoop(condition: => Boolean)(body: => Unit): Unit =
        if (condition) { // while condition holds, we run body and execute recursively
            body
            whileLoop(condition)(body)
        }
   
    def main(args: Array[String]) {
        var fib = new Array[Int](8)
        fib(0) = 1
        fib(1) = 1
        println("First 8 Fibonacci numbers: ")
        
        var i = 2
        whileLoop (i < fib.length) {
            fib(i) = fib(i - 1) + fib(i - 2)
            i += 1
        }
        
        println(fib.mkString(", "))
    }
}