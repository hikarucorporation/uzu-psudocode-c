// Function : CustomDial
// Namespace: juce:CustomDial
// Entry    : 0016b400
// Prototype: undefined CustomDial(undefined8 param_1, undefined8 param_2, undefined8 param_3, CustomDial * this)
// Body     : 0016b400 - 0016b554


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::CustomDial::CustomDial() */

void __thiscall
juce::CustomDial::CustomDial
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,CustomDial *this)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  undefined4 local_28 [2];
  undefined4 local_20 [2];
  
  Slider::Slider(param_1,param_2,param_3,(Slider *)this);
  Timer::Timer((Timer *)(this + 0x1a8));
  *(undefined ***)this = &PTR__CustomDial_00701080;
  *(undefined ***)(this + 0xf0) = &PTR__CustomDial_00701270;
  *(undefined ***)(this + 0x1a8) = &PTR__CustomDial_007012a0;
  this[0x1d0] = (CustomDial)0x1;
  *(undefined4 *)(this + 0x1d1) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  uVar1 = Slider::getRotaryParameters((Slider *)this);
  Slider::setRotaryParameters(_DAT_005d90d0,(long)this,(char)uVar1);
                    /* try { // try from 0016b47b to 0016b54a has its CatchHandler @ 0016b555 */
  Slider::setSliderStyle((Slider *)this,7);
  Slider::setRange(0,DAT_005d90a0,0,(Slider *)this);
  Slider::setValue(DAT_005d90a8,(long)this,3);
  Slider::setTextBoxStyle((Slider *)this,0,1,100,0x19);
  Colour::Colour((Colour *)local_20,(Colour)0x64,(Colour)0xc8,(Colour)0xff);
  Component::setColour((Component *)this,0x30100301,local_20[0]);
  Colour::Colour((Colour *)local_28,(Colour)0xff,(Colour)0xff,(Colour)0xff);
  Component::setColour((Component *)this,0x30100302,local_28[0]);
  Colour::Colour((Colour *)local_30,(Colour)0xf,(Colour)0xf,(Colour)0xf);
  Component::setColour((Component *)this,0x30100303,local_30[0]);
  return;
}


