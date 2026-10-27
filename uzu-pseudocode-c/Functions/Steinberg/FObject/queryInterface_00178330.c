// Function : queryInterface
// Namespace: Steinberg:FObject
// Entry    : 00178330
// Prototype: undefined8 queryInterface(FObject * this, long * param_1, undefined8 * param_2)
// Body     : 00178330 - 001783a8


/* Steinberg::FObject::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::FObject::queryInterface(FObject *this,long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((((lVar1 == FUnknown::iid._8_8_) && (param_1[1] == FUnknown::iid._16_8_)) ||
      ((lVar1 == IDependent::iid._8_8_ && (param_1[1] == IDependent::iid._16_8_)))) ||
     ((lVar1 == iid._8_8_ && (param_1[1] == iid._16_8_)))) {
    (**(code **)(*(long *)this + 8))(this);
    *param_2 = this;
    return 0;
  }
  *param_2 = 0;
  return 0xffffffff;
}


