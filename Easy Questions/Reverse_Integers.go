func reverse(x int) int {
    sign := 1    
    if x < 0 {
        sign = -1
        x = -x
    }

    res := 0
    for x != 0 {
        res = res*10 + x%10
        x/=10
    }
    res *= sign
    if res < math.MinInt32 || res > math.MaxInt32 {
        return 0
    }
    return res
}
