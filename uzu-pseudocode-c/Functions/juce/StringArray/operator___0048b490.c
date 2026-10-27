// Function : operator[]
// Namespace: juce:StringArray
// Entry    : 0048b490
// Prototype: undefined8 * operator[](StringArray * this, uint param_1)
// Body     : 0048b490 - 0048b501


/* juce::StringArray::operator[](int) const */

undefined8 * __thiscall juce::StringArray::operator[](StringArray *this,uint param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 < *(uint *)(this + 0xc)) {
    puVar2 = (undefined8 *)((long)(int)param_1 * 8 + *(long *)this);
  }
  else {
    puVar2 = &operator[](int)::empty;
    if (operator[](int)::empty == '\0') {
      iVar1 = __cxa_guard_acquire(&operator[](int)::empty);
      if (iVar1 != 0) {
        operator[](int)::empty = &DAT_0061ac58;
        __cxa_atexit(juce::String::~String,&operator[](int)::empty,&__dso_handle);
        __cxa_guard_release(&operator[](int)::empty);
        return &operator[](int)::empty;
      }
    }
  }
  return puVar2;
}


