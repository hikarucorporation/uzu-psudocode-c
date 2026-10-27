// Function : ~vector
// Namespace: std:vector_std__tuple_juce__String_std__optional_float__std__optional_float___std__allocator_s~ccd6b76a
// Entry    : 002af560
// Prototype: undefined ~vector(vector<std::tuple<juce::String,std::optional<float>,std::optional<float>>,std::allocator<std::tuple<juce::String,std::optional<float>,std::optional<float>>>> * this)
// Body     : 002af560 - 002af5d0


/* std::vector<std::tuple<juce::String, std::optional<float>, std::optional<float> >,
   std::allocator<std::tuple<juce::String, std::optional<float>, std::optional<float> > >
   >::~vector() */

void __thiscall
std::
vector<std::tuple<juce::String,std::optional<float>,std::optional<float>>,std::allocator<std::tuple<juce::String,std::optional<float>,std::optional<float>>>>
::~vector(vector<std::tuple<juce::String,std::optional<float>,std::optional<float>>,std::allocator<std::tuple<juce::String,std::optional<float>,std::optional<float>>>>
          *this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int *piVar4;
  
  pvVar3 = *(void **)this;
  pvVar2 = *(void **)(this + 8);
  if (pvVar3 != pvVar2) {
    do {
      piVar4 = (int *)(*(long *)((long)pvVar3 + 0x10) + -0x10);
      if (piVar4 != &juce::emptyString) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar4);
        }
      }
      pvVar3 = (void *)((long)pvVar3 + 0x18);
    } while (pvVar3 != pvVar2);
    pvVar3 = *(void **)this;
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


