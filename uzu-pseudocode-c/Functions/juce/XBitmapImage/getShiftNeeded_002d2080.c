// Function : getShiftNeeded
// Namespace: juce:XBitmapImage
// Entry    : 002d2080
// Prototype: uint getShiftNeeded(uint param_1)
// Body     : 002d2080 - 002d2259


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::XBitmapImage::getShiftNeeded(unsigned int) */

uint __cdecl juce::XBitmapImage::getShiftNeeded(uint param_1)

{
  uint uVar1;
  
  if ((int)param_1 < 0) {
    return 0x18;
  }
  uVar1 = 0x17;
  if (((((((((param_1 & 0x40000000) == 0) && (uVar1 = 0x16, (param_1 & 0x20000000) == 0)) &&
          (uVar1 = 0x15, (param_1 & 0x10000000) == 0)) &&
         (((uVar1 = 0x14, (param_1 & 0x8000000) == 0 && (uVar1 = 0x13, (param_1 & 0x4000000) == 0))
          && ((uVar1 = 0x12, (param_1 & 0x2000000) == 0 &&
              ((uVar1 = 0x11, (param_1 & 0x1000000) == 0 &&
               (uVar1 = 0x10, (param_1 & 0x800000) == 0)))))))) &&
        (uVar1 = 0xf, (param_1 & 0x400000) == 0)) &&
       (((uVar1 = 0xe, (param_1 & 0x200000) == 0 && (uVar1 = 0xd, (param_1 & 0x100000) == 0)) &&
        (uVar1 = 0xc, (param_1 & 0x80000) == 0)))) &&
      (((uVar1 = 0xb, (param_1 & 0x40000) == 0 && (uVar1 = 10, (param_1 & 0x20000) == 0)) &&
       ((uVar1 = 9, (param_1 & 0x10000) == 0 &&
        ((uVar1 = 8, (param_1 & 0x8000) == 0 && (uVar1 = 7, (param_1 & 0x4000) == 0)))))))) &&
     (((uVar1 = 6, (param_1 & 0x2000) == 0 &&
       (((((uVar1 = 5, (param_1 & 0x1000) == 0 && (uVar1 = 4, (param_1 & 0x800) == 0)) &&
          (uVar1 = 3, (param_1 & 0x400) == 0)) &&
         ((uVar1 = 2, (param_1 & 0x200) == 0 && (uVar1 = 1, (param_1 & 0x100) == 0)))) &&
        ((uVar1 = 0, (param_1 & 0x80) == 0 &&
         ((uVar1 = 0xffffffff, (param_1 & 0x40) == 0 && (uVar1 = 0xfffffffe, (param_1 & 0x20) == 0))
         )))))) &&
      ((uVar1 = 0xfffffffd, (param_1 & 0x10) == 0 &&
       (((uVar1 = 0xfffffffc, (param_1 & 8) == 0 && (uVar1 = 0xfffffffb, (param_1 & 4) == 0)) &&
        (uVar1 = 0xfffffffa, (param_1 & 2) == 0)))))))) {
    uVar1 = -(param_1 & 1) & 0xfffffff9;
  }
  return uVar1;
}


