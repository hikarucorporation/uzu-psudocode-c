// Function : swap
// Namespace: Steinberg:Buffer
// Entry    : 00177930
// Prototype: undefined4 swap(long param_1, uint param_2, int param_3)
// Body     : 00177930 - 00177acc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Buffer::swap(void*, unsigned int, short) */

undefined4 __cdecl Steinberg::Buffer::swap(long param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  short sVar7;
  ulong uVar8;
  
  sVar7 = (short)param_3;
  if (sVar7 == 2) {
    if (param_2 != 0) {
      uVar8 = ((ulong)param_2 - 1 >> 1) + 1;
      uVar5 = (ulong)((uint)uVar8 & 3);
      if ((ulong)param_2 - 1 < 6) {
        lVar6 = 0;
      }
      else {
        uVar8 = uVar8 & 0xfffffffffffffffc;
        lVar6 = 0;
        do {
          puVar1 = (ushort *)(param_1 + lVar6 * 2);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          puVar1 = (ushort *)(param_1 + 4 + lVar6 * 2);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          puVar1 = (ushort *)(param_1 + 8 + lVar6 * 2);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          puVar1 = (ushort *)(param_1 + 0xc + lVar6 * 2);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          lVar6 = lVar6 + 8;
          uVar8 = uVar8 - 4;
        } while (uVar8 != 0);
      }
      if (uVar5 != 0) {
        uVar8 = 0;
        do {
          puVar1 = (ushort *)(param_1 + lVar6 * 2 + uVar8 * 4);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
      }
    }
  }
  else if (sVar7 == 4) {
    if (param_2 != 0) {
      uVar5 = ((ulong)param_2 - 1 >> 2) + 1;
      if ((ulong)param_2 - 1 < 4) {
        lVar6 = 0;
      }
      else {
        uVar8 = uVar5 & 0xfffffffffffffffe;
        lVar6 = 0;
        do {
          uVar2 = *(undefined1 *)(param_1 + lVar6 * 4);
          *(undefined1 *)(param_1 + lVar6 * 4) = *(undefined1 *)(param_1 + 3 + lVar6 * 4);
          *(undefined1 *)(param_1 + 3 + lVar6 * 4) = uVar2;
          puVar1 = (ushort *)(param_1 + 1 + lVar6 * 4);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          uVar2 = *(undefined1 *)(param_1 + 0x10 + lVar6 * 4);
          *(undefined1 *)(param_1 + 0x10 + lVar6 * 4) = *(undefined1 *)(param_1 + 0x13 + lVar6 * 4);
          *(undefined1 *)(param_1 + 0x13 + lVar6 * 4) = uVar2;
          puVar1 = (ushort *)(param_1 + 0x11 + lVar6 * 4);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          lVar6 = lVar6 + 8;
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      if ((uVar5 & 1) != 0) {
        uVar2 = *(undefined1 *)(param_1 + lVar6 * 4);
        *(undefined1 *)(param_1 + lVar6 * 4) = *(undefined1 *)(param_1 + 3 + lVar6 * 4);
        *(undefined1 *)(param_1 + 3 + lVar6 * 4) = uVar2;
        puVar1 = (ushort *)(param_1 + 1 + lVar6 * 4);
        *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
      }
    }
  }
  else if ((sVar7 == 8) && (param_2 != 0)) {
    uVar5 = 0;
    do {
      uVar2 = *(undefined1 *)(param_1 + uVar5 * 8);
      *(undefined1 *)(param_1 + uVar5 * 8) = *(undefined1 *)(param_1 + 7 + uVar5 * 8);
      *(undefined1 *)(param_1 + 7 + uVar5 * 8) = uVar2;
      uVar3 = *(ushort *)(param_1 + 1 + uVar5 * 8);
      uVar4 = *(ushort *)(param_1 + 5 + uVar5 * 8);
      *(ushort *)(param_1 + 1 + uVar5 * 8) = uVar4 << 8 | uVar4 >> 8;
      *(ushort *)(param_1 + 5 + uVar5 * 8) = uVar3 << 8 | uVar3 >> 8;
      puVar1 = (ushort *)(param_1 + 3 + uVar5 * 8);
      *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
      uVar5 = uVar5 + 8;
    } while (uVar5 < param_2);
  }
  return CONCAT31((int3)(param_3 - 2U >> 8),sVar7 == 8 || (param_3 - 2U & 0xfffd) == 0);
}


