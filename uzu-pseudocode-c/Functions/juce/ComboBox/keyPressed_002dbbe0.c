// Function : keyPressed
// Namespace: juce:ComboBox
// Entry    : 002dbbe0
// Prototype: undefined8 keyPressed(ComboBox * this, int * param_1)
// Body     : 002dbbe0 - 002dbc3f


/* juce::ComboBox::keyPressed(juce::KeyPress const&) */

undefined8 __thiscall juce::ComboBox::keyPressed(ComboBox *this,int *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  uVar2 = param_1[1] & 7;
  if (((iVar3 == 0x10000052) && (uVar2 == 0)) || ((iVar3 == 0x10000051 && (uVar2 == 0)))) {
    iVar3 = -1;
  }
  else {
    if (((iVar3 != 0x10000054) || (uVar2 != 0)) && ((iVar3 != 0x10000053 || (uVar2 != 0)))) {
      if (iVar3 != 0xd) {
        return 0;
      }
      if (uVar2 != 0) {
        return 0;
      }
      uVar1 = showPopupIfNotActive(this);
      goto LAB_002dbc0b;
    }
    iVar3 = 1;
  }
  uVar1 = nudgeSelectedItem(this,iVar3);
LAB_002dbc0b:
  return CONCAT71((int7)((ulong)uVar1 >> 8),1);
}


