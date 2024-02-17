#include <stdint.h>

namespace android {
    extern "C" void _ZN7android13GraphicBufferC2Ejjij(uint32_t inWidth, uint32_t inHeight, int inFormat, uint32_t inUsage);

    extern "C" void _ZN7android13GraphicBufferC2Ev(uint32_t inWidth, uint32_t inWidth, int inFormat, uint32_t inUsage) {
        _ZN7android13GraphicBufferC2Ejjij(inWidth, inHeight, inFormat, inUsage);
    }
}
