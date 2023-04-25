void partition(int a[], int l, int r, int &i, int &j) {
  // Pick a pivot element
  int pivot = a[l];

  // Initialize i and j
  i = l + 1;
  j = r;

  // Iterate through the array
  while (i <= j) {
    // If the current element is less than the pivot,
    // swap it with the element at index i and increment i
    if (a[i] < pivot) {
      std::swap(a[i], a[l]);
      i++;
    }

    // If the current element is greater than the pivot,
    // swap it with the element at index j and decrement j
    else if (a[i] > pivot) {
      std::swap(a[i], a[j]);
      j--;
    }

    // If the current element is equal to the pivot,
    // increment i
    else {
      i++;
    }
  }

  // Set i and j to the start and end of the smaller and greater subarrays respectively
  i--;
  j++;
}
