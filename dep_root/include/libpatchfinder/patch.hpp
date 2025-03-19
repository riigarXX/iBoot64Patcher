// dep_root/include/libpatchfinder/patch.hpp
#ifndef PATCH_HPP
#define PATCH_HPP

namespace tihmstar {
    namespace patchfinder {
        class patch {
            mutable size_t _patchSize;  // Se vuelve mutable
            mutable const void *_patch; // Se vuelve mutable
        public:
            inline size_t getPatchSize() const { return _patchSize; }
            inline const void *getPatch() const { return _patch; }
        };
    }
}

#endif // PATCH_HPP
