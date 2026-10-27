// Function : Drawable
// Namespace: juce:Drawable
// Entry    : 002875a0
// Prototype: undefined Drawable(Drawable * this)
// Body     : 002875a0 - 002876ec


/* juce::Drawable::Drawable() */

void __thiscall juce::Drawable::Drawable(Drawable *this)

{
  long *plVar1;
  uint uVar2;
  Drawable *local_30;
  undefined8 local_28;
  code *local_20;
  code *local_18;
  
  *(undefined1 **)(this + 8) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x10) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x18) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x20) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x28) = &DAT_0061ac58;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe5) = 0;
  *(undefined ***)this = &PTR__Drawable_00707b28;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined1 (*) [16])(this + 0x100) = ZEXT416(DAT_005d9038);
  *(undefined8 *)(this + 0x110) = 0x3f800000;
  local_28 = 0;
  local_18 = std::_Function_handler<void(),juce::Drawable::boundsChangeListener::{lambda()#1}>::
             _M_invoke;
  local_20 = std::_Function_handler<void(),juce::Drawable::boundsChangeListener::{lambda()#1}>::
             _M_manager;
                    /* try { // try from 00287673 to 0028767f has its CatchHandler @ 002876f5 */
  local_30 = this;
  detail::BoundsChangeListener::BoundsChangeListener
            ((BoundsChangeListener *)(this + 0x118),(long)this,&local_30);
  if (local_20 != (code *)0x0) {
                    /* try { // try from 0028768a to 00287698 has its CatchHandler @ 002876ed */
    (*local_20)(&local_30,&local_30,3);
  }
  uVar2 = *(uint3 *)(this + 0xe8) & 0xdeffe7 | 0x210008;
  *(short *)(this + 0xe8) = (short)uVar2;
  this[0xea] = SUB41(uVar2 >> 0x10,0);
  plVar1 = *(long **)(this + 0xe0);
  *(undefined8 *)(this + 0xe0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}


