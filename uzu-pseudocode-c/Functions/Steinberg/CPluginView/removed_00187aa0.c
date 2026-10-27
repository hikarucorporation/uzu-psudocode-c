// Function : removed
// Namespace: Steinberg:CPluginView
// Entry    : 00187aa0
// Prototype: undefined8 removed(CPluginView * this)
// Body     : 00187aa0 - 00187ab5


/* Steinberg::CPluginView::removed() */

undefined8 __thiscall Steinberg::CPluginView::removed(CPluginView *this)

{
  *(undefined8 *)(this + 0x28) = 0;
  (**(code **)(*(long *)this + 0x80))();
  return 0;
}


