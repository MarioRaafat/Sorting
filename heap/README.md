# Heap Sort

## Overview
Heap Sort converts the array into a max heap, repeatedly extracts the maximum element from the heap, and moves it to the end of the array.

## How It Works
1. Builds a max heap.
2. Extracts maximum elements and places them in sorted order.
3. Continues until the heap is empty.

## Time Complexity
- **Best Case (Ω)**: \(O(n log n)\)
- **Average Case (Θ)**: \(O(n log n)\)
- **Worst Case (O)**: \(O(n log n)\)

## Space Complexity
- **Space Complexity**: \(O(1)\) (in-place)

## Best Use Cases
- Systems programming
- Memory constraints where stable sorting isn’t required
