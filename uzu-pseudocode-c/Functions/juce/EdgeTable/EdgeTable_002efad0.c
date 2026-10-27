// Function : EdgeTable
// Namespace: juce:EdgeTable
// Entry    : 002efad0
// Prototype: undefined EdgeTable(undefined8 param_1, undefined8 param_2, EdgeTable * this)
// Body     : 002efad0 - 002efdf1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::EdgeTable::EdgeTable(juce::Rectangle<float>) */

void __thiscall juce::EdgeTable::EdgeTable(undefined8 param_1,undefined8 param_2,EdgeTable *this)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float __x;
  float fVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  int iVar12;
  float local_58;
  float fStack_54;
  float fStack_44;
  int iStack_30;
  
  __x = (float)param_1;
  fVar8 = floorf(__x);
  fStack_44 = (float)((ulong)param_1 >> 0x20);
  local_58 = (float)param_2;
  fStack_54 = (float)((ulong)param_2 >> 0x20);
  dVar11 = (double)((fStack_44 + fStack_54) * _UNK_005dd2d4) + _UNK_005d9a98;
  uVar9 = SUB84((double)(fStack_44 * _DAT_005dd2d0) + _DAT_005d9a90,0);
  uVar10 = uVar9 + 0xff;
  if (-1 < (int)uVar9) {
    uVar10 = uVar9;
  }
  iVar7 = (int)fStack_54 + 2;
  *(int *)(this + 0x10) = (int)fVar8;
  *(int *)(this + 0x14) = (int)uVar10 >> 8;
  *(int *)(this + 0x18) = (int)local_58 + 2;
  *(int *)(this + 0x1c) = iVar7;
  *(undefined8 *)(this + 0x20) = 0x4100000020;
  this[0x28] = (EdgeTable)0x1;
  iVar5 = 0;
  if (-1 < iVar7) {
    iVar5 = iVar7;
  }
  lVar3 = (long)(iVar5 * 0x41 + 0x82);
  puVar1 = malloc(lVar3 * 4);
  *(undefined4 **)this = puVar1;
  *(long *)(this + 8) = lVar3;
  *puVar1 = 0;
  iVar5 = SUB84((double)((local_58 + __x) * _DAT_005dd2d0) + _DAT_005d9a90,0);
  iVar2 = SUB84((double)(__x * _UNK_005dd2d4) + _UNK_005d9a98,0);
  if (iVar2 < iVar5) {
    iStack_30 = SUB84(dVar11,0);
    uVar9 = -(uVar10 & 0xffffff00) + uVar9;
    uVar10 = -(uVar10 & 0xffffff00) + iStack_30;
    if (uVar10 - uVar9 != 0 && (int)uVar9 <= (int)uVar10) {
      iVar12 = (int)(((uint)((int)uVar10 >> 0x1f) >> 0x18) + uVar10) >> 8;
      *puVar1 = 2;
      puVar1[1] = iVar2;
      if ((int)(((uint)((int)uVar9 >> 0x1f) >> 0x18) + uVar9) >> 8 == iVar12) {
        puVar1[2] = uVar10 - uVar9;
        puVar1[3] = iVar5;
        puVar1[4] = 0;
        puVar1 = puVar1 + 0x41;
        iVar6 = 1;
        if (iVar7 < 2) {
          return;
        }
      }
      else {
        puVar1[2] = ~uVar9 & 0xff;
        puVar1[3] = iVar5;
        puVar1[4] = 0;
        puVar1 = puVar1 + 0x41;
        iVar6 = 2;
        if (0x1ff < (int)uVar10) {
          iVar6 = 2;
          if (2 < iVar12) {
            iVar6 = iVar12;
          }
          uVar9 = iVar6 - 1U & 3;
          if (2 < iVar6 - 2U) {
            uVar4 = iVar6 - 1U & 0xfffffffc;
            do {
              *puVar1 = 2;
              puVar1[1] = iVar2;
              puVar1[2] = 0xff;
              puVar1[3] = iVar5;
              puVar1[4] = 0;
              puVar1[0x41] = 2;
              puVar1[0x42] = iVar2;
              puVar1[0x43] = 0xff;
              puVar1[0x44] = iVar5;
              puVar1[0x45] = 0;
              puVar1[0x82] = 2;
              puVar1[0x83] = iVar2;
              puVar1[0x84] = 0xff;
              puVar1[0x85] = iVar5;
              puVar1[0x86] = 0;
              puVar1[0xc3] = 2;
              puVar1[0xc4] = iVar2;
              puVar1[0xc5] = 0xff;
              puVar1[0xc6] = iVar5;
              puVar1[199] = 0;
              puVar1 = puVar1 + 0x104;
              uVar4 = uVar4 - 4;
            } while (uVar4 != 0);
          }
          for (; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar1 = 2;
            puVar1[1] = iVar2;
            puVar1[2] = 0xff;
            puVar1[3] = iVar5;
            puVar1[4] = 0;
            puVar1 = puVar1 + 0x41;
          }
          iVar6 = iVar6 + 1;
        }
        *puVar1 = 2;
        puVar1[1] = iVar2;
        puVar1[2] = uVar10 & 0xff;
        puVar1[3] = iVar5;
        puVar1[4] = 0;
        puVar1 = puVar1 + *(int *)(this + 0x24);
        if (*(int *)(this + 0x1c) <= iVar6) {
          return;
        }
      }
      do {
        *puVar1 = 0;
        puVar1 = puVar1 + *(int *)(this + 0x24);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(this + 0x1c));
      return;
    }
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


