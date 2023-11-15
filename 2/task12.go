func fill(maze [][]int) [][]int {
    for i := 0; i < len(maze); i++ {
        for j := 0; j < len(maze[i]); j++ {
            if maze[i][j] == -1 {
                for n := i - 1; n <= i + 1; n++ {
                    for m := j - 1; m <= j + 1; m++ {
                        if (n >= 0 && n < len(maze)) && (m >= 0 && m < len(maze[i])) {
                            if maze[n][m] != -1 {
                                maze[n][m] += 1
                            }
                        }
                    }
                }
            }
        }
    }
    return maze
}
