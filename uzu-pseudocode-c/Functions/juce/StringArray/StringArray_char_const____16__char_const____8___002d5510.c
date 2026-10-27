// Function : StringArray<char_const(&)[16],char_const(&)[8]>
// Namespace: juce:StringArray
// Entry    : 002d5510
// Prototype: undefined StringArray<char_const(&)[16],char_const(&)[8]>(StringArray * this)
// Body     : 002d5510 - 002d56f4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::StringArray::StringArray<char const (&) [16], char const (&) [8]>(juce::StringRef, char
   const (&) [16], char const (&) [8]) */

void __thiscall
juce::StringArray::StringArray<char_const(&)[16],char_const(&)[8]>(StringArray *this)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  puVar4 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>((byte *)this);
  LinuxComponentPeer::settingChanged(juce::XWindowSystemUtilities::XSetting_const&)::
  possibleSettings = (void *)0x0;
  _DAT_0071c730 = 0;
                    /* try { // try from 002d552a to 002d5533 has its CatchHandler @ 002d570f */
  piVar5 = operator_new__(0x27);
  LOCK();
  *piVar5 = 0;
  UNLOCK();
  piVar5[2] = 0x10;
  uVar2 = s_Gdk_UnscaledDPI_005dd2b0._8_8_;
  piVar5[3] = 0;
  *(undefined8 *)(piVar5 + 4) = s_Gdk_UnscaledDPI_005dd2b0._0_8_;
  *(undefined8 *)(piVar5 + 6) = uVar2;
                    /* try { // try from 002d5550 to 002d5559 has its CatchHandler @ 002d56f5 */
  piVar6 = operator_new__(0x1f);
  LOCK();
  *piVar6 = 0;
  UNLOCK();
  piVar6[2] = 8;
  piVar6[3] = 0;
  piVar6[4] = 0x2f746658;
  piVar6[5] = 0x495044;
  LOCK();
  iVar1 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar6);
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
  }
  if (iVar1 == 0) {
    operator_delete__(piVar5);
  }
  iVar1 = DAT_0071c734;
  if ((int)DAT_0071c730 < DAT_0071c734 + 3) {
    uVar8 = DAT_0071c734 + (DAT_0071c734 + 3) / 2 + 0xb;
    uVar9 = uVar8 & 0xfffffff8;
    if (DAT_0071c730 != uVar9) {
      if ((int)uVar9 < 1) {
        free(LinuxComponentPeer::settingChanged(juce::XWindowSystemUtilities::XSetting_const&)::
             possibleSettings);
        LinuxComponentPeer::settingChanged(juce::XWindowSystemUtilities::XSetting_const&)::
        possibleSettings = (void *)0x0;
      }
      else {
        pvVar7 = malloc((ulong)uVar9 << 3);
        pvVar3 = LinuxComponentPeer::settingChanged(juce::XWindowSystemUtilities::XSetting_const&)::
                 possibleSettings;
        if (0 < iVar1) {
          lVar10 = 0;
          do {
            *(undefined8 *)((long)pvVar7 + lVar10 * 8) = *(undefined8 *)((long)pvVar3 + lVar10 * 8);
            *(undefined1 **)((long)pvVar3 + lVar10 * 8) = &DAT_0061ac58;
            lVar10 = lVar10 + 1;
          } while (iVar1 != lVar10);
        }
        pvVar3 = LinuxComponentPeer::settingChanged(juce::XWindowSystemUtilities::XSetting_const&)::
                 possibleSettings;
        LinuxComponentPeer::settingChanged(juce::XWindowSystemUtilities::XSetting_const&)::
        possibleSettings = pvVar7;
        free(pvVar3);
      }
    }
    _DAT_0071c730 = CONCAT44(DAT_0071c734,uVar8) & 0xfffffffffffffff8;
  }
  lVar10 = (long)DAT_0071c734;
  *(undefined4 **)
   ((long)LinuxComponentPeer::settingChanged(juce::XWindowSystemUtilities::XSetting_const&)::
          possibleSettings + lVar10 * 8) = puVar4;
  pvVar3 = LinuxComponentPeer::settingChanged(juce::XWindowSystemUtilities::XSetting_const&)::
           possibleSettings;
  DAT_0071c734 = DAT_0071c734 + 2;
                    /* try { // try from 002d5683 to 002d56d2 has its CatchHandler @ 002d570f */
  puVar4 = operator_new__(0x27);
  LOCK();
  *puVar4 = 0;
  UNLOCK();
  *(undefined8 *)(puVar4 + 2) = 0x10;
  uVar2 = s_Gdk_UnscaledDPI_005dd2b0._8_8_;
  *(undefined8 *)(puVar4 + 4) = s_Gdk_UnscaledDPI_005dd2b0._0_8_;
  *(undefined8 *)(puVar4 + 6) = uVar2;
  *(undefined4 **)((long)pvVar3 + lVar10 * 8 + 8) = puVar4 + 4;
  pvVar3 = LinuxComponentPeer::settingChanged(juce::XWindowSystemUtilities::XSetting_const&)::
           possibleSettings;
  lVar10 = (long)DAT_0071c734;
  _DAT_0071c730 = CONCAT44(DAT_0071c734 + 1,DAT_0071c730);
  puVar4 = operator_new__(0x1f);
  LOCK();
  *puVar4 = 0;
  UNLOCK();
  *(undefined8 *)(puVar4 + 2) = 8;
  *(undefined8 *)(puVar4 + 4) = 0x4950442f746658;
  *(undefined4 **)((long)pvVar3 + lVar10 * 8) = puVar4 + 4;
  return;
}


