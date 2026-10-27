// Function : png_inflate
// Namespace: juce:pnglibNamespace
// Entry    : 003a4910
// Prototype: int png_inflate(long param_1, int param_2, undefined8 param_3, int * param_4, long param_5, long * param_6)
// Body     : 003a4910 - 003a4af8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_inflate(juce::pnglibNamespace::png_struct_def*, unsigned int, int,
   unsigned char const*, unsigned int*, unsigned char*, unsigned long*) */

int __cdecl
juce::pnglibNamespace::png_inflate
          (long param_1,int param_2,undefined8 param_3,int *param_4,long param_5,long *param_6)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined1 local_438 [1032];
  
  if (*(int *)(param_1 + 0x58) != param_2) {
    *(char **)(param_1 + 0x90) = "zstream unclaimed";
    return -2;
  }
  lVar6 = *param_6;
  iVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  if (param_5 == 0) {
    uVar5 = 0;
    iVar3 = 0;
    while( true ) {
      *(int *)(param_1 + 0x68) = iVar3 + iVar1;
      uVar5 = lVar6 + uVar5;
      *(undefined1 **)(param_1 + 0x78) = local_438;
      uVar2 = 0x400;
      if (uVar5 < 0x400) {
        uVar2 = uVar5;
      }
      *(int *)(param_1 + 0x80) = (int)uVar2;
      lVar6 = uVar5 - uVar2;
      if ((*(char *)(param_1 + 400) != '\0') && (iVar3 + iVar1 != 0)) {
        if (**(char **)(param_1 + 0x60) < '\0') goto LAB_003a4a78;
        *(undefined1 *)(param_1 + 400) = 0;
      }
      iVar1 = zlibNamespace::inflate((long *)(param_1 + 0x60),(uint)(lVar6 == 0) << 2);
      if (iVar1 != 0) break;
      iVar3 = *(int *)(param_1 + 0x68);
      uVar5 = (ulong)*(uint *)(param_1 + 0x80);
      iVar1 = 0;
    }
  }
  else {
    *(long *)(param_1 + 0x78) = param_5;
    uVar5 = 0;
    iVar3 = 0;
    while( true ) {
      *(int *)(param_1 + 0x68) = iVar3 + iVar1;
      uVar5 = lVar6 + uVar5;
      uVar2 = 0xffffffff;
      if (uVar5 < 0xffffffff) {
        uVar2 = uVar5;
      }
      *(int *)(param_1 + 0x80) = (int)uVar2;
      lVar6 = uVar5 - uVar2;
      if ((*(char *)(param_1 + 400) != '\0') && (iVar3 + iVar1 != 0)) {
        if (**(char **)(param_1 + 0x60) < '\0') goto LAB_003a4a78;
        *(undefined1 *)(param_1 + 400) = 0;
      }
      iVar1 = zlibNamespace::inflate((long *)(param_1 + 0x60),(uint)(lVar6 == 0) << 2);
      if (iVar1 != 0) break;
      iVar3 = *(int *)(param_1 + 0x68);
      uVar5 = (ulong)*(uint *)(param_1 + 0x80);
      iVar1 = 0;
    }
  }
LAB_003a4a8b:
  if (param_5 == 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x68);
  lVar6 = lVar6 + (ulong)*(uint *)(param_1 + 0x80);
  if (lVar6 != 0) {
    *param_6 = *param_6 - lVar6;
  }
  if (iVar3 != 0) {
    *param_4 = *param_4 - iVar3;
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    if (iVar1 + 7U < 10) {
      pcVar4 = (&PTR_s_unexpected_zlib_return_00712720)[(int)(iVar1 + 7U)];
    }
    else {
      pcVar4 = "unexpected zlib return code";
    }
    *(char **)(param_1 + 0x90) = pcVar4;
  }
  return iVar1;
LAB_003a4a78:
  *(char **)(param_1 + 0x90) = "invalid window size (libpng)";
  iVar1 = -3;
  goto LAB_003a4a8b;
}


