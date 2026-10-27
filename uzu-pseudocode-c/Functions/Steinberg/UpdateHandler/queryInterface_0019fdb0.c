// Function : queryInterface
// Namespace: Steinberg:UpdateHandler
// Entry    : 0019fdb0
// Prototype: undefined8 queryInterface(UpdateHandler * this, long * param_1, long * param_2)
// Body     : 0019fdb0 - 0019fe72


/* Steinberg::UpdateHandler::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::UpdateHandler::queryInterface(UpdateHandler *this,long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((lVar1 == IUpdateHandler::iid._8_8_) && (param_1[1] == IUpdateHandler::iid._16_8_)) {
    (**(code **)(*(long *)this + 8))(this);
    this = this + 0x10;
  }
  else if ((lVar1 == IUpdateManager::iid._8_8_) && (param_1[1] == IUpdateManager::iid._16_8_)) {
    (**(code **)(*(long *)this + 8))(this);
    this = this + 0x18;
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


