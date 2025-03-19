// dep_root/include/libpatchfinder/patch.hpp
#ifndef PATCH_HPP
#define PATCH_HPP

namespace tihmstar {
    namespace patchfinder {
        class patch {
            size_t _patchSize;
            const void *_patch;
        public:
            inline size_t getPatchSize() const { return _patchSize; }
            inline const void *getPatch() const { return _patch; }
        };
    }
}

#endif // PATCH_HPP