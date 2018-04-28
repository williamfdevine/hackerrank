/**
	@file preprocessor_solution.cpp
*/

#define toStr(val)	#val
#define foreach(v, i) for(int i = 0; i < n; i++)
#define io(vec) std::cin >> vec
#define FUNCTION(name, op) \
			void name(int& val_1, int& val_2)\
			{\
				val_1 = ((val_1 op val_2) ? (val_1) : (val_2));\
			}

#define INF (10000000)
