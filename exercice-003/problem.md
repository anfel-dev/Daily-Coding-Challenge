
# Exercise 03 — Move All Zeros to the End

**Difficulty:** Medium

**Topics:** Arrays, Two Pointers, In-place Algorithm

## Problem Description

Given an integer array, move all zeros to the end of the array while maintaining the relative order of all non-zero elements.

You must modify the original array without creating another array.

## Examples

### Example 1
Input:
`[0, 1, 0, 3, 12]`

Output:
`[1, 3, 12, 0, 0]`

### Example 2
Input:
`[0, 0, 1]`

Output:
`[1, 0, 0]`

### Example 3
Input:
`[1, 2, 3]`

Output:
`[1, 2, 3]`

## Constraints

- 1 <= n <= 10^5
- Elements can be positive, negative, or zero.
- The original array must be modified.
- No additional array is allowed.

## Requirements

- Preserve the relative order of non-zero elements.
- Move all zeros to the end.
- Use an in-place algorithm.

## Expected Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)
