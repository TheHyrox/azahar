// Copyright 2024-2026 Citra Emulator Project / Azahar Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the misc/licenses/gplv2.txt file included.

#pragma once

#include <string>

namespace Common {

constexpr char help_string[] =
    "Usage: {} [options] <file path>\n"
    "-c  [path]                  Z3DS compress a ROM located at the given path\n"
    "                              (optionally provide '-o [path]' for output directory)\n"
    "-d, --dump-video [path]     Dump video recording of emulator playback to the given file path\n"
    "-f, --fullscreen            Start in fullscreen mode\n"
    "-g, --gdbport [port]        Enable gdb stub on the given port\n"
    "-h, --help                  Display this help and exit\n"
    "-i, --install [path]        Install a CIA file at the given path\n"
    "-p, --movie-play [path]     Play a TAS movie located at the given path\n"
    "-r, --movie-record [path]   Record a TAS movie to the given file path\n"
    "-a, --movie-record-author [author]   Set the author for the recorded TAS movie (to be used "
    "alongside --movie-record)\n"
#ifdef ENABLE_ROOM
    "    --room                  Utilize dedicated multiplayer room functionality (equivalent to "
    "the old citra-room executable)\n"
#endif
    "-v, --version               Output version information and exit\n"
    "-w, --windowed              Start in windowed mode\n"
    "-x  [path]                  Decompress a Z3DS compressed ROM located at the given path\n"
    "                              (optionally provide '-o [path]' for output directory)\n"
    "\nNexus Gaming Launcher Display & Emulation Options:\n"
    "-l, --layout [mode]         Screen layout: default, top-bottom, single, single-top,\n"
    "                              single-bottom, large, hybrid, side-by-side, separate, custom\n"
    "    --small-screen-pos [p]  Small screen position: top-right, middle-right, bottom-right,\n"
    "                              top-left, middle-left, bottom-left, above, below\n"
    "    --large-proportion [f]  Large screen proportion (1.0 - 16.0)\n"
    "    --swap-screens [bool]   Swap top and bottom screens (0/1, true/false)\n"
    "-u, --upright [bool]        Rotate screens upright / book-style (0/1, true/false)\n"
    "    --rotation [deg]        Screen rotation (0, 90, 180, 270)\n"
    "    --gap [px]              Gap between screens in pixels (0 - 128)\n"
    "-s, --scale [1..10]         Internal 3D resolution scale factor (0=Auto, 1=240p .. 10=2400p)\n"
    "    --graphics-api [api]    Graphics backend: opengl, vulkan, software\n"
    "    --filter [mode]         Texture filter: none, anime4k, bicubic, scaleforce, xbrz, mmpx,\n"
    "                              linear, nearest\n"
    "    --linear-filter [bool]  Linear display filtering (0/1, true/false)\n"
    "    --integer-scale [bool]  Integer pixel scaling (0/1, true/false)\n"
    "    --aspect-ratio [ratio]  Aspect ratio: default, 16:9, 4:3, 21:9, 16:10, stretch\n"
    "    --vsync [bool]          Enable VSync (0/1, true/false)\n"
    "    --3d-mode [mode]        Stereoscopic 3D mode: off, sbs, sbs-full, anaglyph, interlaced\n"
    "    --3d-depth [0..100]     Stereoscopic 3D depth percentage (0 - 100)\n"
    "    --cpu-clock [5..400]    CPU clock speed percentage (5 - 400)\n"
    "    --new-3ds [bool]        New 3DS hardware mode (0/1, true/false)\n"
    "    --audio-stretching [b]  Enable audio stretching (0/1, true/false)\n"
    "    --volume [0..100]       Audio volume percentage (0 - 100)";

} // namespace Common
