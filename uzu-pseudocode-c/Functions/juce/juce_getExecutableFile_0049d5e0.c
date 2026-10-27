// Function : juce_getExecutableFile
// Namespace: juce
// Entry    : 0049d5e0
// Prototype: juce * juce_getExecutableFile(juce * this)
// Body     : 0049d5e0 - 0049d67e


/* juce::juce_getExecutableFile() */

juce * __thiscall juce::juce_getExecutableFile(juce *this)

{
  int iVar1;
  long in_RAX;
  int *piVar2;
  long local_18;
  
  local_18 = in_RAX;
  if (juce_getExecutableFile()::filename == '\0') {
    iVar1 = __cxa_guard_acquire(&juce_getExecutableFile()::filename);
    if (iVar1 != 0) {
                    /* try { // try from 0049d64f to 0049d653 has its CatchHandler @ 0049d67f */
      juce_getExecutableFile()::DLAddrReader::getFilename();
      __cxa_atexit(String::~String,&juce_getExecutableFile()::filename,&__dso_handle);
      __cxa_guard_release(&juce_getExecutableFile()::filename);
    }
  }
  File::getCurrentWorkingDirectory((File *)&local_18);
                    /* try { // try from 0049d603 to 0049d60d has its CatchHandler @ 0049d696 */
  File::getChildFile((File *)this,&local_18,juce_getExecutableFile()::filename);
  piVar2 = (int *)(local_18 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
    }
  }
  return this;
}


