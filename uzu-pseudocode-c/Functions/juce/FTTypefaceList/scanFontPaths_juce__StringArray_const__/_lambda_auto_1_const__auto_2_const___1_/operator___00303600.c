// Function : operator()
// Namespace: juce:FTTypefaceList:scanFontPaths_juce__StringArray_const__:_lambda_auto_1_const__auto_2_const___1_
// Entry    : 00303600
// Prototype: ulong operator()(long param_1, long * param_2)
// Body     : 00303600 - 003037db


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* auto juce::FTTypefaceList::scanFontPaths(juce::StringArray const&)::{lambda(auto:1 const&, auto:2
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> > const&,
   std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> > const&) const */

ulong __cdecl
juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::
{lambda(auto:1_const&,auto:2_const&)#1}::operator()(long param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  undefined8 unaff_RBP;
  undefined7 uVar16;
  ulong uVar15;
  
  iVar4 = *(int *)(param_1 + 0x18);
  pbVar8 = *(byte **)(param_1 + 0x10);
  pbVar14 = pbVar8 + -0x10;
  if (pbVar14 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar14 = *(int *)pbVar14 + 1;
    UNLOCK();
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  pbVar9 = *(byte **)(param_1 + 8);
  pbVar1 = pbVar9 + -0x10;
  if (pbVar1 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar1 = *(int *)pbVar1 + 1;
    UNLOCK();
  }
  lVar10 = *param_2;
  iVar6 = *(int *)(lVar10 + 0x18);
  pbVar11 = *(byte **)(lVar10 + 0x10);
  pbVar2 = pbVar11 + -0x10;
  if (pbVar2 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar2 = *(int *)pbVar2 + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(lVar10 + 0x1c);
  pbVar12 = *(byte **)(lVar10 + 8);
  pbVar3 = pbVar12 + -0x10;
  if (pbVar3 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar3 = *(int *)pbVar3 + 1;
    UNLOCK();
  }
  uVar13 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                     (pbVar9,pbVar12);
  uVar16 = (undefined7)((ulong)unaff_RBP >> 8);
  uVar15 = CONCAT71(uVar16,0xff);
  if (-1 < (int)uVar13) {
    uVar13 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                       (pbVar12,pbVar9);
    if ((int)uVar13 < 0) {
      uVar15 = CONCAT71(uVar16,1);
    }
    else if (iVar5 == iVar7) {
      uVar13 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         (pbVar8,pbVar11);
      if (-1 < (int)uVar13) {
        uVar13 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           (pbVar11,pbVar8);
        uVar15 = CONCAT71(uVar16,1);
        if ((-1 < (int)uVar13) &&
           (uVar15 = (ulong)(byte)((iVar6 <= iVar4) * '\x02' - 1), iVar4 == iVar6)) {
          uVar15 = 0;
        }
      }
    }
    else {
      uVar15 = (ulong)CONCAT31((int3)((uint)iVar7 >> 8),(iVar7 <= iVar5) * '\x02' + -1);
    }
  }
  if (pbVar3 != (byte *)&emptyString) {
    LOCK();
    iVar4 = *(int *)pbVar3;
    *(int *)pbVar3 = *(int *)pbVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(pbVar3);
    }
  }
  if (pbVar2 != (byte *)&emptyString) {
    LOCK();
    iVar4 = *(int *)pbVar2;
    *(int *)pbVar2 = *(int *)pbVar2 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(pbVar2);
    }
  }
  if (pbVar1 != (byte *)&emptyString) {
    LOCK();
    iVar4 = *(int *)pbVar1;
    *(int *)pbVar1 = *(int *)pbVar1 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(pbVar1);
    }
  }
  if (pbVar14 != (byte *)&emptyString) {
    LOCK();
    iVar4 = *(int *)pbVar14;
    *(int *)pbVar14 = *(int *)pbVar14 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(pbVar14);
    }
  }
  return CONCAT71((int7)(uVar15 >> 8),(byte)uVar15 >> 7) & 0xffffffff;
}


