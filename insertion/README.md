# Insertion Sort

## Overview
Insertion Sort builds a sorted portion of the array by inserting each element at the correct position relative to the already-sorted portion.

## How It Works
1. Starts with an unsorted list.
2. Iterates through each element, placing it in the correct position within the sorted part of the list.

## Time Complexity
- **Best Case (Ω)**: \(O(n)\) (when array is already sorted)
- **Average Case (Θ)**: \(O(n^2)\)
- **Worst Case (O)**: \(O(n^2)\)

## Space Complexity
- **Space Complexity**: \(O(1)\) (in-place)

## Best Use Cases
- Small arrays
- Partially sorted data
- Adaptive; often used for small parts of larger algorithms
