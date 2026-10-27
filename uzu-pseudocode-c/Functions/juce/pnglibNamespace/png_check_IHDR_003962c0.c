// Function : png_check_IHDR
// Namespace: juce:pnglibNamespace
// Entry    : 003962c0
// Prototype: undefined png_check_IHDR(pnglibNamespace * param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6, int param_7, int param_8)
// Body     : 003962c0 - 00396488


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_check_IHDR(juce::pnglibNamespace::png_struct_def const*, unsigned int,
   unsigned int, int, int, int, int, int) */

void __cdecl
juce::pnglibNamespace::png_check_IHDR
          (pnglibNamespace *param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
          int param_7,int param_8)

{
  bool bVar1;
  char *pcVar2;
  
  if (param_2 == 0) {
    pcVar2 = "Image width is zero in IHDR";
LAB_0039631c:
    png_warning((long)param_1,pcVar2);
    bVar1 = true;
    if (param_2 <= *(uint *)(param_1 + 0x31c)) goto LAB_003962ee;
LAB_00396332:
    png_warning((long)param_1,"Image width exceeds user limit in IHDR");
    bVar1 = true;
    if (param_3 != 0) goto LAB_003962f2;
LAB_0039634a:
    pcVar2 = "Image height is zero in IHDR";
LAB_0039635a:
    png_warning((long)param_1,pcVar2);
    bVar1 = true;
    if (*(uint *)(param_1 + 800) < param_3) goto LAB_00396370;
LAB_003962fd:
    if (param_4 < 0x11) goto LAB_0039638e;
LAB_00396436:
    png_warning((long)param_1,"Invalid bit depth in IHDR");
    bVar1 = true;
    if (6 < param_5) goto LAB_003963ae;
LAB_003963a9:
    if ((param_5 & 0xfffffffb) == 1) goto LAB_003963ae;
  }
  else {
    bVar1 = false;
    if ((int)param_2 < 0) {
      pcVar2 = "Invalid image width in IHDR";
      goto LAB_0039631c;
    }
    if (*(uint *)(param_1 + 0x31c) < param_2) goto LAB_00396332;
LAB_003962ee:
    if (param_3 == 0) goto LAB_0039634a;
LAB_003962f2:
    if ((int)param_3 < 0) {
      pcVar2 = "Invalid image height in IHDR";
      goto LAB_0039635a;
    }
    if (param_3 <= *(uint *)(param_1 + 800)) goto LAB_003962fd;
LAB_00396370:
    png_warning((long)param_1,"Image height exceeds user limit in IHDR");
    bVar1 = true;
    if (0x10 < param_4) goto LAB_00396436;
LAB_0039638e:
    if ((0x10116U >> (param_4 & 0x1f) & 1) == 0) goto LAB_00396436;
    if (param_5 < 7) goto LAB_003963a9;
LAB_003963ae:
    png_warning((long)param_1,"Invalid color type in IHDR");
    bVar1 = true;
  }
  if (((int)param_4 < 9) || (param_5 != 3)) {
    if (((int)param_4 < 8) && (param_5 == 4 || (param_5 & 0xfffffffb) == 2)) goto LAB_003963e5;
  }
  else {
LAB_003963e5:
    png_warning((long)param_1,"Invalid color type/bit depth combination in IHDR");
    bVar1 = true;
  }
  if (1 < param_6) {
    png_warning((long)param_1,"Unknown interlace method in IHDR");
    bVar1 = true;
  }
  if (param_7 == 0) {
    if (param_8 == 0) {
      if (!bVar1) {
        return;
      }
      goto LAB_00396481;
    }
  }
  else {
    png_warning((long)param_1,"Unknown compression method in IHDR");
    if (param_8 == 0) goto LAB_00396481;
  }
  png_warning((long)param_1,"Unknown filter method in IHDR");
LAB_00396481:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


