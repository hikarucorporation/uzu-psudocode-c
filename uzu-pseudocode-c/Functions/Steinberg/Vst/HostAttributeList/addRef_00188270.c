// Function : addRef
// Namespace: Steinberg:Vst:HostAttributeList
// Entry    : 00188270
// Prototype: undefined4 addRef(HostAttributeList * this)
// Body     : 00188270 - 00188278


/* Steinberg::Vst::HostAttributeList::addRef() */

undefined4 __thiscall Steinberg::Vst::HostAttributeList::addRef(HostAttributeList *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


