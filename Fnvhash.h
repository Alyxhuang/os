#include<cstddef>
namespace alyx {
	class Fnv_hash {
			static std::size_t __hash(const char* first, std::size_t length);
		public:
			static std::size_t hash(void* first, std::size_t length);
	};
}

