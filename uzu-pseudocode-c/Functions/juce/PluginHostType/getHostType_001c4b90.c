// Function : getHostType
// Namespace: juce:PluginHostType
// Entry    : 001c4b90
// Prototype: undefined4 getHostType(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, uint * param_5, undefined8 param_6)
// Body     : 001c4b90 - 001c4db2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::PluginHostType::getHostType() */

undefined4 __cdecl
juce::PluginHostType::getHostType
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint *param_5
          ,ulong param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 uVar8;
  byte *pbVar9;
  int *piVar10;
  byte *local_30;
  long local_28;
  byte *local_20;
  
  File::getSpecialLocation((File *)&local_30,0xd,param_3,param_4,param_5,param_6);
  local_20 = local_30;
  pbVar9 = local_30 + -0x10;
  if (pbVar9 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar9 = *(int *)pbVar9 + 1;
    UNLOCK();
  }
  pbVar9 = local_30 + -0x10;
  uVar4 = extraout_RDX;
  if (pbVar9 != (byte *)&emptyString) {
    LOCK();
    iVar7 = *(int *)pbVar9;
    *(int *)pbVar9 = *(int *)pbVar9 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      operator_delete__(pbVar9);
      uVar4 = extraout_RDX_00;
    }
  }
                    /* try { // try from 001c4be5 to 001c4bf3 has its CatchHandler @ 001c4dd8 */
  uVar3 = (uint)param_6;
  File::parseAbsolutePath((File *)&local_28,(uint *)&local_20,uVar4,param_4,param_5,param_6);
                    /* try { // try from 001c4bf4 to 001c4c02 has its CatchHandler @ 001c4db3 */
  File::getFileName(&local_30,&local_28);
  piVar10 = (int *)(local_28 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar7 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      operator_delete__(piVar10);
    }
  }
  uVar4 = juce::String::containsIgnoreCase((String *)&local_30,(byte *)"Ardour");
  if ((char)uVar4 == '\0') {
    pcVar6 = "Waveform";
    iVar7 = 0;
    do {
      cVar1 = *pcVar6;
      if (cVar1 < '\0') {
        do {
          pbVar9 = (byte *)(pcVar6 + 1);
          pcVar6 = pcVar6 + 1;
        } while ((*pbVar9 & 0xc0) == 0x80);
      }
      else {
        pcVar6 = pcVar6 + 1;
        if (cVar1 == '\0') goto LAB_001c4c92;
      }
      iVar7 = iVar7 + 1;
    } while( true );
  }
  uVar8 = 0xe;
  goto LAB_001c4d6a;
LAB_001c4d19:
  uVar3 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (local_30,&DAT_005e286a,iVar7,pcVar6,param_5,uVar3);
  if (uVar3 == 0) {
    uVar8 = 0x12;
  }
  else {
    uVar4 = juce::String::containsIgnoreCase((String *)&local_30,(byte *)"pluginval");
    uVar8 = 0x20;
    if ((char)uVar4 == '\0') {
      uVar4 = juce::String::containsIgnoreCase((String *)&local_30,(byte *)"AudioPluginHost");
      uVar8 = 0x1a;
      if ((char)uVar4 == '\0') {
        uVar8 = 0;
      }
    }
  }
  goto LAB_001c4d6a;
LAB_001c4c92:
  uVar2 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (local_30,(byte *)"Waveform",iVar7);
  if (uVar2 == 0) {
    uVar8 = 0x3e;
  }
  else {
    uVar4 = juce::String::containsIgnoreCase((String *)&local_30,(byte *)"Tracktion");
    uVar8 = 0x3d;
    if ((char)uVar4 == '\0') {
      iVar7 = 0;
      pcVar6 = "Bitwig";
      do {
        if (*pcVar6 < '\0') {
          do {
            pbVar9 = (byte *)(pcVar6 + 1);
            pcVar6 = pcVar6 + 1;
            pcVar5 = pcVar6;
          } while ((*pbVar9 & 0xc0) == 0x80);
        }
        else {
          pcVar5 = pcVar6 + 1;
          if (*pcVar6 == '\0') goto LAB_001c4d19;
        }
        iVar7 = iVar7 + 1;
        pcVar6 = pcVar5;
      } while( true );
    }
  }
LAB_001c4d6a:
  local_30 = local_30 + -0x10;
  if (local_30 != (byte *)&emptyString) {
    LOCK();
    iVar7 = *(int *)local_30;
    *(int *)local_30 = *(int *)local_30 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      operator_delete__(local_30);
    }
  }
  pbVar9 = local_20 + -0x10;
  if (pbVar9 != (byte *)&emptyString) {
    LOCK();
    iVar7 = *(int *)pbVar9;
    *(int *)pbVar9 = *(int *)pbVar9 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      operator_delete__(pbVar9);
    }
  }
  return uVar8;
}


