object Main {
  
  var limit = 50

  def makeMultiplier(more: Int) = (x: Int) => x * more

  def cutter(x: Int): Int = if (limit < x) limit else x 
  
  def remover(x: Int): Boolean = limit < x 
  
  def main(args: Array[String]): Unit = {
    
    val random = scala.util.Random
    var list = List.fill(22)(random.nextInt(10) - 5) // create list with elements from [-5;5] range
    
    val multiplier = makeMultiplier(limit) // create closure with limit parameter, 
                                          //means that it will multiply each external variable to limit
    
    println("Original list: ") // print original list
    println(list)
    
    // apply steps for different limit values 
    for(i <- 0 to 4){
      var temp_list = list
      temp_list = temp_list.map(multiplier(_))
      temp_list = temp_list.map(cutter(_))
      temp_list.filter(remover(_))
    
      println("Сhanged list with limit = " + limit + ": ")
      println(temp_list) 
      limit = random.nextInt(50) + 50; // generate next limit from [50; 100] range
    }
  }
}