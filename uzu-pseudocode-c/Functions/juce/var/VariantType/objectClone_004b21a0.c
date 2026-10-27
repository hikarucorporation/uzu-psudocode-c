// Function : objectClone
// Namespace: juce:var:VariantType
// Entry    : 004b21a0
// Prototype: VariantType * objectClone(VariantType * this, long * param_1)
// Body     : 004b21a0 - 004b2233


/* WARNING: Removing unreachable block (ram,0x004b2212) */
/* juce::var::VariantType::objectClone(juce::var const&) */

VariantType * __thiscall juce::var::VariantType::objectClone(VariantType *this,long *param_1)

{
  long lVar1;
  long *plVar2;
  long local_10;
  
                    /* try { // try from 004b21af to 004b21b1 has its CatchHandler @ 004b2234 */
  lVar1 = (**(code **)(*param_1 + 0x38))(param_1 + 1);
  if ((lVar1 == 0) ||
     (plVar2 = (long *)__dynamic_cast(lVar1,&ReferenceCountedObject::typeinfo,
                                      &DynamicObject::typeinfo,0), plVar2 == (long *)0x0)) {
    *(undefined1 **)this = &Instance::attributesVoid;
    return this;
  }
  (**(code **)(*plVar2 + 0x10))(&local_10,plVar2);
  *(undefined1 **)this = &Instance::attributesObject;
  *(long *)(this + 8) = local_10;
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  return this;
}


