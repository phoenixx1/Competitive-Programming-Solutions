# This is my solution for AlgoDaily problem Array Intersection
# Located at https://algodaily.com/challenges/array-intersection

def intersection(nums1, nums2):
    x = set(nums1)
    y = set(nums2)
    return list(x.intersection(y))