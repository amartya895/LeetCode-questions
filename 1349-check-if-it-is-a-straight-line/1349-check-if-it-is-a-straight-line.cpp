class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int row = coordinates.size();
        if (row < 2) {
            // If there are fewer than 2 points, it's considered a straight line.
            return true;
        }
        
        // Calculate the slope between the first two points.
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        int x1 = coordinates[1][0];
        int y1 = coordinates[1][1];
        double slope = (y1 - y0) / (double)(x1 - x0);

        bool isVertical = true;
        for (int i = 1; i < row; i++) {
            if (coordinates[i][0] != x0) {
                isVertical = false;
                break;
            }
        }
        
        // Check if all other points have the same y-coordinate (horizontal line).
        bool isHorizontal = true;
        for (int i = 1; i < row; i++) {
            if (coordinates[i][1] != y0) {
                isHorizontal = false;
                break;
            }
        }
        
        if (isVertical || isHorizontal)
        {
            return true;
        }
        
        // Check if all other points lie on the same line.
        for (int i = 2; i < row; i++) {
            int xi = coordinates[i][0];
            int yi = coordinates[i][1];
            
            // Calculate the slope between the current point and the first point.
            double currentSlope = (yi - y0) / (double)(xi - x0);
            
            // If the slopes are not equal, it's not a straight line.
            if (currentSlope != slope) {
                return false;
            }
        }
        
        // If all points are on the same line, it's a straight line.
        return true;
    }
};
