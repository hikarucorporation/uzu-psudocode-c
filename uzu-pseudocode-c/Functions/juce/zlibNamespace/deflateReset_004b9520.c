// Function : deflateReset
// Namespace: juce:zlibNamespace
// Entry    : 004b9520
// Prototype: undefined8 deflateReset(long param_1)
// Body     : 004b9520 - 004b994e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::deflateReset(juce::zlibNamespace::z_stream_s*) */

undefined8 __cdecl juce::zlibNamespace::deflateReset(long param_1)

{
  long *plVar1;
  void *__s;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar6 = 0xfffffffe;
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     ((plVar1 = *(long **)(param_1 + 0x38), plVar1 != (long *)0x0 && (*plVar1 == param_1)))) {
    iVar3 = (int)plVar1[1];
    if (((iVar3 - 0x39U < 0x39) &&
        ((0x100400400011001U >> ((ulong)(iVar3 - 0x39U) & 0x3f) & 1) != 0)) ||
       ((iVar3 == 0x29a || (iVar3 == 0x2a)))) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x58) = 2;
      plVar1[5] = 0;
      plVar1[4] = plVar1[2];
      iVar3 = (int)plVar1[6];
      if (iVar3 < 0) {
        iVar3 = -iVar3;
        *(int *)(plVar1 + 6) = iVar3;
      }
      uVar7 = 0x2a;
      if (iVar3 == 2) {
        uVar7 = 0x39;
      }
      *(undefined4 *)(plVar1 + 1) = uVar7;
      *(ulong *)(param_1 + 0x60) = (ulong)(iVar3 != 2);
      *(undefined4 *)((long)plVar1 + 0x4c) = 0xfffffffe;
      plVar1[0x16b] = (long)plVar1 + 0xd4;
      plVar1[0x16d] = (long)&static_l_desc;
      plVar1[0x16e] = (long)(plVar1 + 0x139);
      plVar1[0x170] = (long)&static_d_desc;
      plVar1[0x171] = (long)plVar1 + 0xabc;
      plVar1[0x173] = (long)static_bl_desc;
      *(undefined2 *)(plVar1 + 0x2e6) = 0;
      *(undefined4 *)((long)plVar1 + 0x1734) = 0;
      lVar4 = 0x3c;
      while( true ) {
        *(undefined2 *)((long)plVar1 + lVar4 * 4 + -0x1c) = 0;
        *(undefined2 *)((long)plVar1 + lVar4 * 4 + -0x18) = 0;
        *(undefined2 *)((long)plVar1 + lVar4 * 4 + -0x14) = 0;
        *(undefined2 *)((long)plVar1 + lVar4 * 4 + -0x10) = 0;
        *(undefined2 *)((long)plVar1 + lVar4 * 4 + -0xc) = 0;
        *(undefined2 *)((long)plVar1 + lVar4 * 4 + -8) = 0;
        if (lVar4 == 0x154) break;
        *(undefined2 *)((long)plVar1 + lVar4 * 4 + -4) = 0;
        *(undefined2 *)((long)plVar1 + lVar4 * 4) = 0;
        lVar4 = lVar4 + 8;
      }
      *(undefined2 *)(plVar1 + 0x139) = 0;
      *(undefined2 *)((long)plVar1 + 0x9cc) = 0;
      *(undefined2 *)(plVar1 + 0x13a) = 0;
      *(undefined2 *)((long)plVar1 + 0x9d4) = 0;
      *(undefined2 *)(plVar1 + 0x13b) = 0;
      *(undefined2 *)((long)plVar1 + 0x9dc) = 0;
      *(undefined2 *)(plVar1 + 0x13c) = 0;
      *(undefined2 *)((long)plVar1 + 0x9e4) = 0;
      *(undefined2 *)(plVar1 + 0x13d) = 0;
      *(undefined2 *)((long)plVar1 + 0x9ec) = 0;
      *(undefined2 *)(plVar1 + 0x13e) = 0;
      *(undefined2 *)((long)plVar1 + 0x9f4) = 0;
      *(undefined2 *)(plVar1 + 0x13f) = 0;
      *(undefined2 *)((long)plVar1 + 0x9fc) = 0;
      *(undefined2 *)(plVar1 + 0x140) = 0;
      *(undefined2 *)((long)plVar1 + 0xa04) = 0;
      *(undefined2 *)(plVar1 + 0x141) = 0;
      *(undefined2 *)((long)plVar1 + 0xa0c) = 0;
      *(undefined2 *)(plVar1 + 0x142) = 0;
      *(undefined2 *)((long)plVar1 + 0xa14) = 0;
      *(undefined2 *)(plVar1 + 0x143) = 0;
      *(undefined2 *)((long)plVar1 + 0xa1c) = 0;
      *(undefined2 *)(plVar1 + 0x144) = 0;
      *(undefined2 *)((long)plVar1 + 0xa24) = 0;
      *(undefined2 *)(plVar1 + 0x145) = 0;
      *(undefined2 *)((long)plVar1 + 0xa2c) = 0;
      *(undefined2 *)(plVar1 + 0x146) = 0;
      *(undefined2 *)((long)plVar1 + 0xa34) = 0;
      *(undefined2 *)(plVar1 + 0x147) = 0;
      *(undefined2 *)((long)plVar1 + 0xa3c) = 0;
      *(undefined2 *)((long)plVar1 + 0xabc) = 0;
      *(undefined2 *)(plVar1 + 0x158) = 0;
      *(undefined2 *)((long)plVar1 + 0xac4) = 0;
      *(undefined2 *)(plVar1 + 0x159) = 0;
      *(undefined2 *)((long)plVar1 + 0xacc) = 0;
      *(undefined2 *)(plVar1 + 0x15a) = 0;
      *(undefined2 *)((long)plVar1 + 0xad4) = 0;
      *(undefined2 *)(plVar1 + 0x15b) = 0;
      *(undefined2 *)((long)plVar1 + 0xadc) = 0;
      *(undefined2 *)(plVar1 + 0x15c) = 0;
      *(undefined2 *)((long)plVar1 + 0xae4) = 0;
      *(undefined2 *)(plVar1 + 0x15d) = 0;
      *(undefined2 *)((long)plVar1 + 0xaec) = 0;
      *(undefined2 *)(plVar1 + 0x15e) = 0;
      *(undefined2 *)((long)plVar1 + 0xaf4) = 0;
      *(undefined2 *)(plVar1 + 0x15f) = 0;
      *(undefined2 *)((long)plVar1 + 0xafc) = 0;
      *(undefined2 *)(plVar1 + 0x160) = 0;
      *(undefined2 *)((long)plVar1 + 0xb04) = 0;
      *(undefined2 *)((long)plVar1 + 0x4d4) = 1;
      *(undefined4 *)((long)plVar1 + 0x170c) = 0;
      plVar1[0x2e3] = 0;
      plVar1[0x2e4] = 0;
      *(undefined4 *)(plVar1 + 0x2e5) = 0;
      lVar4 = *(long *)(param_1 + 0x38);
      *(ulong *)(lVar4 + 0x68) = (ulong)*(uint *)(lVar4 + 0x50) * 2;
      __s = *(void **)(lVar4 + 0x78);
      uVar5 = (ulong)(*(int *)(lVar4 + 0x84) - 1);
      *(undefined2 *)((long)__s + uVar5 * 2) = 0;
      uVar6 = 0;
      memset(__s,0,uVar5 * 2);
      lVar2 = (long)*(int *)(lVar4 + 0xc4) * 0x10;
      *(uint *)(lVar4 + 0xc0) = (uint)*(ushort *)(configuration_table + lVar2 + 2);
      *(uint *)(lVar4 + 0xcc) = (uint)*(ushort *)(configuration_table + lVar2);
      *(uint *)(lVar4 + 0xd0) = (uint)*(ushort *)(configuration_table + lVar2 + 4);
      *(uint *)(lVar4 + 0xbc) = (uint)*(ushort *)(configuration_table + lVar2 + 6);
      *(undefined8 *)(lVar4 + 0x98) = 0;
      *(undefined8 *)(lVar4 + 0xb4) = 0x200000000;
      *(undefined4 *)(lVar4 + 0x172c) = 0;
      *(undefined4 *)(lVar4 + 0xa0) = 2;
      *(undefined8 *)(lVar4 + 0xa8) = 0;
      *(undefined4 *)(lVar4 + 0x80) = 0;
    }
  }
  return uVar6;
}


