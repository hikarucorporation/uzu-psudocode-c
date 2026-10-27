// Function : _M_get_insert_unique_pos
// Namespace: std:_Rb_tree_juce__RenderingHelpers__GlyphCache__Key_std__pair_juce__RenderingHelpers__GlyphCa~1f2fb16e
// Entry    : 003b0d70
// Prototype: undefined1[16] _M_get_insert_unique_pos(_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>> * this, long * param_1)
// Body     : 003b0d70 - 003b0e25


/* std::_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,
   std::pair<juce::RenderingHelpers::GlyphCache::Key const,
   juce::LruCache<juce::RenderingHelpers::GlyphCache::Key, std::vector<juce::GlyphLayer,
   std::allocator<juce::GlyphLayer> >, 128ul>::Pair>,
   std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key const,
   juce::LruCache<juce::RenderingHelpers::GlyphCache::Key, std::vector<juce::GlyphLayer,
   std::allocator<juce::GlyphLayer> >, 128ul>::Pair> >,
   std::less<juce::RenderingHelpers::GlyphCache::Key>,
   std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key const,
   juce::LruCache<juce::RenderingHelpers::GlyphCache::Key, std::vector<juce::GlyphLayer,
   std::allocator<juce::GlyphLayer> >, 128ul>::Pair> >
   >::_M_get_insert_unique_pos(juce::RenderingHelpers::GlyphCache::Key const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
::_M_get_insert_unique_pos
          (_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
           *this,long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  bool bVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  
  p_Var4 = *(_Rb_tree_node_base **)(this + 0x10);
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var5 = (_Rb_tree_node_base *)(this + 8);
  }
  else {
    do {
      while( true ) {
        p_Var5 = p_Var4;
                    /* try { // try from 003b0dd8 to 003b0ddc has its CatchHandler @ 003b0e2e */
        if (((int)param_1[1] < *(int *)(p_Var5 + 0x28)) ||
           (((int)param_1[1] <= *(int *)(p_Var5 + 0x28) &&
            (bVar6 = juce::FontOptions::operator<
                               ((FontOptions *)(*param_1 + 0x18),
                                (undefined8 *)(*(long *)(p_Var5 + 0x20) + 0x18)), bVar6)))) break;
        p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 0x18);
        if (*(_Rb_tree_node_base **)(p_Var5 + 0x18) == (_Rb_tree_node_base *)0x0) {
          iVar1 = *(int *)(p_Var5 + 0x28);
          iVar2 = (int)param_1[1];
          bVar7 = SBORROW4(iVar1,iVar2);
          iVar3 = iVar1 - iVar2;
          bVar6 = iVar1 == iVar2;
          p_Var4 = p_Var5;
          if (iVar1 < iVar2) goto LAB_003b0e13;
          goto LAB_003b0df9;
        }
      }
      p_Var4 = *(_Rb_tree_node_base **)(p_Var5 + 0x10);
    } while (*(_Rb_tree_node_base **)(p_Var5 + 0x10) != (_Rb_tree_node_base *)0x0);
  }
  if (p_Var5 != *(_Rb_tree_node_base **)(this + 0x18)) {
    p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var5);
    iVar1 = *(int *)(p_Var4 + 0x28);
    iVar2 = (int)param_1[1];
    bVar7 = SBORROW4(iVar1,iVar2);
    iVar3 = iVar1 - iVar2;
    bVar6 = iVar1 == iVar2;
    if (iVar2 <= iVar1) {
LAB_003b0df9:
                    /* try { // try from 003b0e0a to 003b0e0e has its CatchHandler @ 003b0e26 */
      if ((!bVar6 && bVar7 == iVar3 < 0) ||
         (bVar6 = juce::FontOptions::operator<
                            ((FontOptions *)(*(long *)(p_Var4 + 0x20) + 0x18),
                             (undefined8 *)(*param_1 + 0x18)), !bVar6)) {
        p_Var5 = (_Rb_tree_node_base *)0x0;
        goto LAB_003b0e1a;
      }
    }
  }
LAB_003b0e13:
  p_Var4 = (_Rb_tree_node_base *)0x0;
LAB_003b0e1a:
  auVar8._8_8_ = p_Var5;
  auVar8._0_8_ = p_Var4;
  return auVar8;
}


