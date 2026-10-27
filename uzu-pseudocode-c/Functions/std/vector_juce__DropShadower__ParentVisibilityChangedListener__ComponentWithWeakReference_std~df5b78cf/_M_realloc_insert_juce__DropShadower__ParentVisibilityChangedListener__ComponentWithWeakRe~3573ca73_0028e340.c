// Function : _M_realloc_insert<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference_const&>
// Namespace: std:vector_juce__DropShadower__ParentVisibilityChangedListener__ComponentWithWeakReference_std~df5b78cf
// Entry    : 0028e340
// Prototype: void _M_realloc_insert<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference_const&>(vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>> * this, undefined8 * param_1, undefined8 * param_2)
// Body     : 0028e340 - 0028e48b


/* void std::vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,
   std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>
   >::_M_realloc_insert<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference
   const&>(__gnu_cxx::__normal_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference*,
   std::vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,
   std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference> >
   >, juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference const&) */

void __thiscall
std::
vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
::
_M_realloc_insert<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference_const&>
          (vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
           *this,undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)(this + 8);
  lVar3 = (long)puVar2 - (long)puVar1;
  if (lVar3 == 0x7ffffffffffffff0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar7 = lVar3 >> 4;
  uVar4 = 1;
  if (lVar3 != 0) {
    uVar4 = uVar7;
  }
  uVar9 = uVar4 + uVar7;
  if (uVar9 >> 0x3b != 0) {
    uVar9 = 0x7ffffffffffffff;
  }
  if (CARRY8(uVar4,uVar7)) {
    uVar9 = 0x7ffffffffffffff;
  }
  puVar5 = operator_new(uVar9 * 0x10);
  *(undefined8 *)((long)puVar5 + ((long)param_1 - (long)puVar1)) = *param_2;
  lVar3 = param_2[1];
  *(long *)((long)puVar5 + ((long)param_1 - (long)puVar1) + 8) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar8 = puVar5;
  if (puVar1 != param_1) {
    puVar6 = puVar1;
    do {
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1];
      puVar6[1] = 0;
      puVar8 = puVar8 + 2;
      puVar6 = puVar6 + 2;
    } while (puVar6 != param_1);
  }
  for (; puVar6 = puVar8 + 2, puVar2 != param_1; param_1 = param_1 + 2) {
    *puVar6 = *param_1;
    puVar8[3] = param_1[1];
    param_1[1] = 0;
    puVar8 = puVar6;
  }
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1);
  }
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar6;
  *(undefined8 **)(this + 0x10) = puVar5 + uVar9 * 2;
  return;
}


