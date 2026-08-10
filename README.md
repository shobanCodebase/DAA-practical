#  DSA Algorithms in C++

A collection of fundamental **Data Structures and Algorithms (DSA)** implementations in C++, developed for learning, practice, and understanding algorithmic complexity.

---

## 📂 Project Structure

```text
DSA-Cpp/
│
├── README.md
│
├── sorting/
│   ├── README.md
│   ├── bubble_sort.cpp
│   ├── insertion_sort.cpp
│   ├── selection_sort.cpp
│   ├── merge_sort.cpp
│   └── quick_sort.cpp
│
├── searching/
│   ├── README.md
│   ├── linear_search.cpp
│   └── binary_search.cpp
│
└── .gitignore
```

---

# 📚 Algorithms Covered

## 🔄 Sorting Algorithms

The `sorting` folder contains implementations of:

- Bubble Sort
- Insertion Sort
- Selection Sort
- Merge Sort
- Quick Sort

### Time Complexity

| Algorithm | Best | Average | Worst |
|-----------|------|---------|-------|
| Bubble Sort | O(n)¹ | O(n²) | O(n²) |
| Insertion Sort | O(n) | O(n²) | O(n²) |
| Selection Sort | O(n²) | O(n²) | O(n²) |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) |

> **¹** O(n) best case applies to an optimized Bubble Sort with a `swapped` flag.

👉 **[View Sorting Algorithms →](./sorting/README.md)**

---

## 🔍 Searching Algorithms

The `searching` folder contains implementations of:

- Linear Search
- Binary Search

### Time Complexity

| Algorithm | Best | Average | Worst |
|-----------|------|---------|-------|
| Linear Search | O(1) | O(n) | O(n) |
| Binary Search | O(1) | O(log n) | O(log n) |

👉 **[View Searching Algorithms →](./searching/README.md)**

---

# 📊 Overall Complexity Comparison

| Algorithm | Type | Best Case | Average Case | Worst Case |
|-----------|------|-----------|--------------|------------|
| Linear Search | Searching | O(1) | O(n) | O(n) |
| Binary Search | Searching | O(1) | O(log n) | O(log n) |
| Bubble Sort | Sorting | O(n)¹ | O(n²) | O(n²) |
| Insertion Sort | Sorting | O(n) | O(n²) | O(n²) |
| Selection Sort | Sorting | O(n²) | O(n²) | O(n²) |
| Merge Sort | Sorting | O(n log n) | O(n log n) | O(n log n) |
| Quick Sort | Sorting | O(n log n) | O(n log n) | O(n²) |

---

# 🎯 Overall Summary

This repository demonstrates the implementation of fundamental **searching and sorting algorithms using C++**.

The searching section covers Linear Search and Binary Search, while the sorting section covers Bubble Sort, Insertion Sort, Selection Sort, Merge Sort, and Quick Sort.

Each implementation focuses on understanding the algorithm, analyzing its time and space complexity, and measuring practical execution time using the C++ `<chrono>` library.

---

# 📌 Overall Conclusion

Searching and sorting algorithms are fundamental components of computer science and play an important role in efficient data processing.

**Linear Search** provides a simple solution for unsorted data, while **Binary Search** offers significantly better performance when the data is sorted. For sorting, simple algorithms such as Bubble Sort, Insertion Sort, and Selection Sort are useful for learning and small datasets, whereas Merge Sort and Quick Sort are more suitable for larger datasets.

The project highlights that there is no single algorithm that is optimal for every situation. The appropriate algorithm depends on factors such as input size, whether the data is sorted, memory constraints, stability requirements, and expected performance.

---

# 🛠️ Technologies Used

- C++
- `<iostream>`
- `<chrono>`
- Standard C++ functions

---

# 📚 Learning Outcomes

Through this project, I learned:

- Fundamental searching algorithms
- Fundamental sorting algorithms
- Time and space complexity
- Best, average, and worst-case analysis
- Divide and Conquer
- Stable vs. unstable sorting
- Practical execution-time measurement
- Organizing DSA implementations in a structured GitHub repository

---

## 👨‍💻 Author

**S Shoban**

GitHub: [@shobanCodebase](https://github.com/shobanCodebase)