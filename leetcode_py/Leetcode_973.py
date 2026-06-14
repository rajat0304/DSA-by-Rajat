class Solution:
    def kClosest(self, points, k):
        points.sort(key=lambda p: p[0] * p[0] + p[1] * p[1])
        return points[:k]
