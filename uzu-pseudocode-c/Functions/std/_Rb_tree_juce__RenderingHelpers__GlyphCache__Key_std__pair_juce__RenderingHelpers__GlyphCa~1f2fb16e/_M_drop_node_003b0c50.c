// Function : _M_drop_node
// Namespace: std:_Rb_tree_juce__RenderingHelpers__GlyphCache__Key_std__pair_juce__RenderingHelpers__GlyphCa~1f2fb16e
// Entry    : 003b0c50
// Prototype: undefined _M_drop_node(void * param_1)
// Body     : 003b0c50 - 003b0ce8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
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
   >::_M_drop_node(std::_Rb_tree_node<std::pair<juce::RenderingHelpers::GlyphCache::Key const,
   juce::LruCache<juce::RenderingHelpers::GlyphCache::Key, std::vector<juce::GlyphLayer,
   std::allocator<juce::GlyphLayer> >, 128ul>::Pair> >*) */

void __cdecl
std::
_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
::_M_drop_node(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)((long)param_1 + 0x30);
  plVar2 = *(long **)((long)param_1 + 0x38);
  if (plVar4 != plVar2) {
    do {
      if ((char)plVar4[7] == '\0') {
        free((void *)*plVar4);
LAB_003b0ca8:
        *(undefined1 *)(plVar4 + 7) = 0xff;
      }
      else if ((char)plVar4[7] != -1) {
        plVar3 = (long *)*plVar4;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar3 + 8))();
          }
        }
        goto LAB_003b0ca8;
      }
      plVar4 = plVar4 + 8;
    } while (plVar4 != plVar2);
    plVar4 = *(long **)((long)param_1 + 0x30);
  }
  if (plVar4 != (long *)0x0) {
    operator_delete(plVar4);
  }
  plVar4 = *(long **)((long)param_1 + 0x20);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  operator_delete(param_1);
  return;
}


