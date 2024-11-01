template <typename type> int part(type* array, int low, int high) {
	int t = array[high];
	int i = low - 1;
	
	for (int j = low; j <= high - 1; j++) {
		if (array[j] < t) {
			i++;
			int copy = array[i];
			array[i] = array[j];
			array[j] = copy;
		}
	}

	int copy = array[i + 1];
	array[i + 1] = array[high];
	array[high] = copy;
	return i + 1;
}

template <typename type> void QuickSort(type* array, int low, int high) {
	if (low < high) {
		int x = part(array, low, high);

		QuickSort(array, low, x - 1);
		QuickSort(array, x + 1, high);
	}
}