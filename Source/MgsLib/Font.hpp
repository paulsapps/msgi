#pragma once

#include "Psx.hpp"
#include "MgsFunction.hpp"

void DoFontTests();

struct Font
{
    BYTE field_0_max_line_w;
    BYTE field_1_max_lines_y;
    BYTE field_2_char_spacing;
    BYTE field_3_line_spacing;
    BYTE field_4;
    BYTE field_5;
    BYTE field_6_flags;
    BYTE field_7_out_max_width;
    PSX_RECT* field_8_pRect;
    PSX_RECT field_C_rect;
    BYTE* field_14_pPixelData;
    WORD field_18_wh;
    WORD field_1A;
    WORD field_1C_wh;
    WORD field_1E_line_ypos;
    WORD field_20_vramx;
    WORD field_22_vramy;
    WORD field_24_bitDepth;
    WORD field_26;
    WORD* field_28_palette_ptr_sys_allocated; // Palt
};
MGS_ASSERT_SIZEOF(Font, 0x2C);

int CC Font_45A70D(Font* pFont, PSX_RECT* pRect, __int16 vramX, __int16 vramY);

EXTERN_MGS_FUNC_NOT_IMPL(0x45A796, int __cdecl (Font *pFont, int a2, int a3, int a4, int a5, int a6, int a7), Font_45A796);
EXTERN_MGS_FUNC_NOT_IMPL(0x45A89F, void __cdecl(Font *pFont, signed int index, signed int colour1, signed int colour2), Font_ColourRelated_45A89F);

MGS_VAR_EXTERN(DWORD, gUseTrueType_dword_6FC7AC);

void CC Font_render_45C76C(Font* pFont);
void CC Font_Set_global_alloc_ptr_45C7F2(Font* pFont);
void CC Font_Set_Buffer_45AAE9(Font* pFont, WORD* pAllocated);
void CC Font_set_text_45C80A(Font *pFont, char* pText);
void* CC Font_Get_Palette_45AB0B(Font* pFont);
int CC Font_CalcSize_45AA45(Font* pFont);
void __cdecl Font_set_text_shift_jis_45AB2D(Font *pFont, int a2, int a3, BYTE *pText, int a5);

struct FontTextLine;
void CC Font_TrueTypeLinesFree_4241A4(FontTextLine* pSurface);
void* CC Render_alloc_font_type5_4241C2(const BYTE* pixelData, const WORD* pPallete);
void CC Font_load_fonts_45A5AF();
void CC sub_45A6F6(int idx, void* value);
void* CC Font_Get_Palette_474D8D(Font* pFont);
