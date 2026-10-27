// Function : appendCharPointer<juce::CharPointer_UTF32>
// Namespace: juce:String
// Entry    : 00491670
// Prototype: void appendCharPointer<juce::CharPointer_UTF32>(undefined8 * param_1, uint * param_2)
// Body     : 00491670 - 004918d3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::String::appendCharPointer<juce::CharPointer_UTF32>(juce::CharPointer_UTF32, unsigned
   long) */

void __cdecl
juce::String::appendCharPointer<juce::CharPointer_UTF32>(undefined8 *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  undefined4 *puVar6;
  byte bVar7;
  sbyte sVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  char *__s;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  
  if (param_2 == (uint *)0x0) {
    return;
  }
  lVar12 = 0;
  for (lVar15 = 0; uVar14 = param_2[lVar15], uVar14 != 0; lVar15 = lVar15 + 1) {
    lVar9 = 1;
    if ((0x7f < uVar14) && (lVar9 = 2, 0x7ff < uVar14)) {
      lVar9 = 4 - (ulong)(uVar14 < 0x10000);
    }
    lVar12 = lVar12 + lVar9;
  }
  if (lVar12 == 0) {
    return;
  }
  __s = (char *)*param_1;
  sVar4 = strlen(__s);
  piVar1 = (int *)(__s + -0x10);
  if (piVar1 == &emptyString) {
    uVar13 = sVar4 + lVar12 + 4 & 0xfffffffffffffffc;
    puVar6 = operator_new__(uVar13 + 0x17);
    LOCK();
    *puVar6 = 0;
    UNLOCK();
    *(ulong *)(puVar6 + 2) = uVar13;
    *(undefined1 *)(puVar6 + 4) = 0;
    __s = (char *)(puVar6 + 4);
  }
  else {
    uVar5 = sVar4 + lVar12 + 1;
    uVar13 = *(ulong *)(__s + -8);
    if (uVar5 <= uVar13) {
      if (*piVar1 < 1) goto LAB_004917ca;
      uVar13 = *(ulong *)(__s + -8);
    }
    if (uVar13 < uVar5) {
      uVar13 = uVar5;
    }
    uVar13 = uVar13 + 3 & 0xfffffffffffffffc;
    puVar6 = operator_new__(uVar13 + 0x17);
    LOCK();
    *puVar6 = 0;
    UNLOCK();
    *(ulong *)(puVar6 + 2) = uVar13;
    memcpy(puVar6 + 4,__s,*(size_t *)(__s + -8));
    LOCK();
    piVar2 = (int *)(__s + -0x10);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar1);
    }
    __s = (char *)(puVar6 + 4);
  }
LAB_004917ca:
  *param_1 = __s;
  pbVar10 = (byte *)(__s + (int)sVar4);
  if (1 < (int)lVar15 + 1) {
    uVar13 = lVar15 + 2;
    do {
      uVar14 = *param_2;
      if (uVar14 == 0) break;
      if (uVar14 < 0x80) {
        *pbVar10 = (byte)uVar14;
        pbVar10 = pbVar10 + 1;
      }
      else {
        uVar11 = 0xffff < uVar14 | 2;
        if (uVar14 < 0x800) {
          uVar11 = 1;
        }
        bVar7 = (byte)uVar11;
        sVar8 = bVar7 * '\x06';
        *pbVar10 = (byte)(uVar14 >> sVar8) | (byte)(0xff << (bVar7 ^ 7));
        pbVar10[1] = (byte)(uVar14 >> ((bVar7 * '\x02' + -2) * '\x03' & 0x1f)) & 0x3f | 0x80;
        if (uVar14 < 0x800) {
          pbVar10 = pbVar10 + 2;
        }
        else {
          pbVar10[2] = (byte)(uVar14 >> (sVar8 - 0xcU & 0x1f)) & 0x3f | 0x80;
          if (uVar11 - 1 < 2) {
            pbVar10 = pbVar10 + 3;
          }
          else {
            pbVar10[3] = (byte)(uVar14 >> (sVar8 - 0x12U & 0x1f)) & 0x3f | 0x80;
            pbVar10 = pbVar10 + 4;
          }
        }
      }
      param_2 = param_2 + 1;
      uVar14 = (int)uVar13 - 1;
      uVar13 = (ulong)uVar14;
    } while (2 < (int)uVar14);
  }
  *pbVar10 = 0;
  return;
}


