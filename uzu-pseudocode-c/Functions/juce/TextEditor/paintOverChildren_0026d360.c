// Function : paintOverChildren
// Namespace: juce:TextEditor
// Entry    : 0026d360
// Prototype: undefined paintOverChildren(TextEditor * this, Graphics * param_1, undefined8 param_2, undefined8 param_3, uint * param_4, undefined8 * param_5)
// Body     : 0026d360 - 0026d4b6


/* juce::TextEditor::paintOverChildren(juce::Graphics&) */

void __thiscall
juce::TextEditor::paintOverChildren
          (TextEditor *this,Graphics *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
          undefined8 *param_5)

{
  int iVar1;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar2;
  int iVar3;
  int iVar4;
  TextEditor *pTVar5;
  int iVar6;
  
  pTVar5 = this + 8;
  if (((**(char **)(this + 0x298) != '\0') && (Component::currentlyFocusedComponent != pTVar5)) &&
     (iVar1 = (**(code **)(*(long *)this + 0x50))(this), iVar1 == 0)) {
    Graphics::setColour(param_1,*(undefined4 *)(this + 0x2a0));
    if (param_1[0x10] != (Graphics)0x0) {
      param_1[0x10] = (Graphics)0x0;
      (**(code **)(**(long **)(param_1 + 8) + 0x70))();
    }
    (**(code **)(**(long **)(param_1 + 8) + 0xf8))(*(long **)(param_1 + 8),this + 0x288);
    iVar3 = (int)*(undefined8 *)(this + 0x278);
    iVar1 = *(int *)(*(long *)(this + 0x188) + 0x40) - iVar3;
    if (iVar1 != 0 && iVar3 <= *(int *)(*(long *)(this + 0x188) + 0x40)) {
      iVar6 = (int)((ulong)*(undefined8 *)(this + 0x278) >> 0x20);
      iVar4 = *(int *)(this + 0x4c) - iVar6;
      if (0 < iVar4) {
        Graphics::drawText(CONCAT44((float)iVar6,(float)iVar3),CONCAT44((float)iVar4,(float)iVar1),
                           (long)param_1,(ulong *)(this + 0x298),*(uint *)(this + 0x1a8),1,param_4,
                           param_5);
      }
    }
  }
  do {
    if ((*(long *)(pTVar5 + 0x68) != 0) &&
       (pLVar2 = *(LookAndFeel_V4 **)(*(long *)(pTVar5 + 0x68) + 0x10),
       pLVar2 != (LookAndFeel_V4 *)0x0)) goto LAB_0026d490;
    pTVar5 = *(TextEditor **)(pTVar5 + 0x30);
  } while (pTVar5 != (TextEditor *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0026d469 to 0026d472 has its CatchHandler @ 0026d4ca */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0026d476 to 0026d47d has its CatchHandler @ 0026d4b7 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar2 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0026d490:
                    /* WARNING: Could not recover jumptable at 0x0026d4b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(pLVar2 + 0x18) + 0x18))
            (pLVar2 + 0x18,param_1,*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),this);
  return;
}


