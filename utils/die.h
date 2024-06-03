#include <stdlib.h>

class Die {
   private:
	int faces;

   public:
	Die() {
		faces = 6;
	}

	Die(int n) {
		faces = n;
	}

	int get_faces() {
		return faces;
	}

	int roll() {
		return rand() % faces + 1;
	}
};