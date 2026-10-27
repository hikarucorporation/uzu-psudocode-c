// Function : FontOptions
// Namespace: juce:FontOptions
// Entry    : 003c0ec0
// Prototype: undefined FontOptions(float param_1, FontOptions * this, byte param_3)
// Body     : 003c0ec0 - 003c1073


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::FontOptions::FontOptions(float, int) */

void __thiscall juce::FontOptions::FontOptions(float param_1,FontOptions *this,byte param_3)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  char *pcVar5;
  byte *pbVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  float fVar12;
  
  pcVar5 = &DAT_005e50a9;
  if ((~param_3 & 3) == 0) {
    pcVar5 = "Bold Italic";
  }
  pcVar11 = "Italic";
  if ((param_3 & 2) == 0) {
    pcVar11 = "Regular";
  }
  if ((param_3 & 1) != 0) {
    pcVar11 = pcVar5;
  }
  bVar7 = *pcVar11;
  pbVar3 = &DAT_0061ac58;
  if (bVar7 != 0) {
    lVar9 = 0;
    pbVar3 = (byte *)pcVar11;
    do {
      pbVar3 = pbVar3 + 1;
      lVar8 = lVar9 + (ulong)(bVar7 >> 7);
      lVar9 = lVar8 + 1;
      bVar7 = *pbVar3;
    } while (bVar7 != 0);
    uVar10 = lVar8 + 5U & 0xfffffffffffffffc;
    puVar4 = operator_new__(uVar10 + 0x17);
    LOCK();
    *puVar4 = 0;
    UNLOCK();
    *(ulong *)(puVar4 + 2) = uVar10;
    pbVar3 = (byte *)(puVar4 + 4);
    bVar7 = *pcVar11;
    pbVar6 = pbVar3;
    if (bVar7 != 0) {
      do {
        pcVar11 = pcVar11 + 1;
        if ((char)bVar7 < '\0') {
          *pbVar6 = bVar7 >> 6 | 0xc0;
          pbVar6[1] = bVar7 & 0x3f | 0x80;
          pbVar6 = pbVar6 + 1;
        }
        else {
          *pbVar6 = bVar7;
        }
        pbVar6 = pbVar6 + 1;
        bVar7 = *pcVar11;
      } while (bVar7 != 0);
    }
    *pbVar6 = 0;
  }
  *(undefined1 **)this = &DAT_0061ac58;
  *(byte **)(this + 8) = pbVar3;
  pbVar3 = pbVar3 + -0x10;
  if (pbVar3 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar3 = *(int *)pbVar3 + 1;
    UNLOCK();
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 1;
  fVar12 = DAT_005d9048;
  if (param_1 <= DAT_005d9048) {
    fVar12 = param_1;
  }
  *(uint *)(this + 0x4c) =
       -(uint)(param_1 < DAT_005d9068) & (uint)DAT_005d9068 |
       ~-(uint)(param_1 < DAT_005d9068) & (uint)fVar12;
  uVar2 = _UNK_005ddfe8;
  *(undefined8 *)(this + 0x50) = _DAT_005ddfe0;
  *(undefined8 *)(this + 0x58) = uVar2;
  *(undefined4 *)(this + 0x60) = 0xbf800000;
  *(undefined2 *)(this + 100) = 1;
  if (pbVar3 != (byte *)&emptyString) {
    LOCK();
    iVar1 = *(int *)pbVar3;
    *(int *)pbVar3 = *(int *)pbVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(pbVar3);
    }
  }
  this[0x65] = (FontOptions)(param_3 >> 2 & 1);
  return;
}


