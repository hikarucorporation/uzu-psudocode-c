// Function : getDynamicObject
// Namespace: juce:var
// Entry    : 004acd20
// Prototype: undefined8 getDynamicObject(var * this)
// Body     : 004acd20 - 004acd4c


/* juce::var::getDynamicObject() const */

undefined8 __thiscall juce::var::getDynamicObject(var *this)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* try { // try from 004acd28 to 004acd2a has its CatchHandler @ 004acd4d */
  lVar1 = (**(code **)(*(long *)this + 0x38))(this + 8);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = __dynamic_cast(lVar1,&ReferenceCountedObject::typeinfo,&DynamicObject::typeinfo,0);
  return uVar2;
}


