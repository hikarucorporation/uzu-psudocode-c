// Function : mouseWheelMove
// Namespace: juce:ComboBox
// Entry    : 002db290
// Prototype: undefined mouseWheelMove(ComboBox * this, ulong * param_1, long param_2)
// Body     : 002db290 - 002db413


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::ComboBox::mouseWheelMove(juce::MouseEvent const&, juce::MouseWheelDetails const&) */

void __thiscall juce::ComboBox::mouseWheelMove(ComboBox *this,ulong *param_1,long param_2)

{
  ComboBox *pCVar1;
  float fVar2;
  float fVar3;
  float afStack_78 [24];
  
  if (((this[0x185] == (ComboBox)0x0) && (this[0x186] != (ComboBox)0x0)) &&
     ((ComboBox *)param_1[6] == this)) {
    fVar2 = *(float *)(param_2 + 4);
    fVar3 = (float)(_DAT_005d91c0 & (uint)fVar2);
    if (fVar3 == DAT_005d94c8) {
      if ((fVar2 == 0.0) && (!NAN(fVar2))) goto LAB_002db3c0;
    }
    else if ((fVar3 <= DAT_005d94cc) || (fVar3 <= DAT_005d94d0 * fVar3)) goto LAB_002db3c0;
    fVar2 = fVar2 * DAT_00652628 + *(float *)(this + 0x188);
    *(float *)(this + 0x188) = fVar2;
    if (DAT_005d9038 < fVar2) {
      do {
        *(float *)(this + 0x188) = fVar2 + DAT_005d9054;
        nudgeSelectedItem(this,-1);
        fVar2 = *(float *)(this + 0x188);
      } while (DAT_005d9038 < fVar2);
    }
    if (fVar2 < DAT_005d9054) {
      do {
        *(float *)(this + 0x188) = fVar2 + DAT_005d9038;
        nudgeSelectedItem(this,1);
        fVar2 = *(float *)(this + 0x188);
      } while (fVar2 < DAT_005d9054);
    }
  }
  else {
LAB_002db3c0:
    while (this = *(ComboBox **)(this + 0x30), this != (ComboBox *)0x0) {
      pCVar1 = this;
      while ((*(ushort *)(pCVar1 + 0xe8) & 0x8000) == 0) {
        pCVar1 = *(ComboBox **)(pCVar1 + 0x30);
        if (pCVar1 == (ComboBox *)0x0) {
          if (this == (ComboBox *)0x0) {
            return;
          }
          MouseEvent::getEventRelativeTo(afStack_78,param_1,(long *)this);
          (**(code **)(*(long *)this + 0x48))(this,afStack_78,param_2);
          return;
        }
      }
    }
  }
  return;
}


