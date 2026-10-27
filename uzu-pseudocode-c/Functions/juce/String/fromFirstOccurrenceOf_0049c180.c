// Function : fromFirstOccurrenceOf
// Namespace: juce:String
// Entry    : 0049c180
// Prototype: undefined fromFirstOccurrenceOf(long * param_1, long * param_2, byte * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6)
// Body     : 0049c180 - 0049c3e7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::fromFirstOccurrenceOf(juce::StringRef, bool, bool) const */

void __cdecl
juce::String::fromFirstOccurrenceOf
          (long *param_1,long *param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 unaff_RBP;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  int iVar14;
  
  uVar11 = CONCAT71((int7)((ulong)unaff_RBP >> 8),*param_3);
  if (*param_3 != 0) {
    iVar3 = 0;
    uVar9 = uVar11 & 0xffffffff;
    pbVar4 = param_3;
    do {
      pbVar13 = pbVar4 + 1;
      if ((char)uVar9 < '\0') {
        do {
          pbVar5 = pbVar4 + 1;
          uVar9 = (ulong)*pbVar5;
          pbVar13 = pbVar4 + 1;
          pbVar4 = pbVar13;
        } while ((*pbVar5 & 0xc0) == 0x80);
      }
      else {
        if ((char)uVar9 == '\0') goto LAB_0049c1f4;
        uVar9 = CONCAT71((int7)(uVar9 >> 8),*pbVar13);
      }
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar13;
    } while( true );
  }
  iVar14 = 0;
  goto LAB_0049c323;
LAB_0049c1f4:
  iVar14 = 0;
  pbVar4 = (byte *)*param_2;
  while (uVar2 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           (pbVar4,param_3,iVar3,uVar9,param_5,(uint)param_6), uVar2 != 0) {
    pbVar13 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar9 = (ulong)bVar1;
    if (-1 < (char)bVar1) goto LAB_0049c2f0;
    if ((bVar1 & 0x40) == 0) {
      uVar9 = (ulong)(bVar1 & 0x7f);
      if ((bVar1 & 0x7f) == 0) goto LAB_0049c307;
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
      uVar9 = (ulong)uVar2;
      if ((pbVar4[1] & 0xc0) == 0x80) {
        pbVar5 = pbVar4 + lVar12 + 2;
        uVar2 = pbVar4[1] & 0x3f | uVar2 << 6;
        uVar9 = (ulong)uVar2;
        pbVar13 = pbVar5;
        if ((char)param_6 == '\0') goto LAB_0049c2f0;
        pbVar13 = pbVar4 + 2;
        if ((*pbVar13 & 0xffffffc0) != 0x80) goto LAB_0049c2f0;
        uVar2 = *pbVar13 & 0x3f | uVar2 << 6;
        uVar9 = (ulong)uVar2;
        pbVar13 = pbVar5;
        if ((char)param_5 == '\0') goto LAB_0049c2f0;
        uVar10 = (uint)pbVar4[3];
        pbVar13 = pbVar4 + 3;
        if ((uVar10 & 0xffffffc0) == 0x80) {
          uVar2 = uVar2 << 6 | uVar10 & 0x3f;
          uVar9 = (ulong)uVar2;
          pbVar13 = pbVar5;
        }
      }
      else {
LAB_0049c2f0:
        uVar2 = (uint)uVar9;
      }
      if (uVar2 == 0) {
LAB_0049c307:
        *param_1 = (long)&DAT_0061ac58;
        return;
      }
    }
    iVar14 = iVar14 + 1;
    pbVar4 = pbVar13;
  }
LAB_0049c323:
  iVar8 = 0;
  iVar3 = iVar14;
  do {
    iVar3 = iVar3 + 1;
    if ((char)uVar11 < '\0') {
      do {
        bVar1 = param_3[1];
        param_3 = param_3 + 1;
      } while ((bVar1 & 0xc0) == 0x80);
    }
    else {
      if ((char)uVar11 == '\0') break;
      bVar1 = param_3[1];
      param_3 = param_3 + 1;
    }
    uVar11 = (ulong)bVar1;
    iVar8 = iVar8 + 1;
  } while( true );
  if (iVar14 + iVar8 == 0 || SCARRY4(iVar14,iVar8) != iVar14 + iVar8 < 0) {
    lVar12 = *param_2;
    *param_1 = lVar12;
    piVar6 = (int *)(lVar12 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
  }
  else {
    pbVar4 = (byte *)*param_2;
    do {
      bVar1 = *pbVar4;
      if (bVar1 == 0) {
        puVar7 = (undefined4 *)&DAT_0061ac58;
        goto LAB_0049c3d5;
      }
      pbVar13 = pbVar4 + 1;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar13 = pbVar4 + 2;
        }
        else {
          pbVar13 = pbVar4 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      iVar3 = iVar3 + -1;
      pbVar4 = pbVar13;
    } while (1 < iVar3);
    puVar7 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar13);
LAB_0049c3d5:
    *param_1 = (long)puVar7;
  }
  return;
}


