bool is_can_exit_from_maze(std::vector<std::string>maze, int row, int col) {
	if (maze[row][col] == '#') {
    	return false;
    } 
    if (maze[row][col] == 'E') {
    	return true;
    }   
    if (maze[row][col] == '+') {
    	return false;
    }

    maze[row][col] = '+';
    
    return is_can_exit_from_maze(maze, row - 1, col) or
    	   is_can_exit_from_maze(maze, row + 1, col) or 
           is_can_exit_from_maze(maze, row, col + 1) or 
           is_can_exit_from_maze(maze, row, col - 1);
}
