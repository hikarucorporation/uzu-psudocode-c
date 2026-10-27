// Function : ~FileStream
// Namespace: Steinberg:Vst:FileStream
// Entry    : 00198c70
// Prototype: undefined ~FileStream(FileStream * this)
// Body     : 00198c70 - 00198c8f


/* Steinberg::Vst::FileStream::~FileStream() */

void __thiscall Steinberg::Vst::FileStream::~FileStream(FileStream *this)

{
  *(undefined ***)this = &PTR_queryInterface_00704288;
  fclose(*(FILE **)(this + 0x10));
  operator_delete(this);
  return;
}


