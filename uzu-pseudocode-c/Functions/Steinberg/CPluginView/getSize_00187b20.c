// Function : getSize
// Namespace: Steinberg:CPluginView
// Entry    : 00187b20
// Prototype: undefined8 getSize(CPluginView * this, undefined8 * param_1)
// Body     : 00187b20 - 00187b34


/* non-virtual thunk to Steinberg::CPluginView::getSize(Steinberg::ViewRect*) */

undefined8 __thiscall Steinberg::CPluginView::getSize(CPluginView *this,undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 2;
  }
  uVar1 = *(undefined8 *)(this + 0x10);
  *param_1 = *(undefined8 *)(this + 8);
  param_1[1] = uVar1;
  return 0;
}


