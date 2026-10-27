// Function : FileStream
// Namespace: Steinberg:Vst:FileStream
// Entry    : 00198c30
// Prototype: undefined FileStream(FileStream * this, undefined8 param_1)
// Body     : 00198c30 - 00198c45


/* Steinberg::Vst::FileStream::FileStream(_IO_FILE*) */

void __thiscall Steinberg::Vst::FileStream::FileStream(FileStream *this,undefined8 param_1)

{
  *(undefined ***)this = &PTR_queryInterface_00704288;
  *(undefined8 *)(this + 0x10) = param_1;
  *(undefined4 *)(this + 8) = 1;
  return;
}


