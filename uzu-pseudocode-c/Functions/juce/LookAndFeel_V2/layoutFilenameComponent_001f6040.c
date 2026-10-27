// Function : layoutFilenameComponent
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f6040
// Prototype: undefined layoutFilenameComponent(undefined8 param_1_00, long param_2, Component * param_3, Component * param_4)
// Body     : 001f6040 - 001f615e


/* juce::LookAndFeel_V2::layoutFilenameComponent(juce::FilenameComponent&, juce::ComboBox*,
   juce::Button*) */

void __thiscall
juce::LookAndFeel_V2::layoutFilenameComponent
          (undefined8 param_1_00,long param_2,Component *param_3,Component *param_4)

{
  int iVar1;
  int iVar2;
  Component *this;
  Component *pCVar3;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar4;
  
  if ((param_3 == (Component *)0x0) || (param_4 == (Component *)0x0)) {
    return;
  }
  Component::setBounds
            (param_4,*(int *)(param_4 + 0x38),*(int *)(param_4 + 0x3c),0x50,*(int *)(param_2 + 0x44)
            );
  this = (Component *)__dynamic_cast(param_4,&Button::typeinfo,&TextButton::typeinfo,0);
  if (this != (Component *)0x0) {
    iVar1 = *(int *)(this + 0x44);
    pCVar3 = this;
    do {
      if ((*(long *)(pCVar3 + 0x68) != 0) &&
         (pLVar4 = *(LookAndFeel_V4 **)(*(long *)(pCVar3 + 0x68) + 0x10),
         pLVar4 != (LookAndFeel_V4 *)0x0)) goto LAB_001f60ff;
      pCVar3 = *(Component **)(pCVar3 + 0x30);
    } while (pCVar3 != (Component *)0x0);
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001f60d8 to 001f60e1 has its CatchHandler @ 001f6172 */
      this_00 = operator_new(0x1d0);
                    /* try { // try from 001f60e5 to 001f60ec has its CatchHandler @ 001f615f */
      Desktop::Desktop(this_00);
      Desktop::instance = this_00;
    }
    pLVar4 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_001f60ff:
    iVar2 = (**(code **)(*(long *)(pLVar4 + 8) + 0x20))(pLVar4 + 8,this,iVar1);
    Component::setBounds(this,*(int *)(this + 0x38),*(int *)(this + 0x3c),iVar2,iVar1);
  }
  Component::setBounds
            (param_4,*(int *)(param_2 + 0x40) - *(int *)(param_4 + 0x40),0,*(int *)(param_4 + 0x40),
             *(int *)(param_4 + 0x44));
  Component::setBounds(param_3,0,0,*(int *)(param_4 + 0x38),*(int *)(param_2 + 0x44));
  return;
}


