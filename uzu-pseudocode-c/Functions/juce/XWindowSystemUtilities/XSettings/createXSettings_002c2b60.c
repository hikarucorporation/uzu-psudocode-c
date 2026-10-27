// Function : createXSettings
// Namespace: juce:XWindowSystemUtilities:XSettings
// Entry    : 002c2b60
// Prototype: undefined createXSettings(XSettings * this, undefined8 param_1)
// Body     : 002c2b60 - 002c2c2d


/* juce::XWindowSystemUtilities::XSettings::createXSettings(_XDisplay*) */

void __thiscall
juce::XWindowSystemUtilities::XSettings::createXSettings(XSettings *this,undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  XSettings *this_00;
  
  lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  uVar3 = (**(code **)(lVar2 + 0x1f0))(param_1,"_XSETTINGS_SETTINGS",0);
  lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  pcVar1 = *(code **)(lVar2 + 0x198);
  lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  uVar4 = (**(code **)(lVar2 + 0x1f0))(param_1,"_XSETTINGS_S0",0);
  lVar2 = (*pcVar1)(param_1,uVar4);
  if (lVar2 == 0) {
    *(undefined8 *)this = 0;
  }
  else {
    this_00 = operator_new(0x80);
    *(undefined8 *)this_00 = param_1;
    *(long *)(this_00 + 8) = lVar2;
    *(undefined8 *)(this_00 + 0x10) = uVar3;
    *(undefined4 *)(this_00 + 0x18) = 0xffffffff;
    *(XSettings **)(this_00 + 0x20) = this_00 + 0x50;
    *(undefined8 *)(this_00 + 0x28) = 1;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined4 *)(this_00 + 0x40) = 0x3f800000;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined4 *)(this_00 + 0x78) = 0;
                    /* try { // try from 002c2c10 to 002c2c17 has its CatchHandler @ 002c2c2e */
    update(this_00);
    *(XSettings **)this = this_00;
  }
  return;
}


