// Function : getWidthsForTextButtons
// Namespace: juce:LookAndFeel_V2
// Entry    : 001ecae0
// Prototype: undefined8 * getWidthsForTextButtons(undefined8 * param_1, long * param_2, undefined8 param_3, long * param_4)
// Body     : 001ecae0 - 001ecc1a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::getWidthsForTextButtons(juce::AlertWindow&, juce::Array<juce::TextButton*,
   juce::DummyCriticalSection, 0> const&) */

undefined8 * __cdecl
juce::LookAndFeel_V2::getWidthsForTextButtons
          (undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  void *local_68;
  
  uVar2 = *(uint *)((long)param_4 + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
                    /* try { // try from 001ecb03 to 001ecb19 has its CatchHandler @ 001ecc1b */
  uVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (0 < (int)uVar2) {
    local_68 = (void *)0x0;
    iVar8 = 9;
    uVar5 = 1;
    uVar6 = 0;
    uVar9 = 0;
    do {
                    /* try { // try from 001ecba6 to 001ecbaf has its CatchHandler @ 001ecc26 */
      uVar4 = (**(code **)(*param_2 + 0xb0))(param_2,*(undefined8 *)(*param_4 + uVar9 * 8),uVar3);
      uVar1 = uVar9 + 1;
      if ((long)(int)uVar6 <= (long)uVar9) {
        uVar7 = (uVar5 >> 1) + iVar8 & 0xfffffff8;
        if (uVar6 != uVar7) {
          if ((int)uVar7 < 1) {
            free(local_68);
            *param_1 = 0;
            local_68 = (void *)0x0;
          }
          else {
            local_68 = realloc(local_68,(ulong)uVar7 << 2);
            *param_1 = local_68;
          }
        }
        *(uint *)(param_1 + 1) = uVar7;
        uVar6 = uVar7;
      }
      *(int *)((long)param_1 + 0xc) = (int)uVar9 + 1;
      *(undefined4 *)((long)local_68 + uVar9 * 4) = uVar4;
      iVar8 = iVar8 + 1;
      uVar5 = uVar5 + 1;
      uVar9 = uVar1;
    } while (uVar2 != uVar1);
  }
  return param_1;
}


