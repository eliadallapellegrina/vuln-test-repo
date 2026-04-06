#include "vuln_lib.h"

int process_data(const uint8_t *data, size_t size) {
    if (size < 4) return 0;
    if (data[0] == 'B' &&
        data[1] == 'U' &&
        data[2] == 'G' &&
        data[3] == '!')
    {
        return 1;
    }
    return 0;
}
