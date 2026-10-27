// Function : queryInterface
// Namespace: Steinberg:CPluginView
// Entry    : 001a01e0
// Prototype: undefined8 queryInterface(CPluginView * this, long * param_1, undefined8 * param_2)
// Body     : 001a01e0 - 001a0281


/* non-virtual thunk to Steinberg::CPluginView::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::CPluginView::queryInterface(CPluginView *this,long *param_1,undefined8 *param_2)

{
  long lVar1;
  CPluginView *pCVar2;
  
  pCVar2 = this + -0x10;
  lVar1 = *param_1;
  if ((lVar1 == IPlugView::iid._8_8_) && (param_1[1] == IPlugView::iid._16_8_)) {
    (**(code **)(*(long *)pCVar2 + 8))(pCVar2);
    pCVar2 = this;
  }
  else {
    if ((((lVar1 != FUnknown::iid._8_8_) || (param_1[1] != FUnknown::iid._16_8_)) &&
        ((lVar1 != IDependent::iid._8_8_ || (param_1[1] != IDependent::iid._16_8_)))) &&
       ((lVar1 != FObject::iid._8_8_ || (param_1[1] != FObject::iid._16_8_)))) {
      *param_2 = 0;
      return 0xffffffff;
    }
    (**(code **)(*(long *)pCVar2 + 8))(pCVar2);
  }
  *param_2 = pCVar2;
  return 0;
}


