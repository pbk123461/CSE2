#pragma once
#include <stdint.h>

bool GetCompileVersion(int *v1, int *v2, int *v3, int *v4);
bool CheckFileExists(const char *name);
bool IsShiftJIS(uint8_t c);
