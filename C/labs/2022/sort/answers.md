# Sort challenge

Using the sorting alrogithms and the files provided, find out which sort algorithm is used in each of the programs.

Use `time ./sortX random5000.txt` to run the code and check the time it took.

## Results

### sort1 uses: Bubble Sort

**Times:**

- random5000 - 0.086s
- random10000 - 0.363s
- random50000 - 7.723s

- reversed5000 - 0.0113s
- reversed10000 - 0.290s
- reversed50000 - 5.641s

- sorted5000 - 0.025s
- sorted10000 - 0.079s
- sorted50000 - 0.805s

#### How do you know?:

In best case scenarios Bubble sort has a Big O of Omega(n), and considering the times, it was the fastest algorithm for sorted files.

### sort2 uses: Merge Sort

**Times:**

- random5000 - 0.044s
- random10000 - 0.066s
- random50000 - 0.735s

- reversed5000 - 0.043s
- reversed10000 - 0.106s
- reversed50000 - 0.908s

- sorted5000 - 0.056s
- sorted10000 - 0.072s
- sorted50000 - 0.901s

#### How do you know?:

Since the Big O notation is O(n log n) for best and worst case scenarios, and this was the fastest algorithm for bigger files
this is the Merge sort algorithm.

### sort3 uses: Selection Sort

**Times:**

- random5000 - 0.068s
- random10000 - 0.164s
- random50000 - 3.518s

- reversed5000 - 0.049s
- reversed10000 - 0.210s
- reversed50000 - 3.498s

- sorted5000 - 0.099s
- sorted10000 - 0.0154s
- sorted50000 - 3.364s

#### How do you know?:

Best case scenarios and worst case scenarios are the same regarding Big O Notation.
Considering the times it took to run, it's closer to the Big O notation of Selection Sort.
