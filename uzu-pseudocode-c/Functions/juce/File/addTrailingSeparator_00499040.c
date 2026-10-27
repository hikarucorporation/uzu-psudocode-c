// Function : addTrailingSeparator
// Namespace: juce:File
// Entry    : 00499040
// Prototype: undefined addTrailingSeparator(File * this, char * param_1)
// Body     : 00499040 - 004991b4


/* juce::File::addTrailingSeparator(juce::String const&) */

void __thiscall juce::File::addTrailingSeparator(File *this,char *param_1)

{
  int iVar1;
  byte bVar2;
  size_t sVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  char *local_28;
  uint local_20 [2];
  
  if (*param_1 != '\0') {
    sVar3 = strlen(param_1);
    pcVar4 = param_1 + (sVar3 - 1);
    bVar2 = param_1[sVar3 - 1];
    if ((bVar2 & 0xc0) == 0x80) {
      bVar2 = param_1[sVar3 - 2];
      pcVar4 = param_1 + (sVar3 - 2);
      if ((bVar2 & 0xc0) == 0x80) {
        bVar2 = param_1[sVar3 - 3];
        pcVar4 = param_1 + (sVar3 - 3);
        if ((bVar2 & 0xc0) == 0x80) {
          bVar2 = param_1[sVar3 - 4];
          pcVar4 = param_1 + (sVar3 - 4);
        }
      }
    }
    uVar5 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      if ((bVar2 & 0x40) == 0) {
        uVar5 = bVar2 & 0x7f;
      }
      else {
        uVar7 = 0x3f;
        if ((bVar2 & 0x20) != 0) {
          uVar7 = uVar5 & 0x10 ^ 0x1f;
        }
        uVar5 = uVar5 & uVar7;
        if (((((pcVar4[1] & 0xc0U) == 0x80) &&
             (uVar5 = (byte)pcVar4[1] & 0x3f | uVar5 << 6, (bVar2 & 0x20) != 0)) &&
            ((pcVar4[2] & 0xc0U) == 0x80)) &&
           ((uVar5 = (byte)pcVar4[2] & 0x3f | uVar5 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
            (((byte)pcVar4[3] & 0xffffffc0) == 0x80)))) {
          uVar5 = uVar5 << 6 | (byte)pcVar4[3] & 0x3f;
        }
      }
    }
    if (uVar5 == 0x2f) {
      *(char **)this = param_1;
      piVar6 = (int *)(param_1 + -0x10);
      if (piVar6 == &emptyString) {
        return;
      }
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
      return;
    }
  }
  piVar6 = (int *)(param_1 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  local_20[0] = 0x2f;
  local_20[1] = 0;
                    /* try { // try from 0049916b to 00499177 has its CatchHandler @ 004991b5 */
  local_28 = param_1;
  juce::String::appendCharPointer<juce::CharPointer_UTF32>(&local_28,local_20);
  *(char **)this = local_28;
  piVar6 = (int *)(local_28 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  piVar6 = (int *)(local_28 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
  }
  return;
}


