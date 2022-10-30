public boolean canJump(int[] nums) {
        int len = nums.length;
        boolean[] visited = new boolean[len];
        visited[0] = true;
        for (int i = 0; i < len; i++) {
            int steps = nums[i];
            if (visited[i] && steps > 0) {
                for (int j = 1; j <= steps && i + j < len; j++) {
                    visited[i + j] = true;
                }
            }
        }

        return visited[len - 1];
    }