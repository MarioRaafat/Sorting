# Radix Sort

## Overview
Radix Sort sorts numbers digit by digit, starting from the least significant digit, using Counting Sort for each digit.

## How It Works
1. Sorts each digit from least significant to most significant.
2. Uses a stable sort (Counting Sort) for each digit.
3. Repeats until all digits are processed.

## Time Complexity
- **Best Case (Ω)**: \(O(d * (n + k))\)
- **Average Case (Θ)**: \(O(d * (n + k))\)
- **Worst Case (O)**: \(O(d * (n + k))\), where \(d\) is the number of digits

## Space Complexity
- **Space Complexity**: \(O(n + k)\) (not in-place)

## Best Use Cases
- Sorting integers with known number of digits
- Fixed-width character strings
