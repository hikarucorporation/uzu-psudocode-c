// Function : _M_erase
// Namespace: std:_Rb_tree_juce__Graphics__drawFittedText_juce__String_const__juce__Rectangle_int__juce__Jus~cc292141
// Entry    : 0032bf90
// Prototype: undefined _M_erase(void * param_1)
// Body     : 0032bf90 - 0032c08d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree<juce::Graphics::drawFittedText(juce::String const&, juce::Rectangle<int>,
   juce::Justification, int, float, juce::GlyphArrangementOptions) const::ArrangementArgs,
   std::pair<juce::Graphics::drawFittedText(juce::String const&, juce::Rectangle<int>,
   juce::Justification, int, float, juce::GlyphArrangementOptions) const::ArrangementArgs const,
   juce::LruCache<juce::Graphics::drawFittedText(juce::String const&, juce::Rectangle<int>,
   juce::Justification, int, float, juce::GlyphArrangementOptions) const::ArrangementArgs,
   juce::GlyphArrangement, 128ul>::Pair>,
   std::_Select1st<std::pair<juce::Graphics::drawFittedText(juce::String const&,
   juce::Rectangle<int>, juce::Justification, int, float, juce::GlyphArrangementOptions)
   const::ArrangementArgs const, juce::LruCache<juce::Graphics::drawFittedText(juce::String const&,
   juce::Rectangle<int>, juce::Justification, int, float, juce::GlyphArrangementOptions)
   const::ArrangementArgs, juce::GlyphArrangement, 128ul>::Pair> >,
   std::less<juce::Graphics::drawFittedText(juce::String const&, juce::Rectangle<int>,
   juce::Justification, int, float, juce::GlyphArrangementOptions) const::ArrangementArgs>,
   std::allocator<std::pair<juce::Graphics::drawFittedText(juce::String const&,
   juce::Rectangle<int>, juce::Justification, int, float, juce::GlyphArrangementOptions)
   const::ArrangementArgs const, juce::LruCache<juce::Graphics::drawFittedText(juce::String const&,
   juce::Rectangle<int>, juce::Justification, int, float, juce::GlyphArrangementOptions)
   const::ArrangementArgs, juce::GlyphArrangement, 128ul>::Pair> >
   >::_M_erase(std::_Rb_tree_node<std::pair<juce::Graphics::drawFittedText(juce::String const&,
   juce::Rectangle<int>, juce::Justification, int, float, juce::GlyphArrangementOptions)
   const::ArrangementArgs const, juce::LruCache<juce::Graphics::drawFittedText(juce::String const&,
   juce::Rectangle<int>, juce::Justification, int, float, juce::GlyphArrangementOptions)
   const::ArrangementArgs, juce::GlyphArrangement, 128ul>::Pair> >*) */

void __cdecl
std::
_Rb_tree<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs,std::pair<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs_const,juce::LruCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs,juce::GlyphArrangement,128ul>::Pair>,std::_Select1st<std::pair<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs_const,juce::LruCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs,juce::GlyphArrangement,128ul>::Pair>>,std::less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>,std::allocator<std::pair<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs_const,juce::LruCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs,juce::GlyphArrangement,128ul>::Pair>>>
::_M_erase(void *param_1)

{
  long *plVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(*(void **)((long)param_1 + 0x18));
      pvVar3 = *(void **)((long)param_1 + 0x10);
      if (0 < *(int *)((long)param_1 + 0x5c)) {
        lVar7 = 0;
        lVar5 = 0;
        do {
          plVar4 = *(long **)(*(long *)((long)param_1 + 0x50) + lVar7);
          if (plVar4 != (long *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar4 + 8))();
            }
          }
          lVar5 = lVar5 + 1;
          lVar7 = lVar7 + 0x20;
        } while (lVar5 < *(int *)((long)param_1 + 0x5c));
      }
      *(undefined4 *)((long)param_1 + 0x5c) = 0;
      free(*(void **)((long)param_1 + 0x50));
      piVar6 = (int *)(*(long *)((long)param_1 + 0x28) + -0x10);
      if (piVar6 == &juce::emptyString) {
LAB_0032c03e:
        plVar4 = *(long **)((long)param_1 + 0x20);
      }
      else {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 != 0) goto LAB_0032c03e;
        operator_delete__(piVar6);
        plVar4 = *(long **)((long)param_1 + 0x20);
      }
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      operator_delete(param_1);
      param_1 = pvVar3;
    } while (pvVar3 != (void *)0x0);
  }
  return;
}


