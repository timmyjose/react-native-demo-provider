#include "react-native-demo-provider.h"

namespace demoprovider {
	double multiply(double a, double b) {
		return a * b;
	}

	double add(double a, double b) {
		return rust_add(a, b);
	}
}
