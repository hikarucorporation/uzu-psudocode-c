// Function : getParentOrMainMonitorBounds
// Namespace: juce:detail:ComponentHelpers
// Entry    : 002731a0
// Prototype: undefined1[16] getParentOrMainMonitorBounds(long param_1)
// Body     : 002731a0 - 002732d0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::ComponentHelpers::getParentOrMainMonitorBounds(juce::Component const&) */

undefined1  [16] __cdecl juce::detail::ComponentHelpers::getParentOrMainMonitorBounds(long param_1)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  Desktop *this;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  
  if (param_1 != 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulong *)(param_1 + 0x40);
    return auVar2 << 0x40;
  }
  if (Desktop::instance == (Desktop *)0x0) {
    this = operator_new(0x1d0);
                    /* try { // try from 002731d0 to 002731d7 has its CatchHandler @ 002732d1 */
    Desktop::Desktop(this);
    Desktop::instance = this;
  }
  pcVar4 = (char *)**(undefined8 **)(Desktop::instance + 0xe0);
  uVar6 = (long)*(int *)((long)*(undefined8 **)(Desktop::instance + 0xe0) + 0xc) * 0x70;
  pcVar1 = pcVar4 + uVar6;
  if (0x150 < (long)uVar6) {
    lVar3 = uVar6 / 0x1c0 + 1;
    do {
      pcVar5 = pcVar4;
      if (*pcVar4 != '\0') goto LAB_002732b8;
      if (pcVar4[0x70] != '\0') {
        pcVar5 = pcVar4 + 0x70;
        goto LAB_002732b8;
      }
      if (pcVar4[0xe0] != '\0') {
        pcVar5 = pcVar4 + 0xe0;
        goto LAB_002732b8;
      }
      if (pcVar4[0x150] != '\0') {
        pcVar5 = pcVar4 + 0x150;
        goto LAB_002732b8;
      }
      pcVar4 = pcVar4 + 0x1c0;
      lVar3 = lVar3 + -1;
      uVar6 = uVar6 - 0x1c0;
    } while (1 < lVar3);
  }
  lVar3 = ((long)uVar6 >> 4) * 0x6db6db6db6db6db7;
  if (lVar3 != 1) {
    pcVar5 = pcVar4;
    if (lVar3 != 2) {
      pcVar5 = pcVar1;
      if ((lVar3 != 3) || (pcVar5 = pcVar4, *pcVar4 != '\0')) goto LAB_002732b8;
      pcVar5 = pcVar4 + 0x70;
    }
    if (*pcVar5 != '\0') goto LAB_002732b8;
    pcVar4 = pcVar5 + 0x70;
  }
  pcVar5 = pcVar4;
  if (*pcVar4 == '\0') {
    pcVar5 = pcVar1;
  }
LAB_002732b8:
  pcVar4 = (char *)0x0;
  if (pcVar5 != pcVar1) {
    pcVar4 = pcVar5;
  }
  return *(undefined1 (*) [16])(pcVar4 + 0x14);
}


