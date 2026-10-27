// Function : png_inflate_claim
// Namespace: juce:pnglibNamespace
// Entry    : 003a4740
// Prototype: ulong png_inflate_claim(long param_1, undefined4 param_2)
// Body     : 003a4740 - 003a490c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_inflate_claim(juce::pnglibNamespace::png_struct_def*, unsigned int) */

ulong __cdecl juce::pnglibNamespace::png_inflate_claim(long param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined8 local_64;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 != 0) {
    local_68 = (undefined1)((uint)iVar2 >> 0x18);
    local_67 = (undefined1)((uint)iVar2 >> 0x10);
    local_66 = (undefined1)((uint)iVar2 >> 8);
    local_65 = (undefined1)iVar2;
    local_64 = 0x7a20676e69737520;
    local_5c = 0x65727473;
    local_58 = 0x6d61;
    local_56 = 0;
    png_chunk_warning(param_1,(long)&local_68);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  lVar1 = param_1 + 0x60;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((*(byte *)(param_1 + 0x50) & 2) == 0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    pcVar7 = *(code **)(param_1 + 0xa0);
    if (pcVar7 == (code *)0x0) {
      pcVar7 = zlibNamespace::zcalloc;
      *(code **)(param_1 + 0xa0) = zlibNamespace::zcalloc;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      lVar3 = *(long *)(param_1 + 0xa8);
    }
    else {
      lVar3 = *(long *)(param_1 + 0xa8);
    }
    if (lVar3 == 0) {
      *(code **)(param_1 + 0xa8) = zlibNamespace::zcfree;
    }
    plVar4 = (long *)(*pcVar7)(*(undefined8 *)(param_1 + 0xb0),1,0x1bf8);
    if (plVar4 == (long *)0x0) {
      uVar5 = 0xfffffffc;
      lVar1 = *(long *)(param_1 + 0x90);
    }
    else {
      *(long **)(param_1 + 0x98) = plVar4;
      *plVar4 = lVar1;
      plVar4[9] = 0;
      *(undefined4 *)(plVar4 + 1) = 0x3f34;
      uVar5 = zlibNamespace::inflateReset2(lVar1,0);
      if ((int)uVar5 == 0) {
        *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
        goto LAB_003a48f8;
      }
      uVar5 = uVar5 & 0xffffffff;
      (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0xb0),plVar4);
      *(undefined8 *)(param_1 + 0x98) = 0;
      lVar1 = *(long *)(param_1 + 0x90);
    }
  }
  else {
    uVar6 = zlibNamespace::inflateReset2(lVar1,0);
    uVar5 = uVar6 & 0xffffffff;
    if ((int)uVar6 == 0) {
LAB_003a48f8:
      *(undefined4 *)(param_1 + 0x58) = param_2;
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x90);
  }
  if (lVar1 == 0) {
    *(undefined **)(param_1 + 0x90) = (&PTR_s_unexpected_zlib_return_00712720)[(int)uVar5 + 7];
  }
  return uVar5;
}


