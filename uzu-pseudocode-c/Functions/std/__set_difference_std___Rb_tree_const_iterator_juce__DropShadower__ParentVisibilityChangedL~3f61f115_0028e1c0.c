// Function : __set_difference<std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::back_insert_iterator<std::vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>>,__gnu_cxx::__ops::_Iter_less_iter>
// Namespace: std
// Entry    : 0028e1c0
// Prototype: vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>> * __set_difference<std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::back_insert_iterator<std::vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>>,__gnu_cxx::__ops::_Iter_less_iter>(_Rb_tree_node_base * param_1, _Rb_tree_node_base * param_2, _Rb_tree_node_base * param_3, _Rb_tree_node_base * param_4, vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>> * param_5)
// Body     : 0028e1c0 - 0028e2dc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::back_insert_iterator<std::vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,
   std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference> >
   > 
   std::__set_difference<std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,
   std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,
   std::back_insert_iterator<std::vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,
   std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference> >
   >, 
   __gnu_cxx::__ops::_Iter_less_iter>(std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,
   std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,
   std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,
   std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,
   std::back_insert_iterator<std::vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,
   std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference> >
   >, __gnu_cxx::__ops::_Iter_less_iter) */

vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
* __cdecl std::
          __set_difference<std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::_Rb_tree_const_iterator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>,std::back_insert_iterator<std::vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>>,__gnu_cxx::__ops::_Iter_less_iter>
                    (_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,
                    _Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4,
                    vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
                    *param_5)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  if (param_1 != param_2) {
    do {
      while( true ) {
        if (param_3 == param_4) {
          do {
            puVar4 = *(undefined8 **)(param_5 + 8);
            if (puVar4 == *(undefined8 **)(param_5 + 0x10)) {
              vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
              ::
              _M_realloc_insert<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference_const&>
                        (param_5,puVar4,(undefined8 *)(param_1 + 0x20));
            }
            else {
              *puVar4 = *(undefined8 *)(param_1 + 0x20);
              lVar2 = *(long *)(param_1 + 0x28);
              puVar4[1] = lVar2;
              if (lVar2 != 0) {
                LOCK();
                *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
                UNLOCK();
                puVar4 = *(undefined8 **)(param_5 + 8);
              }
              *(undefined8 **)(param_5 + 8) = puVar4 + 2;
            }
            param_1 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_1);
          } while (param_1 != param_2);
          return param_5;
        }
        uVar1 = *(ulong *)(param_1 + 0x20);
        if (*(ulong *)(param_3 + 0x20) <= uVar1) break;
        puVar3 = *(ulong **)(param_5 + 8);
        if (puVar3 == *(ulong **)(param_5 + 0x10)) {
          vector<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference,std::allocator<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference>>
          ::
          _M_realloc_insert<juce::DropShadower::ParentVisibilityChangedListener::ComponentWithWeakReference_const&>
                    (param_5,puVar3,(undefined8 *)(param_1 + 0x20));
        }
        else {
          *puVar3 = uVar1;
          uVar1 = *(ulong *)(param_1 + 0x28);
          puVar3[1] = uVar1;
          if (uVar1 != 0) {
            LOCK();
            *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1;
            UNLOCK();
            puVar3 = *(ulong **)(param_5 + 8);
          }
          *(ulong **)(param_5 + 8) = puVar3 + 2;
        }
        param_1 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_1);
        if (param_1 == param_2) {
          return param_5;
        }
      }
      if (uVar1 <= *(ulong *)(param_3 + 0x20)) {
        param_1 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_1);
      }
      param_3 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_3);
    } while (param_1 != param_2);
  }
  return param_5;
}


