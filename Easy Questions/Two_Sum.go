func twoSum(nums []int, target int) []int {
    cache := make(map[int]int)
   for x, num := range nums{
    dif := target - num
    if  val, found := cache[dif]; found{
        return []int{x, val}
    }
    cache[num] = x;
   }
   return nil
}
