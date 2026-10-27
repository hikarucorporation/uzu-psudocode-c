// Function : onSize
// Namespace: Steinberg:CPluginView
// Entry    : 00187ae0
// Prototype: undefined8 onSize(CPluginView * this, undefined8 * param_1)
// Body     : 00187ae0 - 00187aee


/* Steinberg::CPluginView::onSize(Steinberg::ViewRect*) */

undefined8 __thiscall Steinberg::CPluginView::onSize(CPluginView *this,undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = param_1[1];
    *(undefined8 *)(this + 0x18) = *param_1;
    *(undefined8 *)(this + 0x20) = uVar1;
  }
  return 0;
}


