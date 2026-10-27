// Function : write
// Namespace: juce:StringCreationHelper
// Entry    : 00497710
// Prototype: undefined write(StringCreationHelper * this, uint param_1)
// Body     : 00497710 - 00497924


/* juce::StringCreationHelper::write(wchar_t) */

void __thiscall juce::StringCreationHelper::write(StringCreationHelper *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte bVar12;
  sbyte sVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  
  lVar14 = 1;
  if ((0x7f < param_1) && (lVar14 = 2, 0x7ff < param_1)) {
    lVar14 = 4 - (ulong)(param_1 < 0x10000);
  }
  lVar4 = *(long *)(this + 0x20);
  *(long *)(this + 0x20) = lVar14 + lVar4;
  uVar16 = *(ulong *)(this + 0x18);
  if ((ulong)(lVar14 + lVar4) <= uVar16) goto LAB_0049784e;
  uVar9 = 8;
  if (8 < uVar16 >> 4) {
    uVar9 = uVar16 >> 4;
  }
  *(ulong *)(this + 0x18) = uVar9 + uVar16;
  puVar11 = *(undefined4 **)this;
  uVar5 = *(undefined8 *)(this + 0x10);
  iVar8 = (int)puVar11;
  piVar1 = puVar11 + -4;
  if (piVar1 == &emptyString) {
    uVar16 = uVar9 + uVar16 + 4 & 0xfffffffffffffffc;
    puVar11 = operator_new__(uVar16 + 0x17);
    LOCK();
    *puVar11 = 0;
    UNLOCK();
    *(ulong *)(puVar11 + 2) = uVar16;
    *(undefined1 *)(puVar11 + 4) = 0;
    puVar11 = puVar11 + 4;
  }
  else {
    uVar9 = uVar16 + uVar9 + 1;
    uVar16 = *(ulong *)(puVar11 + -2);
    if (uVar9 <= uVar16) {
      if (*piVar1 < 1) goto LAB_00497840;
      uVar16 = *(ulong *)(puVar11 + -2);
    }
    if (uVar16 < uVar9) {
      uVar16 = uVar9;
    }
    uVar16 = uVar16 + 3 & 0xfffffffffffffffc;
    puVar10 = operator_new__(uVar16 + 0x17);
    LOCK();
    *puVar10 = 0;
    UNLOCK();
    *(ulong *)(puVar10 + 2) = uVar16;
    puVar10 = puVar10 + 4;
    memcpy(puVar10,puVar11,*(size_t *)(puVar11 + -2));
    LOCK();
    piVar2 = puVar11 + -4;
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    puVar11 = puVar10;
    if (iVar3 == 0) {
      operator_delete__(piVar1);
    }
  }
LAB_00497840:
  *(undefined4 **)this = puVar11;
  *(long *)(this + 0x10) = (long)((int)uVar5 - iVar8) + (long)puVar11;
LAB_0049784e:
  if (0x7f < param_1) {
    uVar15 = 1;
    if (0x7ff < param_1) {
      uVar15 = 0xffff < param_1 | 2;
    }
    bVar12 = (byte)uVar15;
    sVar13 = bVar12 * '\x06';
    pbVar6 = *(byte **)(this + 0x10);
    *(byte **)(this + 0x10) = pbVar6 + 1;
    *pbVar6 = (byte)(param_1 >> sVar13) | (byte)(0xff << (bVar12 ^ 7));
    pbVar6 = *(byte **)(this + 0x10);
    *(byte **)(this + 0x10) = pbVar6 + 1;
    *pbVar6 = (byte)(param_1 >> ((bVar12 * '\x02' + -2) * '\x03' & 0x1f)) & 0x3f | 0x80;
    if (param_1 < 0x800) {
      return;
    }
    pbVar6 = *(byte **)(this + 0x10);
    *(byte **)(this + 0x10) = pbVar6 + 1;
    *pbVar6 = (byte)(param_1 >> (sVar13 - 0xcU & 0x1f)) & 0x3f | 0x80;
    if (uVar15 - 1 < 2) {
      return;
    }
    param_1 = (uint)((byte)(param_1 >> (sVar13 - 0x12U & 0x1f)) & 0x3f | 0x80);
  }
  puVar7 = *(undefined1 **)(this + 0x10);
  *(undefined1 **)(this + 0x10) = puVar7 + 1;
  *puVar7 = (char)param_1;
  return;
}


