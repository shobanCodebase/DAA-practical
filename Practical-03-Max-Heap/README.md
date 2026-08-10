## Summary

Max Heap Sort is a comparison-based sorting algorithm that uses the **Max Heap** data structure to arrange elements in ascending order. A Max Heap is a complete binary tree in which every parent node is greater than or equal to its children. In an array representation, the heap can be efficiently maintained using the `maxHeapify()` operation.

The Heap Sort algorithm works in two main stages. First, the input array is converted into a **Max Heap**, placing the largest element at the root. The root element is then swapped with the last element of the array, reducing the size of the heap. The remaining elements are rearranged using the `maxHeapify()` operation to restore the Max Heap property. This process is repeated until the entire array is sorted.

Building a Max Heap takes **O(n)** time, while each `maxHeapify()` operation takes **O(log n)** time. As a result, Heap Sort has a consistent time complexity of **O(n log n)** in the best, average, and worst cases. It is also an **in-place sorting algorithm**, requiring only **O(1) auxiliary space** apart from the recursion stack used by `maxHeapify()`.

Heap Sort provides guaranteed **O(n log n)** performance and does not require an additional array like Merge Sort. However, unlike Merge Sort and Insertion Sort, Heap Sort is generally **not stable**. Its performance is also often less favorable in practice than Quick Sort because of poorer cache locality, even though its worst-case complexity is guaranteed to remain O(n log n).

---

## Conclusion

This practical demonstrates the implementation and analysis of the **Max Heap Sort algorithm**, including Max Heap construction, heapify operations, element extraction, and practical execution-time measurement.

* **Max Heap** provides an efficient way to organize elements based on the heap property.
* **Heapify** maintains the Max Heap structure after elements are rearranged.
* **Build Max Heap** can be performed in **O(n)** time.
* **Heap Sort** provides guaranteed **O(n log n)** time complexity in all cases.
* **Heap Sort** is an in-place sorting algorithm with **O(1) auxiliary space**, excluding recursion stack space.
* **Heap Sort is not stable**, meaning equal elements may not preserve their original relative order.

Overall, Max Heap Sort is an important sorting technique for understanding **heap data structures, priority-based processing, and algorithmic complexity**. Its guaranteed O(n log n) worst-case performance makes it useful when predictable performance is required. Understanding Heap Sort also provides a foundation for studying other heap-based concepts such as **Priority Queues, Min Heaps, Max Heaps, and Heap-based algorithms**.
