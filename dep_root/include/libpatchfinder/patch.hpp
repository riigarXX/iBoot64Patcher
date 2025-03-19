// dep_root/include/libpatchfinder/patch.hpp

#ifndef PATCH_HPP
#define PATCH_HPP

#include <cstddef>

namespace tihmstar {
namespace patchfinder {

class patch {
public:
    // Constructor
    patch(size_t patchSize, void* patchData)
        : _patchSize(patchSize), _patch(patchData) {}

    // Public accessor methods
    size_t getPatchSize() const {
        return _patchSize;
    }

    void* getPatch() const {
        return _patch;
    }

private:
    size_t _patchSize;
    void* _patch;
};

} // namespace patchfinder
} // namespace tihmstar

#endif // PATCH_HPP