// Function : queryInterface
// Namespace: Steinberg:Vst:HostAttributeList
// Entry    : 001882c0
// Prototype: undefined8 queryInterface(HostAttributeList * this, long * param_1, undefined8 * param_2)
// Body     : 001882c0 - 00188306


/* Steinberg::Vst::HostAttributeList::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::Vst::HostAttributeList::queryInterface
          (HostAttributeList *this,long *param_1,undefined8 *param_2)

{
  if (((*param_1 == FUnknown::iid._8_8_) && (param_1[1] == FUnknown::iid._16_8_)) ||
     ((*param_1 == IAttributeList::iid._8_8_ && (param_1[1] == IAttributeList::iid._16_8_)))) {
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    *param_2 = this;
    return 0;
  }
  *param_2 = 0;
  return 0xffffffff;
}


