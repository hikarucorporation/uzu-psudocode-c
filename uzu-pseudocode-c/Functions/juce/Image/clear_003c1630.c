// Function : clear
// Namespace: juce:Image
// Entry    : 003c1630
// Prototype: undefined clear(Image * this, undefined8 param_1, undefined4 param_2)
// Body     : 003c1630 - 003c16e7


/* juce::Image::clear(juce::Rectangle<int> const&, juce::Colour) */

void __thiscall juce::Image::clear(Image *this,undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  void *pvVar2;
  long *local_48;
  undefined4 local_40 [2];
  void *local_38;
  long *plStack_30;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  if (this != (Image *)0x0) {
    (**(code **)(*(long *)this + 0x10))(&local_48,this);
    local_38 = (void *)0x0;
    plStack_30 = (long *)0x0;
    local_28 = ZEXT416(DAT_005d9038);
    local_18 = 0x3f800000;
                    /* try { // try from 003c1679 to 003c1683 has its CatchHandler @ 003c16ed */
    local_40[0] = param_2;
    (**(code **)(*local_48 + 0x90))(local_48,local_40);
    if (plStack_30 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plStack_30 + 8))();
      }
    }
    pvVar2 = local_38;
    if (local_38 != (void *)0x0) {
      *(undefined4 *)((long)local_38 + 0x24) = 0;
      free(*(void **)((long)local_38 + 0x18));
      operator_delete(pvVar2);
    }
                    /* try { // try from 003c16c4 to 003c16d1 has its CatchHandler @ 003c16e8 */
    (**(code **)(*local_48 + 0xb0))(local_48,param_1,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
  }
  return;
}


