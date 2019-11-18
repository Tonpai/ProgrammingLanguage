// Programming Langauge
object ProgLan{
  def exec(x:(Int, Int)=>Int, y: Int): (Int) => Int = {
    return (z) => x(y, z);
  }
  def main(args: Array[String]): Unit = {
    val addFunc = (x:Int, y:Int) => x+y;
    val add2 = exec(addFunc, 2);
    val temp = add2(3);
    println(temp);
  }
}