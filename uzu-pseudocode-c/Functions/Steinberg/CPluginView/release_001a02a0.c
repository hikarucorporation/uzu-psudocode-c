// Function : release
// Namespace: Steinberg:CPluginView
// Entry    : 001a02a0
// Prototype: int release(CPluginView * this)
// Body     : 001a02a0 - 001a02c5


/* non-virtual thunk to Steinberg::CPluginView::release() */

int __thiscall Steinberg::CPluginView::release(CPluginView *this)

{
  LOCK();
  *(int *)(this + -8) = *(int *)(this + -8) + -1;
  UNLOCK();
  if (*(int *)(this + -8) == 0) {
    *(undefined4 *)(this + -8) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x10) + 0x28))();
    return 0;
  }
  return *(int *)(this + -8);
}


