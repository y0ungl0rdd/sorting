template<typename T> int binary_search(int end, T* Array) {
	int begin = 0;
	T search = Array[end];
	while (Array[end] < search or Array[end - 1] > search) {
		int time = (end - begin) / 2;
		time += begin;
		if (Array[time] < search) {
			begin = time;
		}
		else
		{
			end = time;
		}
		if (end == 0) return end;
	}
	return end;
}



template<typename T> void binary_insertion_sort(int N, T* Array) {

	int key = 0;
	for (int i = 1; i < N; i++) {
		key = binary_search(i, Array);
		if (key == i) continue;
		T time = Array[key];
		T time2;
		Array[key] = Array[i];
		key++;
		while (key <= i) {
			time2 = Array[key];
			Array[key] = time;
			time = time2;
			key++;
		}
	}
}