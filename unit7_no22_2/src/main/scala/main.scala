def Visiting():() => Int = {
  var count: Int = 0;
  def counter(): Int = {
    count = count + 1;
    return count
  }
  return counter;
}

var counter: () => Int = Visiting();
println(counter());
println(counter());