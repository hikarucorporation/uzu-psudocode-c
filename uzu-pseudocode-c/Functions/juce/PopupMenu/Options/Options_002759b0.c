// Function : Options
// Namespace: juce:PopupMenu:Options
// Entry    : 002759b0
// Prototype: undefined Options(Options * this)
// Body     : 002759b0 - 00275a5b


/* juce::PopupMenu::Options::Options() */

void __thiscall juce::PopupMenu::Options::Options(Options *this)

{
  undefined8 uVar1;
  Desktop *this_00;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 1;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x41) = 0;
  *(undefined4 *)(this + 0x4c) = 1;
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002759f8 to 00275a01 has its CatchHandler @ 00275a7f */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 00275a05 to 00275a0c has its CatchHandler @ 00275a5c */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  uVar1 = detail::MouseInputSourceImpl::getScreenPosition
                    ((MouseInputSourceImpl *)
                     **(undefined8 **)(*(long *)(Desktop::instance + 0x40) + 0x28));
  *(ulong *)this =
       (ulong)((double)(float)uVar1 + DAT_005d9098) & 0xffffffff |
       (long)((double)(float)((ulong)uVar1 >> 0x20) + DAT_005d9098) << 0x20;
  return;
}


