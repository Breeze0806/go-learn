package golang

func islandPerimeter(grid [][]int) int {
	if len(grid) == 0 && len(grid[0]) == 0 {
		return 0
	}
	ans := 0
	l := len(grid)
	r := len(grid[0])
	for i := 0; i < l; i++ {
		if i == 0 {
			for j := 0; j < r; j++ {
				ans += grid[i][j]
			}
			if i == l-1 {
				for j := 0; j < r; j++ {
					ans += grid[i][j]
				}
			}
		} else {
			for j := 0; j < r; j++ {
				if grid[i-1][j] != grid[i][j] {
					ans++
				}
			}
			if i == l-1 {
				for j := 0; j < r; j++ {
					ans += grid[i][j]
				}
			}
		}
	}
	//fmt.Println(ans)
	for i := 0; i < r; i++ {
		if i == 0 {
			for j := 0; j < l; j++ {
				ans += grid[j][i]
			}
			if i == r-1 {
				for j := 0; j < l; j++ {
					ans += grid[j][i]
				}
			}
		} else {
			for j := 0; j < l; j++ {
				if grid[j][i-1] != grid[j][i] {
					ans++
				}
			}
			if i == r-1 {
				for j := 0; j < l; j++ {
					ans += grid[j][i]
				}
			}
		}
		//fmt.Println(i,ans)
	}
	//fmt.Println(ans)
	return ans

}
