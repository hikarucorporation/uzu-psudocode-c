// Function : queryInterface
// Namespace: Steinberg:CPluginView
// Entry    : 0019ffd0
// Prototype: undefined8 queryInterface(CPluginView * this, long * param_1, long * param_2)
// Body     : 0019ffd0 - 001a006d


/* Steinberg::CPluginView::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::CPluginView::queryInterface(CPluginView *this,long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((lVar1 == IPlugView::iid._8_8_) && (param_1[1] == IPlugView::iid._16_8_)) {
    (**(code **)(*(long *)this + 8))(this);
    this = this + 0x10;
  }
  else {
    if ((((lVar1 != FUnknown::iid._8_8_) || (param_1[1] != FUnknown::iid._16_8_)) &&
        ((lVar1 != IDependent::iid._8_8_ || (param_1[1] != IDependent::iid._16_8_)))) &&
       ((lVar1 != FObject::iid._8_8_ || (param_1[1] != FObject::iid._16_8_)))) {
      *param_2 = 0;
      return 0xffffffff;
    }
    (**(code **)(*(long *)this + 8))(this);
  }
  *param_2 = (long)this;
  return 0;
}


