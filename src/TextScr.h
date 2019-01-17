#pragma once
#include <stdint.h>
#include "WindowsWrapper.h"
#include "CommonDefines.h"

struct TEXT_SCRIPT
{
	//Path (reload when exit teleporter menu/inventory)
	char path[PATH_LENGTH];
	
	//Script buffer
	int size;
	char *data;
	
	//Mode (ex. NOD, WAI)
	char mode;
	
	//Flags
	char flags;
	
	//Current positions (read position in buffer, x position in line)
	int p_read;
	int p_write;
	
	//Current line to write to
	int line;
	
	//Line y positions
	int ypos_line[4];
	
	//Event stuff
	int wait;
	int wait_next;
	int next_event;
	
	//Yes/no selected
	char select;
	
	//Current face
	int face;
	int face_x;
	
	//Current item
	int item;
	int item_y;
	
	//Text rect
	RECT rcText;
	
	//???
	int offsetY;
	
	//NOD cursor blink
	uint8_t wait_beam;
};

bool InitTextScript2();
void EndTextScript();
void EncryptionBinaryData2(uint8_t *pData, int size);
