// Function : release
// Namespace: Steinberg:CPluginView
// Entry    : 001a0080
// Prototype: int release(CPluginView * this)
// Body     : 001a0080 - 001a00a1


/* Steinberg::CPluginView::release() */

int __thiscall Steinberg::CPluginView::release(CPluginView *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  UNLOCK();
  if (*(int *)(this + 8) == 0) {
    *(undefined4 *)(this + 8) = 0xfffffc18;
    (**(code **)(*(long *)this + 0x28))();
    return 0;
  }
  return *(int *)(this + 8);
}


