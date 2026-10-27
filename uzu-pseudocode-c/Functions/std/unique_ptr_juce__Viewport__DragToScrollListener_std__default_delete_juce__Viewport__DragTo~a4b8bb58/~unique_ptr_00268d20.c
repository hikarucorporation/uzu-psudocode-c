// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__Viewport__DragToScrollListener_std__default_delete_juce__Viewport__DragTo~a4b8bb58
// Entry    : 00268d20
// Prototype: undefined ~unique_ptr(unique_ptr<juce::Viewport::DragToScrollListener,std::default_delete<juce::Viewport::DragToScrollListener>> * this)
// Body     : 00268d20 - 00268d4d


/* std::unique_ptr<juce::Viewport::DragToScrollListener,
   std::default_delete<juce::Viewport::DragToScrollListener> >::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::Viewport::DragToScrollListener,std::default_delete<juce::Viewport::DragToScrollListener>>
::~unique_ptr(unique_ptr<juce::Viewport::DragToScrollListener,std::default_delete<juce::Viewport::DragToScrollListener>>
              *this)

{
  DragToScrollListener *this_00;
  
  this_00 = *(DragToScrollListener **)this;
  if (this_00 != (DragToScrollListener *)0x0) {
    juce::Viewport::DragToScrollListener::~DragToScrollListener(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)this = 0;
  return;
}


