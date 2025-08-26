int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {

    double maxLength = 0.0;
    int maxArea = INT_MIN;

    for (auto& d : dimensions) {

        int length = d[0];
        int width = d[1];

        double diagonal = (length * length) + (width * width);
        int area = length * width;

        if (diagonal > maxLength) {
            maxArea = area;
            maxLength = diagonal;
        }
        else if (maxLength == diagonal) {
            maxArea = max(area, maxArea);
        }
    }
    return maxArea;
}