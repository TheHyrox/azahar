// Copyright 2026 Citra Emulator Project / Azahar Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the misc/licenses/gplv2.txt file included.

#undef _UNICODE
#include <getopt.h>
#ifndef _MSC_VER
#include <unistd.h>
#endif

#include "citra_cli/citra_cli.h"
#include "citra_cli/compression_cli.h"

namespace CitraCLI {

bool CheckForOptions(const char* optstring, int argc, char* argv[]) {
    for (int arg_i = 1; arg_i < argc; ++arg_i) {
        const char* arg = argv[arg_i];
        if (!arg || arg[0] != '-' || arg[1] == '\0' || arg[1] == '-') {
            continue;
        }
        for (size_t i = 0; optstring[i] != '\0'; ++i) {
            if (optstring[i] == ':') {
                continue;
            }
            if (arg[1] == optstring[i]) {
                return true;
            }
        }
    }
    return false;
}

int ParseCommand(int argc, char* argv[]) {
    if (CheckForOptions(compression_ops_optstring, argc, argv)) {
        return ParseCompressionCommand(argc, argv);
    }
}

} // namespace CitraCLI
