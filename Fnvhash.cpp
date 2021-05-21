#include "Fnvhash.h"
std::size_t alyx::Fnv_hash::__hash(const char* first, std::size_t length) {
	std::size_t result = static_cast<std::size_t>(14695981039346656037ULL);

	for (; length > 0; --length) {
		result ^= static_cast<unsigned long long>(*first);
		first++;
		result *= 1099511628211ULL;
	}
	return result;
}
std::size_t alyx::Fnv_hash::hash(void* first, std::size_t length) {
	return __hash(reinterpret_cast<char*>(first), length);
}

