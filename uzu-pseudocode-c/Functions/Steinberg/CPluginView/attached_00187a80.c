// Function : attached
// Namespace: Steinberg:CPluginView
// Entry    : 00187a80
// Prototype: undefined8 attached(CPluginView * this, undefined8 param_1)
// Body     : 00187a80 - 00187a96


/* non-virtual thunk to Steinberg::CPluginView::attached(void*, char const*) */

undefined8 __thiscall Steinberg::CPluginView::attached(CPluginView *this,undefined8 param_1)

{
  *(undefined8 *)(this + 0x18) = param_1;
  (**(code **)(*(long *)(this + -0x10) + 0x78))(this + -0x10);
  return 0;
}


