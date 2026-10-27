// Function : ~EditorView
// Namespace: Steinberg:Vst:EditorView
// Entry    : 00192be0
// Prototype: undefined ~EditorView(EditorView * this)
// Body     : 00192be0 - 00192bf1


/* Steinberg::Vst::EditorView::~EditorView() */

void __thiscall Steinberg::Vst::EditorView::~EditorView(EditorView *this)

{
  ~EditorView(this);
  operator_delete(this);
  return;
}


