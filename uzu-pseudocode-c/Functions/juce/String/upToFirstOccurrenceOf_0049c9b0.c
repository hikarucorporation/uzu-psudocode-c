// Function : upToFirstOccurrenceOf
// Namespace: juce:String
// Entry    : 0049c9b0
// Prototype: undefined upToFirstOccurrenceOf(undefined8 * param_1, undefined8 * param_2, byte * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6)
// Body     : 0049c9b0 - 0049cc09


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::upToFirstOccurrenceOf(juce::StringRef, bool, bool) const */

void __cdecl
juce::String::upToFirstOccurrenceOf
          (undefined8 *param_1,undefined8 *param_2,byte *param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  size_t __n;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *__dest;
  byte *pbVar13;
  
  bVar1 = *param_3;
  if (bVar1 != 0) {
    pbVar13 = (byte *)*param_2;
    iVar8 = 0;
    pbVar6 = param_3;
    do {
      if ((char)bVar1 < '\0') {
        do {
          bVar1 = pbVar6[1];
          pbVar6 = pbVar6 + 1;
        } while ((bVar1 & 0xc0) == 0x80);
      }
      else {
        if (bVar1 == 0) goto LAB_0049ca14;
        bVar1 = pbVar6[1];
        pbVar6 = pbVar6 + 1;
      }
      iVar8 = iVar8 + 1;
    } while( true );
  }
  goto LAB_0049cb61;
LAB_0049ca14:
  iVar10 = 0;
  pbVar9 = pbVar13;
  while (uVar2 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           (pbVar9,param_3,iVar8,pbVar6,param_5,(uint)param_6), uVar2 != 0) {
    pbVar4 = pbVar9 + 1;
    bVar1 = *pbVar9;
    pbVar6 = (byte *)(ulong)bVar1;
    pbVar3 = pbVar4;
    if (-1 < (char)bVar1) goto LAB_0049ca42;
    if ((bVar1 & 0x40) == 0) {
      pbVar6 = (byte *)(ulong)(bVar1 & 0x7f);
      if ((bVar1 & 0x7f) == 0) goto LAB_0049cb3e;
    }
    else {
      if ((bVar1 & 0x20) == 0) {
        uVar2 = 0x3f;
        lVar12 = 0;
        param_6 = 0;
        param_5 = 0;
      }
      else {
        param_6 = CONCAT71((int7)((ulong)param_6 >> 8),1);
        if ((bVar1 & 0x10) == 0) {
          uVar2 = 0x1f;
          lVar12 = 1;
          param_5 = 0;
        }
        else {
          uVar2 = 0xf;
          lVar12 = 2;
          param_5 = CONCAT71((int7)((ulong)param_5 >> 8),1);
        }
      }
      uVar2 = bVar1 & uVar2;
      pbVar6 = (byte *)(ulong)uVar2;
      if ((pbVar9[1] & 0xc0) == 0x80) {
        pbVar4 = pbVar9 + lVar12 + 2;
        uVar2 = pbVar9[1] & 0x3f | uVar2 << 6;
        pbVar6 = (byte *)(ulong)uVar2;
        pbVar3 = pbVar4;
        if ((char)param_6 == '\0') goto LAB_0049ca42;
        pbVar3 = pbVar9 + 2;
        if ((*pbVar3 & 0xffffffc0) != 0x80) goto LAB_0049ca42;
        uVar2 = *pbVar3 & 0x3f | uVar2 << 6;
        pbVar6 = (byte *)(ulong)uVar2;
        pbVar3 = pbVar4;
        if ((char)param_5 == '\0') goto LAB_0049ca42;
        uVar7 = (uint)pbVar9[3];
        pbVar3 = pbVar9 + 3;
        if ((uVar7 & 0xffffffc0) == 0x80) {
          uVar2 = uVar2 << 6 | uVar7 & 0x3f;
          pbVar6 = (byte *)(ulong)uVar2;
          if (uVar2 != 0) goto LAB_0049ca4a;
          goto LAB_0049cb3e;
        }
      }
      else {
LAB_0049ca42:
        uVar2 = (uint)pbVar6;
      }
      pbVar4 = pbVar3;
      if (uVar2 == 0) goto LAB_0049cb3e;
    }
LAB_0049ca4a:
    iVar10 = iVar10 + 1;
    pbVar9 = pbVar4;
  }
  if (iVar10 != 0) {
    pbVar6 = pbVar13;
    while (bVar1 = *pbVar6, bVar1 != 0) {
      pbVar9 = pbVar6 + 1;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar9 = pbVar6 + 2;
        }
        else {
          pbVar9 = pbVar6 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      iVar10 = iVar10 + -1;
      pbVar6 = pbVar9;
      if (iVar10 == 0) {
        __dest = (undefined4 *)&DAT_0061ac58;
        if ((pbVar13 != (byte *)0x0) && (*pbVar13 != 0)) {
          __n = (long)pbVar9 - (long)pbVar13;
          uVar11 = __n + 4 & 0xfffffffffffffffc;
          puVar5 = operator_new__(uVar11 + 0x17);
          LOCK();
          *puVar5 = 0;
          UNLOCK();
          *(ulong *)(puVar5 + 2) = uVar11;
          __dest = puVar5 + 4;
          memcpy(__dest,pbVar13,__n);
          *(undefined1 *)((long)puVar5 + __n + 0x10) = 0;
        }
        *param_1 = __dest;
        return;
      }
    }
LAB_0049cb3e:
    *param_1 = pbVar13;
    pbVar13 = pbVar13 + -0x10;
    if (pbVar13 == (byte *)&emptyString) {
      return;
    }
    LOCK();
    *(int *)pbVar13 = *(int *)pbVar13 + 1;
    UNLOCK();
    return;
  }
LAB_0049cb61:
  *param_1 = &DAT_0061ac58;
  return;
}


