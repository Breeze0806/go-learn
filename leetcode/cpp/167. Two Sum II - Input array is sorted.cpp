func twoSum(numbers []int, target int) []int {
    m := make(map[int]int,len(numbers))
    for i,v :=range numbers{
        m[v] = i
    }
    var ans []int
    for i,v :=range numbers{
        if x,ok := m[target -v]; ok{
            if x != i{
                if x < i{
                    x,i = i,x
                }
                ans = append(ans,i+1)
                ans = append(ans,x+1)
                return ans
            }
        }

    }
    return ans
}