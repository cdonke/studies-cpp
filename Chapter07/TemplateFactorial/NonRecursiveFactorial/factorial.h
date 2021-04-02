template <typename T>
class Factorial {
public:
	long Calculate(T i);
};

template <typename T>
long Factorial<T>::Calculate(T n) {
	unsigned long fact = n;

	while (n > 1) {
		fact *= --n;
	}

	return fact;
}