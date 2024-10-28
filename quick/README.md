# Quick Sort

## Overview
Quick Sort is a divide-and-conquer algorithm that selects a pivot element, partitions the array around the pivot, and recursively sorts the partitions.

## How It Works
1. Selects a pivot element.
2. Partitions elements around the pivot.
3. Recursively applies quicksort to the partitions.

## Time Complexity
- **Best Case (Ω)**: \(O(n log n)\)
- **Average Case (Θ)**: \(O(n log n)\)
- **Worst Case (O)**: \(O(n^2)\) (with poor pivot selection)

## Space Complexity
- **Space Complexity**: \(O(log n)\) (in-place, recursion stack)

## Best Use Cases
- Fast general-purpose sort
- Large datasets
- Use median-of-three pivot to avoid worst-case scenarios
