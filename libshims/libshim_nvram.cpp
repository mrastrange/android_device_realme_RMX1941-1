#include <stdio.h>
#include <string.h>

extern "C" bool _ZN7android4base10StartsWithERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKc(const std::string& s,
    const std::string& prefix) {
        return strncmp(s.c_str(), prefix.c_str(), prefix.size()) == 0;
}
