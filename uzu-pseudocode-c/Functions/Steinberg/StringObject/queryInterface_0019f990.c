// Function : queryInterface
// Namespace: Steinberg:StringObject
// Entry    : 0019f990
// Prototype: undefined8 queryInterface(StringObject * this, long * param_1, long * param_2)
// Body     : 0019f990 - 0019fa52


/* Steinberg::StringObject::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::StringObject::queryInterface(StringObject *this,long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((lVar1 == IStringResult::iid._8_8_) && (param_1[1] == IStringResult::iid._16_8_)) {
    (**(code **)(*(long *)this + 8))(this);
    this = this + 0x28;
  }
  else if ((lVar1 == IString::iid._8_8_) && (param_1[1] == IString::iid._16_8_)) {
    (**(code **)(*(long *)this + 8))(this);
    this = this + 0x30;
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


