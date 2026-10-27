// Function : swap
// Namespace: Steinberg:Buffer
// Entry    : 00177790
// Prototype: undefined4 swap(Buffer * this, int param_1)
// Body     : 00177790 - 0017792c


/* Steinberg::Buffer::swap(short) */

undefined4 __thiscall Steinberg::Buffer::swap(Buffer *this,int param_1)

{
  ushort *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  short sVar8;
  ulong uVar9;
  ulong uVar10;
  
  sVar8 = (short)param_1;
  lVar5 = *(long *)(this + 8);
  uVar10 = (ulong)*(uint *)(this + 0x10);
  if (sVar8 == 2) {
    if (uVar10 != 0) {
      uVar9 = (uVar10 - 1 >> 1) + 1;
      uVar7 = (ulong)((uint)uVar9 & 3);
      if (uVar10 - 1 < 6) {
        lVar6 = 0;
      }
      else {
        uVar9 = uVar9 & 0xfffffffffffffffc;
        lVar6 = 0;
        do {
          puVar1 = (ushort *)(lVar5 + lVar6 * 2);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          puVar1 = (ushort *)(lVar5 + 4 + lVar6 * 2);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          puVar1 = (ushort *)(lVar5 + 8 + lVar6 * 2);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          puVar1 = (ushort *)(lVar5 + 0xc + lVar6 * 2);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          lVar6 = lVar6 + 8;
          uVar9 = uVar9 - 4;
        } while (uVar9 != 0);
      }
      if (uVar7 != 0) {
        uVar10 = 0;
        do {
          puVar1 = (ushort *)(lVar5 + lVar6 * 2 + uVar10 * 4);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          uVar10 = uVar10 + 1;
        } while (uVar7 != uVar10);
      }
    }
  }
  else if (sVar8 == 4) {
    if (uVar10 != 0) {
      uVar7 = (uVar10 - 1 >> 2) + 1;
      if (uVar10 - 1 < 4) {
        lVar6 = 0;
      }
      else {
        uVar10 = uVar7 & 0xfffffffffffffffe;
        lVar6 = 0;
        do {
          uVar2 = *(undefined1 *)(lVar5 + lVar6 * 4);
          *(undefined1 *)(lVar5 + lVar6 * 4) = *(undefined1 *)(lVar5 + 3 + lVar6 * 4);
          *(undefined1 *)(lVar5 + 3 + lVar6 * 4) = uVar2;
          puVar1 = (ushort *)(lVar5 + 1 + lVar6 * 4);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          uVar2 = *(undefined1 *)(lVar5 + 0x10 + lVar6 * 4);
          *(undefined1 *)(lVar5 + 0x10 + lVar6 * 4) = *(undefined1 *)(lVar5 + 0x13 + lVar6 * 4);
          *(undefined1 *)(lVar5 + 0x13 + lVar6 * 4) = uVar2;
          puVar1 = (ushort *)(lVar5 + 0x11 + lVar6 * 4);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          lVar6 = lVar6 + 8;
          uVar10 = uVar10 - 2;
        } while (uVar10 != 0);
      }
      if ((uVar7 & 1) != 0) {
        uVar2 = *(undefined1 *)(lVar5 + lVar6 * 4);
        *(undefined1 *)(lVar5 + lVar6 * 4) = *(undefined1 *)(lVar5 + 3 + lVar6 * 4);
        *(undefined1 *)(lVar5 + 3 + lVar6 * 4) = uVar2;
        puVar1 = (ushort *)(lVar5 + 1 + lVar6 * 4);
        *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
      }
    }
  }
  else if ((sVar8 == 8) && (uVar10 != 0)) {
    uVar7 = 0;
    do {
      uVar2 = *(undefined1 *)(lVar5 + uVar7 * 8);
      *(undefined1 *)(lVar5 + uVar7 * 8) = *(undefined1 *)(lVar5 + 7 + uVar7 * 8);
      *(undefined1 *)(lVar5 + 7 + uVar7 * 8) = uVar2;
      uVar3 = *(ushort *)(lVar5 + 1 + uVar7 * 8);
      uVar4 = *(ushort *)(lVar5 + 5 + uVar7 * 8);
      *(ushort *)(lVar5 + 1 + uVar7 * 8) = uVar4 << 8 | uVar4 >> 8;
      *(ushort *)(lVar5 + 5 + uVar7 * 8) = uVar3 << 8 | uVar3 >> 8;
      puVar1 = (ushort *)(lVar5 + 3 + uVar7 * 8);
      *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
      uVar7 = uVar7 + 8;
    } while (uVar7 < uVar10);
  }
  return CONCAT31((int3)(param_1 - 2U >> 8),sVar8 == 8 || (param_1 - 2U & 0xfffd) == 0);
}


