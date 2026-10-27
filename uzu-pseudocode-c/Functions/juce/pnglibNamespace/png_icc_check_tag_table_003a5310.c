// Function : png_icc_check_tag_table
// Namespace: juce:pnglibNamespace
// Entry    : 003a5310
// Prototype: undefined8 png_icc_check_tag_table(pnglibNamespace * param_1, long param_2, char * param_3, uint param_4, long param_5)
// Body     : 003a5310 - 003a53e9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_icc_check_tag_table(juce::pnglibNamespace::png_struct_def const*,
   juce::pnglibNamespace::png_colorspace*, char const*, unsigned int, unsigned char const*) */

undefined8 __cdecl
juce::pnglibNamespace::png_icc_check_tag_table
          (pnglibNamespace *param_1,long param_2,char *param_3,uint param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_5 + 0x80);
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  if (uVar5 != 0) {
    puVar4 = (uint *)(param_5 + 0x84);
    do {
      uVar2 = (ulong)*puVar4 << 0x20;
      uVar2 = (ulong)(*puVar4 >> 0x18) | (uVar2 & 0xff000000000000) >> 0x28 |
              (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8;
      uVar3 = (uint)*(byte *)((long)puVar4 + 6) << 8 |
              (uint)*(byte *)((long)puVar4 + 5) << 0x10 | (uint)(byte)puVar4[1] << 0x18 |
              (uint)*(byte *)((long)puVar4 + 7);
      if ((param_4 < uVar3) ||
         (uVar1 = puVar4[2],
         param_4 - uVar3 <
         (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18))) {
        png_icc_profile_error(param_1,param_2,param_3,uVar2,"ICC profile tag outside profile");
        return 0;
      }
      if ((*(byte *)((long)puVar4 + 7) & 3) != 0) {
        png_icc_profile_error(param_1,0,param_3,uVar2,"ICC profile tag start not a multiple of 4");
      }
      puVar4 = puVar4 + 3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return 1;
}


