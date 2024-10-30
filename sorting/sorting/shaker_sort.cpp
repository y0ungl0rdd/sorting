template<typename T> void ShakerSort(int N, T* Array) {
	bool flag = 1;
	int i = 1;
	while (flag == 1) {
		flag = 0;
		while (i < N - 1) {
			if (Array[i] < Array[i - 1]) {
				flag = 1;
				T time = Array[i];
				Array[i] = Array[i - 1];
				Array[i - 1] = time;
			}
			i++;
		}
		if (flag != 0) {
			flag = 0;
			while (i >= 1) {
				if (Array[i] < Array[i - 1]) {
					flag = 1;
					T time = Array[i];
					Array[i] = Array[i - 1];
					Array[i - 1] = time;
				}
				i--;
			}
		}
	}
}