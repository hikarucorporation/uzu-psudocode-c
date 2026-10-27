// Function : StackArrayStream
// Namespace: juce:NumberToStringConverters:StackArrayStream
// Entry    : 004a7380
// Prototype: undefined StackArrayStream(StackArrayStream * this, long param_1)
// Body     : 004a7380 - 004a7431


/* juce::NumberToStringConverters::StackArrayStream::StackArrayStream(char*) */

void __thiscall
juce::NumberToStringConverters::StackArrayStream::StackArrayStream
          (StackArrayStream *this,long param_1)

{
  int iVar1;
  locale *plVar2;
  
  *(undefined **)this = PTR_vtable_00715ca8 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  std::locale::locale((locale *)(this + 0x38));
  *(undefined ***)this = &PTR__streambuf_00713ca0;
  if (StackArrayStream(char*)::classicLocale == '\0') {
    iVar1 = __cxa_guard_acquire(&StackArrayStream(char*)::classicLocale);
    if (iVar1 != 0) {
                    /* try { // try from 004a73f7 to 004a73fb has its CatchHandler @ 004a7432 */
      plVar2 = (locale *)std::locale::classic();
      std::locale::locale((locale *)&StackArrayStream(char*)::classicLocale,plVar2);
      __cxa_atexit(PTR__locale_00715da0,&StackArrayStream(char*)::classicLocale,&__dso_handle);
      __cxa_guard_release(&StackArrayStream(char*)::classicLocale);
    }
  }
  *(long *)(this + 0x28) = param_1;
  *(long *)(this + 0x20) = param_1;
  *(long *)(this + 0x30) = param_1 + 0x30;
  return;
}


