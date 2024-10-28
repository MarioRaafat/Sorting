# Counting Sort

## Overview
Counting Sort counts occurrences of each value in a range, calculates positions, and outputs elements in sorted order.

## How It Works
1. Counts occurrences of each element.
2. Calculates cumulative counts.
3. Places elements in sorted order based on counts.

## Time Complexity
- **Best Case (Ω)**: \(O(n + k)\)
- **Average Case (Θ)**: \(O(n + k)\)
- **Worst Case (O)**: \(O(n + k)\), where \(k\) is the range of input values

## Space Complexity
- **Space Complexity**: \(O(n + k)\) (not in-place)

## Best Use Cases
- Small integer ranges (low \(k\))
- Sorting integers or characters
