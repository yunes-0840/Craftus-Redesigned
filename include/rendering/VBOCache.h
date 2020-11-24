#ifndef VBOCACHE_H_INCLUDED
#define VBOCACHE_H_INCLUDED
#pragma once

#include <stdbool.h>
#include <stdio.h>

void VBOCache_Init();
void VBOCache_Free();

typedef struct {
	size_t size;
	void* memory;
} VBO_Block;

VBO_Block VBO_Alloc(size_t size);
void VBO_Free(VBO_Block block);

#endif  // !VBOCACHE_H_INCLUDED
