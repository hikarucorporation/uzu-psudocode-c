// Function : operator==
// Namespace: juce:KeyPress
// Entry    : 00274290
// Prototype: undefined8 operator==(wint_t param_1, wint_t param_2, wint_t param_3, wint_t * param_4)
// Body     : 00274290 - 002742e6


/* juce::KeyPress::TEMPNAMEPLACEHOLDERVALUE(juce::KeyPress const&) const */

undefined8 __thiscall
juce::KeyPress::operator==(wint_t param_1,wint_t param_2,wint_t param_3,wint_t *param_4)

{
  wint_t wVar1;
  wint_t wVar2;
  undefined8 uVar3;
  undefined4 extraout_var;
  
  if ((param_4[1] == param_2) &&
     (((wVar1 = param_4[2], wVar1 == 0 || (param_3 == 0)) || (wVar1 == param_3)))) {
    uVar3 = CONCAT71((uint7)(uint3)(wVar1 >> 8),1);
    if (((*param_4 != param_1) && (uVar3 = 0, (int)param_1 < 0x100)) && ((int)*param_4 < 0x100)) {
      wVar1 = towlower(param_1);
      wVar2 = towlower(*param_4);
      return CONCAT71((int7)(CONCAT44(extraout_var,wVar2) >> 8),wVar1 == wVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


